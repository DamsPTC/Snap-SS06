/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102bec188; end: 102bec587;  */

int FUN_102bec188(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102bec204;
        goto LAB_102bec1e8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102bec1e8:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102bec204:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102bec588; end: 102bec5c7;  */

void FUN_102bec588(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe020 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3064c;
  func_0x000107c61520(&UNK_10db3064c,&UNK_1105af728);
  puRam0000000112efe020 = puVar1;
  return;
}



/* Entry: 102bec5c8; end: 102bec5cb;  */

void FUN_102bec5c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe028 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30704;
  func_0x000107c61520(&UNK_10db30704,&UNK_1105af698);
  puRam0000000112efe028 = puVar1;
  return;
}



/* Entry: 102bec5cc; end: 102bec60b;  */

void FUN_102bec5cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe028 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30704;
  func_0x000107c61520(&UNK_10db30704,&UNK_1105af698);
  puRam0000000112efe028 = puVar1;
  return;
}



/* Entry: 102bec60c; end: 102bec60f;  */

void FUN_102bec60c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe030 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db307bc;
  func_0x000107c61520(&UNK_10db307bc,&UNK_1105af608);
  puRam0000000112efe030 = puVar1;
  return;
}



/* Entry: 102bec610; end: 102bec64f;  */

void FUN_102bec610(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe030 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db307bc;
  func_0x000107c61520(&UNK_10db307bc,&UNK_1105af608);
  puRam0000000112efe030 = puVar1;
  return;
}



/* Entry: 102bec650; end: 102bec653;  */

void FUN_102bec650(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe038 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30754;
  func_0x000107c61520(&UNK_10db30754,&UNK_1105af608);
  puRam0000000112efe038 = puVar1;
  return;
}



/* Entry: 102bec654; end: 102bec693;  */

void FUN_102bec654(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe038 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30754;
  func_0x000107c61520(&UNK_10db30754,&UNK_1105af608);
  puRam0000000112efe038 = puVar1;
  return;
}



/* Entry: 102bec694; end: 102bec697;  */

void FUN_102bec694(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe040 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3072c;
  func_0x000107c61520(&UNK_10db3072c,&UNK_1105af608);
  puRam0000000112efe040 = puVar1;
  return;
}



/* Entry: 102bec698; end: 102bec6d7;  */

void FUN_102bec698(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe040 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3072c;
  func_0x000107c61520(&UNK_10db3072c,&UNK_1105af608);
  puRam0000000112efe040 = puVar1;
  return;
}



/* Entry: 102bec6d8; end: 102bec6db;  */

void FUN_102bec6d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe048 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3069c;
  func_0x000107c61520(&UNK_10db3069c,&UNK_1105af698);
  puRam0000000112efe048 = puVar1;
  return;
}



/* Entry: 102bec6dc; end: 102bec71b;  */

void FUN_102bec6dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe048 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3069c;
  func_0x000107c61520(&UNK_10db3069c,&UNK_1105af698);
  puRam0000000112efe048 = puVar1;
  return;
}



/* Entry: 102bec71c; end: 102bec71f;  */

void FUN_102bec71c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe050 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30674;
  func_0x000107c61520(&UNK_10db30674,&UNK_1105af698);
  puRam0000000112efe050 = puVar1;
  return;
}



/* Entry: 102bec720; end: 102bec75f;  */

void FUN_102bec720(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe050 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db30674;
  func_0x000107c61520(&UNK_10db30674,&UNK_1105af698);
  puRam0000000112efe050 = puVar1;
  return;
}



/* Entry: 102bec760; end: 102bec763;  */

void FUN_102bec760(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe058 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db305e4;
  func_0x000107c61520(&UNK_10db305e4,&UNK_1105af728);
  puRam0000000112efe058 = puVar1;
  return;
}



/* Entry: 102bec764; end: 102bec7a3;  */

void FUN_102bec764(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe058 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db305e4;
  func_0x000107c61520(&UNK_10db305e4,&UNK_1105af728);
  puRam0000000112efe058 = puVar1;
  return;
}



/* Entry: 102bec7a4; end: 102bec7a7;  */

void FUN_102bec7a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe060 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db305bc;
  func_0x000107c61520(&UNK_10db305bc,&UNK_1105af728);
  puRam0000000112efe060 = puVar1;
  return;
}



/* Entry: 102bec7a8; end: 102bec7e7;  */

void FUN_102bec7a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efe060 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db305bc;
  func_0x000107c61520(&UNK_10db305bc,&UNK_1105af728);
  puRam0000000112efe060 = puVar1;
  return;
}



/* Entry: 102bec7e8; end: 102bec83b;  */

undefined1 FUN_102bec7e8(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 102bec83c; end: 102bec88f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bec83c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  if (*(long *)(unaff_x20 + _DAT_112efe088) != 0) {
    func_0x000107c498f8();
  }
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102bec890; end: 102bec903; -[_TtC31InspectorNativeUIImplementation24UIHierarchyChangeMonitor dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bec890(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112efe088);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c498f8(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102bec904; end: 102bec997; -[_TtC31InspectorNativeUIImplementation24UIHierarchyChangeMonitor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102bec958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bec97c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bec95c) */
/* WARNING: Removing unreachable block (ram,0x000102bec980) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bec904(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112efe068 + 8));
  FUN_102bf06a0(*(undefined8 *)(param_1 + _DAT_112efe070),
                ((undefined8 *)(param_1 + _DAT_112efe070))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efe078));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112efe080));
  return;
}



/* Entry: 102bec998; end: 102becb83;  */

/* WARNING: Possible PIC construction at 0x000102becb5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102becb60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bec998(undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong unaff_x20;
  ulong uVar10;
  
  uVar5 = unaff_x20;
  func_0x000107c614f0();
  uVar6 = uVar5;
  FUN_102be80e0();
  puVar2 = (ulong *)(unaff_x20 + _DAT_112efe0a0);
  uVar10 = puVar2[1];
  if ((uVar10 != 0) &&
     ((uVar6 == *puVar2 && uVar10 == param_2 ||
      (uVar7 = uVar6, func_0x000107c605b8(), (uVar7 & 1) != 0)))) {
    func_0x000107c6142c(param_2);
    lVar1 = *(long *)(unaff_x20 + _DAT_112efe090) + 1;
    if (!SCARRY8(*(long *)(unaff_x20 + _DAT_112efe090),1)) {
      *(long *)(unaff_x20 + _DAT_112efe090) = lVar1;
      lVar3 = _DAT_112efe098;
      if ((((*(byte *)(unaff_x20 + _DAT_112efe098) & 1) == 0) && (0x13 < lVar1)) &&
         (*(long *)(unaff_x20 + _DAT_112efe088) != 0)) {
        func_0x000107c576a4();
        *(undefined1 *)(unaff_x20 + lVar3) = 1;
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102becb84);
    (*pcVar4)();
  }
  *puVar2 = uVar6;
  puVar2[1] = param_2;
  func_0x000107c6142c(uVar10);
  *(undefined8 *)(unaff_x20 + _DAT_112efe090) = 0;
  lVar1 = _DAT_112efe098;
  if ((*(char *)(unaff_x20 + _DAT_112efe098) == '\x01') &&
     (*(long *)(unaff_x20 + _DAT_112efe088) != 0)) {
    func_0x000107c576a4();
    *(undefined1 *)(unaff_x20 + lVar1) = 0;
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112efe0a8) + 1;
  if (!SCARRY8(*(long *)(unaff_x20 + _DAT_112efe0a8),1)) {
    *(long *)(unaff_x20 + _DAT_112efe0a8) = lVar1;
    puVar8 = &UNK_1105af918;
    func_0x000107c613fc(&UNK_1105af918,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    puVar9 = &UNK_1105af940;
    func_0x000107c613fc(&UNK_1105af940,0x28,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    *(long *)(puVar9 + 0x18) = lVar1;
    *(ulong *)(puVar9 + 0x20) = uVar5;
    func_0x0001001ca524(0x30,0,0x3c,4,0,0,&UNK_10db30920,puVar9,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102becb80);
  (*pcVar4)();
}



/* Entry: 102becb84; end: 102becbab; -[_TtC31InspectorNativeUIImplementation24UIHierarchyChangeMonitor onDisplayLinkTick] */

void FUN_102becb84(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bec998();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102becbac; end: 102becc17;  */

void FUN_102becbac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102becc18;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(150000000)
  ;
  return;
}



/* Entry: 102becc18; end: 102beccb7;  */

void FUN_102becc18(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  lVar1 = *(long *)(lVar4 + 0x48);
  func_0x000107c615c0(lVar1);
  uVar2 = *(undefined8 *)(lVar4 + 0x38);
  if (unaff_x20 == 0) {
    func_0x000100eea164();
    func_0x000107c5fca8(uVar2,lVar1);
    pcVar3 = FUN_102beccb8;
  }
  else {
    func_0x000107c614ac();
    func_0x000100eea164();
    func_0x000107c5fca8(uVar2,unaff_x20);
    pcVar3 = (code *)0x102bf1290;
    lVar1 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,uVar2,lVar1);
  return;
}



/* Entry: 102beccb8; end: 102becd33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102beccb8(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + _DAT_112efe0a8) == *(long *)(unaff_x22 + 0x30)) {
      FUN_102becd34();
    }
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000102becd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102becd34; end: 102bece77;  */

/* WARNING: Possible PIC construction at 0x000102bece18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bece1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102becd34(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong unaff_x20;
  
  uVar3 = unaff_x20;
  func_0x000107c614f0();
  uVar4 = uVar3;
  FUN_102be948c();
  if ((uVar4 & 1) != 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112efe0b0) + 1;
    if (SCARRY8(*(long *)(unaff_x20 + _DAT_112efe0b0),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bece74);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + _DAT_112efe0b0) = lVar1;
    if (lVar1 < 10) {
      lVar1 = *(long *)(unaff_x20 + _DAT_112efe0a8) + 1;
      if (!SCARRY8(*(long *)(unaff_x20 + _DAT_112efe0a8),1)) {
        *(long *)(unaff_x20 + _DAT_112efe0a8) = lVar1;
        puVar5 = &UNK_1105af918;
        func_0x000107c613fc(&UNK_1105af918,0x18,7);
        func_0x000107c61614(puVar5 + 0x10);
        puVar6 = &UNK_1105af968;
        func_0x000107c613fc(&UNK_1105af968,0x28,7);
        *(undefined **)(puVar6 + 0x10) = puVar5;
        *(long *)(puVar6 + 0x18) = lVar1;
        *(ulong *)(puVar6 + 0x20) = uVar3;
        func_0x0001001ca524(0x30,0,0x3c,4,0,0,&UNK_10db30928,puVar6,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(puVar6);
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bece78);
      (*pcVar2)();
    }
  }
  *(undefined8 *)(unaff_x20 + _DAT_112efe0b0) = 0;
  lVar1 = _DAT_112efe0b8;
  if ((*(byte *)(unaff_x20 + _DAT_112efe0b8) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112efe0b8) = 1;
    FUN_102bece78();
    *(undefined1 *)(unaff_x20 + lVar1) = 0;
  }
  return;
}



/* Entry: 102bece78; end: 102bed70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bece78(void)

{
  ulong *puVar1;
  long lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  undefined8 **ppuVar15;
  undefined8 *puVar16;
  long extraout_x8;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long unaff_x20;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auStack_2e0 [8];
  undefined1 *puStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  ulong uStack_2b0;
  ulong *puStack_2a8;
  long lStack_2a0;
  ulong uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 *puStack_280;
  undefined1 auStack_240 [24];
  undefined8 **ppuStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
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
  
  lVar23 = unaff_x20;
  func_0x000107c614f0();
  lVar6 = 0;
  lStack_288 = lVar23;
  func_0x000107c5eea4();
  lVar23 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  uVar22 = *(undefined8 *)(unaff_x20 + _DAT_112efe078);
  uVar12 = 0x112efe0f0;
  func_0x0001000285a8(0x112efe0f0,&UNK_10db30930);
  uStack_290 = uVar22;
  func_0x000107c5ffe4(&puStack_120,0x102bf01b0,&uStack_d0,uVar12);
  puVar10 = puStack_120;
  uVar25 = puStack_120[2];
  if (uVar25 != 0) {
    puVar7 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_2d8 = auStack_2e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lStack_2d0 = lVar23;
    lStack_2c8 = lVar6;
    FUN_102bf01c8();
    uVar24 = 0;
    pcVar4 = *(code **)(unaff_x20 + _DAT_112efe070);
    uVar17 = ((undefined8 *)(unaff_x20 + _DAT_112efe070))[1];
    puStack_2c0 = puVar10 + 4;
    puStack_2b8 = puVar10;
    do {
      puVar11 = puStack_2b8;
      puVar10 = puStack_2c0 + uVar24 * 10;
      uVar20 = uVar24;
      while( true ) {
        if ((ulong)puVar11[2] <= uVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bed6e0);
          (*pcVar4)();
        }
        uStack_c8 = puVar10[1];
        uStack_d0 = *puVar10;
        uVar12 = puVar10[3];
        dVar26 = (double)puVar10[2];
        uVar28 = puVar10[5];
        uVar22 = puVar10[4];
        uVar29 = puVar10[6];
        uVar24 = uVar20 + 1;
        ppuVar13 = &puStack_120;
        dVar27 = dVar26;
        FUN_102bf0640(&uStack_d0);
        puVar8 = &uStack_d0;
        FUN_102bf03e8();
        if (puVar7[2] == 0) break;
        func_0x000107c61434(puVar7);
        ppuVar14 = ppuVar13;
        func_0x000100029284(puVar8);
        func_0x000107c6142c(puVar7);
        if (((ulong)ppuVar14 & 1) == 0) break;
        func_0x000102bf0674(&uStack_d0);
        func_0x000107c6142c(ppuVar13);
        puVar10 = puVar10 + 10;
        uVar20 = uVar24;
        if (uVar25 == uVar24) goto LAB_102bed1c0;
      }
      uVar9 = (ulong)dVar26 >> 8 & 0xff;
      uVar18 = (ulong)dVar26 >> 0x10 & 0xff;
      if ((SUB81(dVar26,0) == '\0') && (pcVar4 != (code *)0x0)) {
        uVar9 = uVar17;
        func_0x000107c6157c(uVar17,uVar18,uVar12,uVar22,uVar28,uVar29);
        (*pcVar4)();
        FUN_102bf06a0(pcVar4,uVar17);
      }
      else {
        FUN_102bfa0d4();
      }
      puVar10 = puVar7;
      func_0x000107c61558();
      puVar11 = puVar8;
      ppuVar14 = ppuVar13;
      puStack_120 = puVar7;
      func_0x000100029284();
      uVar19 = (ulong)~(uint)ppuVar14 & 1;
      lVar23 = puVar7[2] + uVar19;
      if (SCARRY8(puVar7[2],uVar19)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102bed6f0);
        (*pcVar4)();
      }
      if ((long)puVar7[3] < lVar23) {
        func_0x000102bef91c(lVar23,puVar10);
        puVar11 = puVar8;
        ppuVar15 = ppuVar13;
        func_0x000100029284();
        if (((uint)ppuVar14 & 1) != ((uint)ppuVar15 & 1)) {
LAB_102bed700:
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bed710);
          (*pcVar4)();
        }
      }
      else if ((int)puVar10 == 0) {
        func_0x000102bef340();
      }
      puVar7 = puStack_120;
      if (((ulong)ppuVar14 & 1) == 0) {
        puStack_120[((ulong)puVar11 >> 6) + 8] =
             puStack_120[((ulong)puVar11 >> 6) + 8] | 1L << ((ulong)puVar11 & 0x3f);
        puVar10 = (undefined8 *)(puStack_120[6] + (long)puVar11 * 0x10);
        *puVar10 = puVar8;
        puVar10[1] = ppuVar13;
        puVar1 = (ulong *)(puStack_120[7] + (long)puVar11 * 0x10);
        *puVar1 = uVar9;
        puVar1[1] = uVar18;
        if (SCARRY8(puStack_120[2],1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bed6f4);
          (*pcVar4)();
        }
        puStack_120[2] = puStack_120[2] + 1;
        func_0x000107c61434(ppuVar13);
      }
      else {
        puVar1 = (ulong *)(puStack_120[7] + (long)puVar11 * 0x10);
        uVar19 = *puVar1;
        uVar21 = puVar1[1];
        *puVar1 = uVar9;
        puVar1[1] = uVar18;
        func_0x000107c6142c(uVar21);
        func_0x000107c6142c(uVar19);
      }
      func_0x000102bf0674(&uStack_d0);
      func_0x000107c6142c(ppuVar13);
    } while (uVar25 - 1 != uVar20);
LAB_102bed1c0:
    puVar10 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000102bf02e8();
    puStack_2a8 = puVar7 + 8;
    uVar17 = *puStack_2a8;
    uVar20 = 1L << ((ulong)*(byte *)(puVar7 + 4) & 0x3f);
    uVar24 = 0xffffffffffffffff;
    if ((*(byte *)(puVar7 + 4) & 0x3f) < 6) {
      uVar24 = ~(-1L << (uVar20 & 0x3f));
    }
    func_0x000107c61434(puVar7);
    lVar23 = 0;
    uVar24 = uVar24 & uVar17;
    puStack_280 = puVar7;
    uStack_2b0 = uVar20 + 0x3f >> 6;
    while( true ) {
      while (puVar7 = puStack_280, uVar24 != 0) {
        uVar17 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uStack_298 = uVar24 - 1 & uVar24;
        lVar6 = *(long *)(puStack_280[7] +
                          (lVar23 << 10 | LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) << 4) + 8);
        uVar17 = 1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
        uVar24 = 0xffffffffffffffff;
        if ((*(byte *)(lVar6 + 0x20) & 0x3f) < 6) {
          uVar24 = ~(-1L << (uVar17 & 0x3f));
        }
        uVar24 = uVar24 & *(ulong *)(lVar6 + 0x40);
        lStack_2a0 = lVar23;
        func_0x000107c61434();
        lVar23 = 0;
        while( true ) {
          while (uVar24 != 0) {
            uVar20 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
            uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
            uVar18 = LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) | lVar23 << 6;
            puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar18 * 0x10);
            uVar20 = *puVar1;
            uVar9 = puVar1[1];
            uVar12 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar18 * 8);
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61434(uVar9);
            puVar7 = puVar10;
            func_0x000107c61558();
            uVar18 = uVar20;
            uVar19 = uVar9;
            puStack_120 = puVar10;
            func_0x000100029284();
            uVar21 = (ulong)~(uint)uVar19 & 1;
            lVar2 = puVar10[2] + uVar21;
            if (SCARRY8(puVar10[2],uVar21)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102bed6e8);
              (*pcVar4)();
            }
            if ((long)puVar10[3] < lVar2) {
              FUN_102bef680(lVar2,puVar7);
              uVar18 = uVar20;
              uVar21 = uVar9;
              func_0x000100029284();
              if (((uint)uVar19 & 1) != ((uint)uVar21 & 1)) goto LAB_102bed700;
            }
            else if (((ulong)puVar7 & 1) == 0) {
              func_0x000102bef1d0();
            }
            puVar10 = puStack_120;
            uVar24 = uVar24 - 1 & uVar24;
            if ((uVar19 & 1) == 0) {
              puStack_120[(uVar18 >> 6) + 8] =
                   puStack_120[(uVar18 >> 6) + 8] | 1L << (uVar18 & 0x3f);
              puVar1 = (ulong *)(puStack_120[6] + uVar18 * 0x10);
              *puVar1 = uVar20;
              puVar1[1] = uVar9;
              *(undefined8 *)(puStack_120[7] + uVar18 * 8) = uVar12;
              func_0x000107c61170(uVar12);
              if (SCARRY8(puVar10[2],1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x102bed6ec);
                (*pcVar4)();
              }
              puVar10[2] = puVar10[2] + 1;
            }
            else {
              uVar22 = *(undefined8 *)(puStack_120[7] + uVar18 * 8);
              *(undefined8 *)(puStack_120[7] + uVar18 * 8) = uVar12;
              func_0x000107c61170(uVar12);
              func_0x000107c6142c(uVar9);
              func_0x000107c61170(uVar22);
            }
          }
          bVar5 = SCARRY8(lVar23,1);
          lVar23 = lVar23 + 1;
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bed6dc);
            (*pcVar4)();
          }
          if ((long)(uVar17 + 0x3f >> 6) <= lVar23) break;
          uVar24 = ((ulong *)(lVar6 + 0x40))[lVar23];
        }
        func_0x000107c61574(lVar6);
        lVar23 = lStack_2a0;
        uVar24 = uStack_298;
      }
      lVar6 = lVar23 + 1;
      if (SCARRY8(lVar23,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102bed6e4);
        (*pcVar4)();
      }
      if ((long)uStack_2b0 <= lVar6) break;
      lVar23 = lVar6;
      uVar24 = puStack_2a8[lVar6];
    }
    func_0x000107c61574(puStack_280);
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112efe0c0);
    *(undefined8 **)(unaff_x20 + _DAT_112efe0c0) = puVar10;
    func_0x000107c61434();
    func_0x000107c6142c(uVar12);
    puVar3 = puStack_2d8;
    func_0x000107c5eea0(puStack_2d8);
    func_0x000107c5ee8c();
    (**(code **)(lStack_2d0 + 8))(puVar3,lStack_2c8);
    dVar27 = dVar27 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar27)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102bed6f8);
      (*pcVar4)();
    }
    if (dVar27 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102bed6fc);
      (*pcVar4)();
    }
    if (9.223372036854776e+18 <= dVar27) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102bed700);
      (*pcVar4)();
    }
    pcVar4 = *(code **)(unaff_x20 + _DAT_112efe068);
    puVar11 = puStack_2c0;
    do {
      uStack_118 = puVar11[1];
      puStack_120 = (undefined8 *)*puVar11;
      uStack_108 = puVar11[3];
      uStack_110 = puVar11[2];
      uStack_f8 = puVar11[5];
      uStack_100 = puVar11[4];
      uStack_e8 = puVar11[7];
      uStack_f0 = puVar11[6];
      uStack_d8 = puVar11[9];
      uStack_e0 = puVar11[8];
      puVar8 = &uStack_1c0;
      FUN_102bf0640(&puStack_120);
      ppuVar13 = &puStack_120;
      FUN_102bf03e8();
      if (puVar7[2] == 0) {
        func_0x000102bf0674(&puStack_120);
LAB_102bed514:
        func_0x000107c6142c(puVar8);
      }
      else {
        func_0x000107c61434(puVar7);
        puVar16 = puVar8;
        func_0x000100029284();
        if (((ulong)puVar16 & 1) == 0) {
          func_0x000102bf0674(&puStack_120);
          func_0x000107c6142c(puVar8);
          puVar8 = puVar7;
          goto LAB_102bed514;
        }
        puVar16 = (undefined8 *)(puVar7[7] + (long)ppuVar13 * 0x10);
        uVar28 = puVar16[1];
        uVar22 = *puVar16;
        func_0x000107c61434(uVar22);
        func_0x000107c61434(uVar22,uVar28);
        func_0x000107c6142c(puVar7);
        func_0x000107c6142c(puVar8);
        ppuStack_228 = &puStack_120;
        lStack_208 = lStack_288;
        uVar12 = 0x112efe0f8;
        uStack_220 = uVar22;
        uStack_218 = uVar28;
        lStack_210 = (long)dVar27;
        func_0x0001000285a8(0x112efe0f8,&UNK_10db30938);
        func_0x000107c5ffe4(&uStack_200,FUN_102bf06b0,auStack_240,uVar12);
        func_0x000107c6142c(uVar28);
        func_0x000107c6142c(uVar22);
        lStack_1b8 = lStack_1f8;
        uStack_1c0 = uStack_200;
        uStack_1a8 = uStack_1e8;
        uStack_1b0 = uStack_1f0;
        uStack_198 = uStack_1d8;
        uStack_1a0 = uStack_1e0;
        uStack_188 = uStack_1c8;
        uStack_190 = uStack_1d0;
        if (lStack_1f8 == 0) {
          func_0x000102bf0674(&puStack_120);
          puVar7 = puStack_280;
        }
        else {
          lStack_158 = lStack_1f8;
          uStack_160 = uStack_200;
          uStack_148 = uStack_1e8;
          uStack_150 = uStack_1f0;
          uStack_138 = uStack_1d8;
          uStack_140 = uStack_1e0;
          uStack_128 = uStack_1c8;
          uStack_130 = uStack_1d0;
          (*pcVar4)(&uStack_160);
          func_0x000102bf0674(&puStack_120);
          func_0x000102bf0f9c(&uStack_1c0,0x112efe0f8,&UNK_10db30938);
          puVar7 = puStack_280;
        }
      }
      puVar11 = puVar11 + 10;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
    func_0x000107c6142c(puVar10);
    func_0x000107c6142c(puVar7);
    puVar10 = puStack_2b8;
  }
  func_0x000107c6142c(puVar10);
  return;
}



/* Entry: 102bed710; end: 102bed7cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bed710(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar5 = _DAT_112efe080;
  puVar3 = &uStack_80;
  func_0x000107c61428(param_2 + _DAT_112efe080,auStack_58,0,0);
  lVar5 = *(long *)(param_2 + lVar5);
  puVar4 = *(undefined **)(lVar5 + 0x10);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar4 != (undefined *)0x0) {
    func_0x000107c61434(lVar5);
    puVar2 = puVar4;
    FUN_102beedf0(puVar4,0);
    FUN_102beff74(&uStack_80,puVar2 + 0x20,puVar4,lVar5);
    func_0x000100d1ec58(uStack_80,uStack_78,uStack_70,uStack_68,uStack_60);
    if (puVar3 != (undefined8 *)puVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bed7a8);
      (*pcVar1)();
    }
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 102bed7d0; end: 102bedc73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bed7d0(long *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long extraout_x8;
  long *plVar14;
  long lVar15;
  double dVar16;
  undefined1 auStack_290 [8];
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  undefined8 auStack_218 [10];
  undefined1 auStack_1c8 [24];
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  double dStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  double dStack_d8;
  double dStack_d0;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  double dStack_a0;
  long lStack_98;
  long lStack_90;
  double dStack_80;
  double dStack_78;
  
  lVar8 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar4 = _DAT_112efe080;
  func_0x000107c61428(param_2 + _DAT_112efe080,&lStack_110,0x20,0);
  lVar15 = *(long *)(param_2 + lVar4);
  if (*(long *)(lVar15 + 0x10) == 0) {
    func_0x000107c61434(lVar15);
LAB_102beda38:
    func_0x000107c614a8(&lStack_110);
    func_0x000107c6142c(lVar15);
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  lVar1 = *param_3;
  uVar2 = param_3[1];
  func_0x000107c61438(uVar2,3);
  func_0x000107c61434(lVar15);
  lVar9 = lVar1;
  uVar12 = uVar2;
  func_0x000100029284();
  if ((uVar12 & 1) == 0) {
    func_0x000107c61430(uVar2,3);
    goto LAB_102beda38;
  }
  plVar14 = (long *)(*(long *)(lVar15 + 0x38) + lVar9 * 0x50);
  lStack_158 = plVar14[1];
  lStack_160 = *plVar14;
  lStack_128 = plVar14[7];
  lStack_130 = plVar14[6];
  dStack_118 = (double)plVar14[9];
  lStack_120 = plVar14[8];
  lStack_148 = plVar14[3];
  lStack_150 = plVar14[2];
  lStack_138 = plVar14[5];
  lStack_140 = plVar14[4];
  FUN_102bf0640(&lStack_160,&lStack_c0);
  func_0x000107c614a8(&lStack_110);
  func_0x000107c6142c(lVar15);
  lVar9 = lStack_120;
  lVar15 = lStack_128;
  lStack_278 = lVar1;
  func_0x000107c61434(param_4);
  FUN_102bedc74(&lStack_c0);
  dVar16 = dStack_a0;
  lVar6 = lStack_a8;
  lVar5 = lStack_b0;
  lVar1 = lStack_b8;
  lStack_280 = lStack_c0;
  lStack_188 = lStack_138;
  lStack_190 = lStack_140;
  dStack_178 = (double)lStack_128;
  lStack_180 = lStack_130;
  dStack_168 = dStack_118;
  dStack_170 = (double)lStack_120;
  lStack_1a8 = lStack_158;
  lStack_1b0 = lStack_160;
  lStack_198 = lStack_148;
  lStack_1a0 = lStack_150;
  FUN_102bf0640(&lStack_160,&lStack_c0);
  dVar10 = dStack_a0;
  func_0x000107c61434();
  func_0x000102bedf90();
  lStack_288 = lVar9;
  func_0x000107c6142c(lVar9);
  lStack_270 = lVar15;
  func_0x000107c6142c(lVar15);
  dStack_170 = dStack_a0;
  lStack_b8 = lStack_1a8;
  lStack_c0 = lStack_1b0;
  lStack_a8 = lStack_198;
  lStack_b0 = lStack_1a0;
  lStack_98 = lStack_188;
  dStack_a0 = (double)lStack_190;
  lStack_90 = lStack_180;
  dStack_78 = dStack_168;
  dStack_80 = dVar16;
  dStack_178 = dVar10;
  func_0x000107c61428(param_2 + lVar4,auStack_218,0x21,0);
  FUN_102bf0640(&lStack_c0,&lStack_110);
  uVar11 = *(undefined8 *)(param_2 + lVar4);
  func_0x000107c61558(uVar11);
  lVar15 = lStack_278;
  lStack_110 = *(long *)(param_2 + lVar4);
  *(undefined8 *)(param_2 + lVar4) = 0x8000000000000000;
  func_0x000102bef064(&lStack_c0,lStack_278,uVar2,uVar11);
  func_0x000107c6142c(uVar2);
  *(long *)(param_2 + lVar4) = lStack_110;
  func_0x000107c614a8(auStack_218);
  if (*(long *)(lVar1 + 0x10) == 0) {
    if (*(long *)(lVar5 + 0x10) == 0) {
      bVar7 = *(long *)(lVar6 + 0x10) == 0;
    }
    else {
      bVar7 = false;
    }
  }
  else {
    bVar7 = false;
  }
  if (*(long *)(lStack_270 + 0x10) == 0) {
    bVar3 = bVar7;
    if (*(long *)(lStack_288 + 0x10) == 0) {
      bVar3 = true;
    }
    if ((!bVar7) || (*(long *)(lStack_288 + 0x10) == 0)) goto LAB_102bedaf0;
LAB_102bedaac:
    func_0x000107c6142c(lVar6);
    func_0x000107c6142c(lVar5);
    func_0x000107c6142c(lVar1);
    func_0x000102bf0674(&lStack_160);
    func_0x000107c6142c(param_4);
    func_0x000107c61430(uVar2,2);
  }
  else {
    if (bVar7) goto LAB_102bedaac;
    bVar3 = false;
LAB_102bedaf0:
    bVar7 = true;
    if ((*(long *)(lVar1 + 0x10) == 0) && (*(long *)(lVar6 + 0x10) != 0)) {
      bVar7 = (bool)(*(long *)(lVar5 + 0x10) != 0 | bVar3);
    }
    func_0x000107c5eea0(auStack_290 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    (**(code **)(lVar13 + 8))(auStack_290 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar8);
    if ((bVar7) || (0.5 <= dVar16 - dStack_118)) {
      lStack_e8 = lStack_188;
      lStack_f0 = lStack_190;
      dStack_d8 = dStack_178;
      lStack_e0 = lStack_180;
      lStack_108 = lStack_1a8;
      lStack_110 = lStack_1b0;
      lStack_f8 = lStack_198;
      lStack_100 = lStack_1a0;
      dStack_d0 = dStack_170;
      dStack_168 = dVar16;
      func_0x000107c61428(param_2 + lVar4,auStack_1c8,0x21,0);
      FUN_102bf0640(&lStack_110,auStack_218);
      uVar11 = *(undefined8 *)(param_2 + lVar4);
      func_0x000107c61558(uVar11);
      auStack_218[0] = *(undefined8 *)(param_2 + lVar4);
      *(undefined8 *)(param_2 + lVar4) = 0x8000000000000000;
      func_0x000102bef064(&lStack_110,lVar15,uVar2,uVar11);
      func_0x000107c6142c(uVar2);
      *(undefined8 *)(param_2 + lVar4) = auStack_218[0];
      func_0x000107c614a8(auStack_1c8);
      func_0x000102bf0674(&lStack_160);
      *param_1 = lVar15;
      param_1[1] = uVar2;
      param_1[2] = param_6;
      param_1[3] = lStack_280;
      param_1[4] = lVar1;
      param_1[5] = lVar5;
      param_1[6] = lVar6;
      param_1[7] = param_4;
      goto LAB_102bedc40;
    }
    func_0x000107c61430(uVar2,2);
    func_0x000107c6142c(param_4);
    func_0x000102bf0674(&lStack_160);
    func_0x000107c6142c(lVar6);
    func_0x000107c6142c(lVar5);
    func_0x000107c6142c(lVar1);
  }
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
LAB_102bedc40:
  func_0x000102bf0674(&lStack_1b0);
  return;
}



/* Entry: 102bedc74; end: 102bee3cb;  */

/* WARNING: Removing unreachable block (ram,0x000102bedf84) */

void FUN_102bedc74(undefined8 *param_1,undefined8 param_2,undefined8 ****param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  code *pcVar5;
  undefined8 ****ppppuVar6;
  undefined *puVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ***pppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 ***pppuStack_70;
  undefined8 uStack_68;
  
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uStack_68 = 0;
  ppppuVar6 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  pppuStack_70 = ppppuVar6;
  func_0x0001003d21d8();
  puStack_78 = puVar7;
  func_0x000102bee0c4(param_2,&uStack_68,&pppuStack_70,&puStack_78);
  pppuVar4 = pppuStack_70;
  ppppuVar6 = (undefined8 ****)pppuStack_70;
  func_0x000107c61434();
  func_0x000102bedf90();
  if ((undefined8 ***)((ulong)ppppuVar6[2] >> 3) < param_3[2]) {
    func_0x000107c61434(ppppuVar6);
    ppppuVar8 = param_3;
    func_0x000101baba54(param_3,ppppuVar6);
    ppppuVar11 = (undefined8 ****)ppppuVar8[2];
    ppppuVar9 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    pppuStack_a0 = ppppuVar6;
    func_0x000107c61434(ppppuVar6);
    func_0x0001012eef50(param_3);
    ppppuVar11 = (undefined8 ****)pppuStack_a0[2];
    ppppuVar9 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
    ppppuVar8 = (undefined8 ****)pppuStack_a0;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)ppppuVar9;
  if (ppppuVar11 != (undefined8 ****)0x0) {
    func_0x000107c61434(ppppuVar8);
    ppppuVar9 = ppppuVar11;
    func_0x00010109b448(ppppuVar11,0);
    ppppuVar10 = &pppuStack_a0;
    func_0x00010109b930(ppppuVar10,ppppuVar9 + 4,ppppuVar11,ppppuVar8);
    func_0x000100d1ec58(pppuStack_a0,uStack_98,uStack_90,uStack_88,uStack_80);
    if (ppppuVar10 != ppppuVar11) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102bedd6c);
      (*pcVar5)();
    }
  }
  pppuStack_a0 = ppppuVar9;
  func_0x000101b7c750(&pppuStack_a0);
  func_0x000107c6142c(ppppuVar8);
  pppuVar1 = pppuStack_a0;
  if ((undefined8 ***)((ulong)param_3[2] >> 3) < ppppuVar6[2]) {
    func_0x000107c61434(param_3);
    ppppuVar8 = ppppuVar6;
    func_0x000101baba54(ppppuVar6,param_3);
    ppppuVar11 = (undefined8 ****)ppppuVar8[2];
    ppppuVar9 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    pppuStack_a0 = param_3;
    func_0x000107c61434(param_3);
    func_0x0001012eef50(ppppuVar6);
    ppppuVar11 = (undefined8 ****)pppuStack_a0[2];
    ppppuVar9 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
    ppppuVar8 = (undefined8 ****)pppuStack_a0;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)ppppuVar9;
  if (ppppuVar11 != (undefined8 ****)0x0) {
    func_0x000107c61434(ppppuVar8);
    ppppuVar9 = ppppuVar11;
    func_0x00010109b448(ppppuVar11,0);
    ppppuVar10 = &pppuStack_a0;
    func_0x00010109b930(ppppuVar10,ppppuVar9 + 4,ppppuVar11,ppppuVar8);
    func_0x000100d1ec58(pppuStack_a0,uStack_98,uStack_90,uStack_88,uStack_80);
    if (ppppuVar10 != ppppuVar11) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102bedf84);
      (*pcVar5)();
    }
  }
  pppuStack_a0 = ppppuVar9;
  func_0x000101b7c750(&pppuStack_a0);
  func_0x000107c6142c(ppppuVar8);
  pppuVar2 = pppuStack_a0;
  func_0x000101157854(param_3,ppppuVar6);
  func_0x000107c61434(param_4);
  FUN_102bf0c70(param_3,&pppuStack_70,param_4);
  func_0x000107c6142c(param_4);
  ppppuVar11 = (undefined8 ****)param_3[2];
  ppppuVar6 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppppuVar11 != (undefined8 ****)0x0) {
    func_0x000107c6157c(param_3);
    ppppuVar6 = ppppuVar11;
    func_0x00010109b448(ppppuVar11,0);
    ppppuVar9 = &pppuStack_a0;
    func_0x00010109b930(ppppuVar9,ppppuVar6 + 4,ppppuVar11,param_3);
    func_0x000100d1ec58(pppuStack_a0,uStack_98,uStack_90,uStack_88,uStack_80);
    if (ppppuVar9 != ppppuVar11) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102bedf24);
      (*pcVar5)();
    }
  }
  pppuStack_a0 = ppppuVar6;
  func_0x000101b7c750(&pppuStack_a0);
  func_0x000107c61574(param_3);
  pppuVar3 = pppuStack_a0;
  func_0x000107c6142c(puStack_78);
  *param_1 = uStack_68;
  param_1[1] = pppuVar1;
  param_1[2] = pppuVar2;
  param_1[3] = pppuVar3;
  param_1[4] = pppuVar4;
  return;
}



/* Entry: 102bee3cc; end: 102bee53f;  */

uint FUN_102bee3cc(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *param_1;
  uVar3 = param_1[1];
  lVar5 = *param_2;
  if (*(long *)(lVar5 + 0x10) == 0) {
    lVar8 = 0;
    lVar7 = 0;
    if (*(long *)(param_3 + 0x10) != 0) goto LAB_102bee46c;
LAB_102bee43c:
    lVar9 = 0;
    lVar5 = 0;
    lVar6 = lVar5;
    if (lVar7 != 0) goto LAB_102bee4b4;
LAB_102bee448:
    if (lVar5 != 0) goto LAB_102bee4e4;
  }
  else {
    func_0x000107c61434(lVar5);
    lVar8 = lVar9;
    uVar2 = uVar3;
    func_0x000100029284();
    if ((uVar2 & 1) == 0) {
      lVar8 = 0;
      lVar7 = 0;
    }
    else {
      plVar1 = (long *)(*(long *)(lVar5 + 0x38) + lVar8 * 0x10);
      lVar8 = *plVar1;
      lVar7 = plVar1[1];
      func_0x000107c61434(lVar7);
    }
    func_0x000107c6142c(lVar5);
    if (*(long *)(param_3 + 0x10) == 0) goto LAB_102bee43c;
LAB_102bee46c:
    func_0x000107c61434(param_3);
    func_0x000100029284();
    if ((uVar3 & 1) == 0) {
      lVar9 = 0;
      lVar5 = 0;
    }
    else {
      plVar1 = (long *)(*(long *)(param_3 + 0x38) + lVar9 * 0x10);
      lVar9 = *plVar1;
      lVar5 = plVar1[1];
      func_0x000107c61434(lVar5);
    }
    func_0x000107c6142c(param_3);
    lVar6 = lVar5;
    if (lVar7 == 0) goto LAB_102bee448;
LAB_102bee4b4:
    lVar5 = lVar7;
    if (lVar6 == 0) {
LAB_102bee4e4:
      func_0x000107c6142c(lVar5);
      uVar4 = 1;
      goto LAB_102bee520;
    }
    if ((lVar8 != lVar9) || (lVar5 != lVar6)) {
      func_0x000107c605b8(lVar8,lVar5,lVar9,lVar6,0);
      func_0x000107c6142c(lVar5);
      func_0x000107c6142c(lVar6);
      uVar4 = (uint)lVar8 ^ 1;
      goto LAB_102bee520;
    }
    func_0x000107c6142c(lVar5);
    func_0x000107c6142c(lVar6);
  }
  uVar4 = 0;
LAB_102bee520:
  return uVar4 & 1;
}



/* Entry: 102bee540; end: 102bee7a7;  */

void FUN_102bee540(undefined8 *param_1,double *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = (double)(long)*param_2;
  if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bee77c);
    (*pcVar1)();
  }
  if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bee780);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bee784);
    (*pcVar1)();
  }
  dVar5 = param_2[1];
  dVar7 = param_2[2];
  dVar6 = param_2[3];
  puVar2 = PTR___sSiN_11034deb0;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c();
  func_0x000107c5fb78(0x2c,0xe100000000000000);
  dVar5 = (double)(long)dVar5;
  if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bee788);
    (*pcVar1)();
  }
  if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bee78c);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bee790);
    (*pcVar1)();
  }
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  func_0x000107c5fb78(0x2c,0xe100000000000000);
  dVar5 = (double)(long)dVar7;
  if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bee794);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < dVar5) {
    if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bee79c);
      (*pcVar1)();
    }
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar4);
    func_0x000107c5fb78(0x2c,0xe100000000000000);
    dVar5 = (double)(long)dVar6;
    if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bee7a0);
      (*pcVar1)();
    }
    if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bee7a4);
      (*pcVar1)();
    }
    if (dVar5 < 9.223372036854776e+18) {
      puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar4);
      *param_1 = puVar2;
      param_1[1] = puVar3;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bee7a8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bee798);
  (*pcVar1)();
}



/* Entry: 102bee7a8; end: 102bee7f3; -[_TtC31InspectorNativeUIImplementation24UIHierarchyChangeMonitor init] */

void FUN_102bee7a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("InspectorNativeUIImplementation.UIHierarchyChangeMonitor",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bee7d4);
  (*pcVar1)();
}



/* Entry: 102bee7f4; end: 102bee83b;  */

/* WARNING: Possible PIC construction at 0x000102bee808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bee820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bee80c) */
/* WARNING: Removing unreachable block (ram,0x000102bee824) */

void FUN_102bee7f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102bee83c; end: 102bee8df;  */

undefined8 * FUN_102bee83c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x11) = *(undefined2 *)((long)param_2 + 0x11);
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  uVar1 = param_2[7];
  uVar4 = param_2[8];
  param_1[7] = uVar1;
  param_1[8] = uVar4;
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c61434(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 102bee8e0; end: 102bee9c7;  */

undefined8 * FUN_102bee8e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  *(undefined1 *)((long)param_1 + 0x12) = *(undefined1 *)((long)param_2 + 0x12);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[5];
  uVar1 = param_2[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[9] = param_2[9];
  return param_1;
}



/* Entry: 102bee9c8; end: 102beea53;  */

undefined8 * FUN_102bee9c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x11) = *(undefined2 *)((long)param_2 + 0x11);
  func_0x000107c6142c(param_1[3]);
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  func_0x000107c61574(param_1[5]);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(param_1[7]);
  uVar2 = param_1[8];
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[9] = param_2[9];
  return param_1;
}



/* Entry: 102beea54; end: 102beeaff;  */

int FUN_102beea54(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102beeb00; end: 102beeb3f;  */

/* WARNING: Possible PIC construction at 0x000102beeb14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102beeb24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102beeb18) */
/* WARNING: Removing unreachable block (ram,0x000102beeb28) */

void FUN_102beeb00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102beeb40; end: 102beebb3;  */

undefined8 * FUN_102beeb40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  uVar4 = param_2[4];
  uVar2 = param_2[5];
  param_1[4] = uVar4;
  param_1[5] = uVar2;
  uVar1 = param_2[6];
  uVar3 = param_2[7];
  param_1[6] = uVar1;
  param_1[7] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 102beebb4; end: 102beec6f;  */

undefined8 * FUN_102beebb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102beec70; end: 102beecdb;  */

undefined8 * FUN_102beec70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c6142c(param_1[4]);
  uVar2 = param_1[5];
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(param_1[6]);
  uVar2 = param_1[7];
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 102beecdc; end: 102beed83;  */

int FUN_102beecdc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102beed84; end: 102beedef;  */

void FUN_102beed84(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102bf12a0;
  plVar4[5] = lVar2;
  plVar4[6] = lVar1;
  lVar2 = 0;
  func_0x000107c5fcec();
  plVar4[7] = lVar2;
  func_0x000107c5fce8();
  plVar4[8] = lVar2;
  plVar3 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  plVar4[9] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_102becc18;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(150000000)
  ;
  return;
}



/* Entry: 102beedf0; end: 102beee7b;  */

undefined * FUN_102beedf0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar1 = (undefined *)0x112efe120;
    func_0x0001000285a8(0x112efe120,&UNK_10db30968);
    func_0x000107c613fc();
    puVar2 = puVar1;
    func_0x000107c610a4();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = ((long)(puVar2 + -0x20) / 0x50) * 2;
  }
  return puVar1;
}



/* Entry: 102beee7c; end: 102beeef3;  */

void FUN_102beee7c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000102bf0fdc(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102beeef4; end: 102beef17;  */

undefined * FUN_102beeef4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  puVar2 = (undefined *)0x112d36e50;
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bef064);
        (*pcVar1)();
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
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    FUN_102beee7c(0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70,0x112d36e58,&UNK_10d90aa80);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar7 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar7 = puVar3 + -0x20;
    }
    *(ulong *)(puVar2 + 0x10) = uVar6;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar7 >> 3) << 1 | 1;
    puVar7 = puVar2;
  }
  puVar2 = puVar7 + 0x20;
  puVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    func_0x000102bf0fdc(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
    func_0x000107c6140c(puVar2,puVar3,uVar6,uVar4);
  }
  else {
    if (puVar7 != param_4 || puVar3 + uVar6 * 8 <= puVar2) {
      func_0x000107c610b8(puVar2,puVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar7;
}



/* Entry: 102beef18; end: 102bef67f;  */

undefined *
FUN_102beef18(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102bef064);
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
    puVar3 = param_5;
    FUN_102beee7c(param_5,param_6,param_7,param_8);
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
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000102bf0fdc(0,param_5,param_6);
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



/* Entry: 102bef680; end: 102befbd3;  */

void FUN_102bef680(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112efe100;
  func_0x0001000285a8(0x112efe100,&UNK_10db30940);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102bef8e8:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102bef918);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_102bef8e8;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102bef91c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 102befbd4; end: 102beff73;  */

void FUN_102befbd4(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *unaff_x20;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [80];
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
  
  lVar16 = *unaff_x20;
  lVar1 = *(long *)(lVar16 + 0x18);
  if (*(long *)(lVar16 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar7 = 0x112efe108;
  func_0x0001000285a8(0x112efe108,&UNK_10db30948);
  lVar8 = lVar16;
  func_0x000107c60490(lVar16,lVar1,param_2,uVar7);
  if (*(long *)(lVar16 + 0x10) == 0) {
LAB_102beff3c:
    func_0x000107c61574(lVar16);
LAB_102beff44:
    *unaff_x20 = lVar8;
    return;
  }
  puVar18 = (ulong *)(lVar16 + 0x40);
  uVar13 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  lVar1 = lVar8 + 0x40;
  lVar10 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar20 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102beff70);
          (*pcVar6)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar20) {
          if ((param_2 & 1) == 0) {
            func_0x000107c61574(lVar16);
            goto LAB_102beff44;
          }
          uVar17 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
          if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
            *puVar18 = -1L << (uVar17 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar16 + 0x10) = 0;
          goto LAB_102beff3c;
        }
        uVar17 = puVar18[lVar20];
        lVar10 = lVar10 + 1;
      } while (uVar17 == 0);
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar20 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar20 << 6;
    if ((param_2 & 1) == 0) {
      puVar11 = (undefined8 *)(*(long *)(lVar16 + 0x30) + uVar9 * 0x10);
      uVar7 = *puVar11;
      uVar19 = puVar11[1];
      puVar11 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x50);
      uStack_140 = puVar11[3];
      uVar21 = puVar11[2];
      uStack_160 = puVar11[5];
      uStack_138 = puVar11[4];
      uStack_130 = puVar11[7];
      uStack_158 = puVar11[6];
      uVar22 = puVar11[9];
      uStack_128 = puVar11[8];
      uStack_180 = puVar11[1];
      uStack_170 = *puVar11;
      uStack_c0._2_1_ = (undefined1)((ulong)uVar21 >> 0x10);
      uVar4 = uStack_c0._2_1_;
      uStack_c0._1_1_ = (undefined1)((ulong)uVar21 >> 8);
      uVar3 = uStack_c0._1_1_;
      uStack_c0._0_1_ = (undefined1)uVar21;
      uVar2 = (undefined1)uStack_c0;
      uStack_d0 = uStack_170;
      uStack_c8 = uStack_180;
      uStack_c0 = uVar21;
      uStack_b8 = uStack_140;
      uStack_b0 = uStack_138;
      uStack_a8 = uStack_160;
      uStack_a0 = uStack_158;
      uStack_98 = uStack_130;
      uStack_90 = uStack_128;
      uStack_88 = uVar22;
      func_0x000107c61434(uVar19);
      FUN_102bf0640(&uStack_d0,auStack_120);
    }
    else {
      puVar11 = (undefined8 *)(*(long *)(lVar16 + 0x30) + uVar9 * 0x10);
      uVar7 = *puVar11;
      uVar19 = puVar11[1];
      puVar11 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x50);
      uStack_170 = *puVar11;
      uStack_180 = puVar11[1];
      uVar2 = *(undefined1 *)(puVar11 + 2);
      uVar3 = *(undefined1 *)((long)puVar11 + 0x11);
      uVar4 = *(undefined1 *)((long)puVar11 + 0x12);
      uStack_138 = puVar11[4];
      uStack_140 = puVar11[3];
      uStack_158 = puVar11[6];
      uStack_160 = puVar11[5];
      uStack_128 = puVar11[8];
      uStack_130 = puVar11[7];
      uVar22 = puVar11[9];
    }
    func_0x000107c6068c(&uStack_d0,*(undefined8 *)(lVar8 + 0x28));
    puVar11 = &uStack_d0;
    func_0x000107c5fb58(puVar11,uVar7,uVar19);
    func_0x000107c606a8();
    uVar15 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar14 = (ulong)puVar11 & (uVar15 ^ 0xffffffffffffffff);
    uVar12 = uVar14 >> 6;
    uVar9 = -1L << (uVar14 & 0x3f) & (*(ulong *)(lVar1 + uVar12 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar15 >> 6;
      do {
        uVar14 = uVar12 + 1;
        if ((uVar14 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102beff74);
          (*pcVar6)();
        }
        uVar12 = 0;
        if (uVar14 != uVar9) {
          uVar12 = uVar14;
        }
        bVar5 = (bool)(uVar14 == uVar9 | bVar5);
        uVar14 = *(ulong *)(lVar1 + uVar12 * 8);
      } while (uVar14 == 0xffffffffffffffff);
      uVar14 = ~uVar14;
      uVar9 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar12 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar14 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar12) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar12);
    puVar11 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar9 * 0x10);
    *puVar11 = uVar7;
    puVar11[1] = uVar19;
    puVar11 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar9 * 0x50);
    *puVar11 = uStack_170;
    puVar11[1] = uStack_180;
    *(undefined1 *)(puVar11 + 2) = uVar2;
    *(undefined1 *)((long)puVar11 + 0x11) = uVar3;
    *(undefined1 *)((long)puVar11 + 0x12) = uVar4;
    puVar11[4] = uStack_138;
    puVar11[3] = uStack_140;
    puVar11[6] = uStack_158;
    puVar11[5] = uStack_160;
    puVar11[8] = uStack_128;
    puVar11[7] = uStack_130;
    puVar11[9] = uVar22;
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    lVar10 = lVar20;
  } while( true );
}



/* Entry: 102beff74; end: 102bf0107;  */

long FUN_102beff74(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_110 [80];
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
  
  puVar6 = (ulong *)(param_4 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar8 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar8 = uVar8 & *puVar6;
  if (param_2 == (undefined8 *)0x0) {
    lVar11 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf0108);
      (*pcVar2)();
    }
    lVar4 = 0;
    lVar9 = 0;
    uVar10 = 0x3f - uVar7 >> 6;
    lVar11 = lVar4;
    while( true ) {
      while (uVar8 == 0) {
        bVar3 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf0104);
          (*pcVar2)();
        }
        if ((long)uVar10 <= lVar11) {
          uVar8 = 0;
          if ((long)uVar10 <= lVar4 + 1) {
            uVar10 = lVar4 + 1;
          }
          lVar11 = uVar10 - 1;
          param_3 = lVar9;
          goto LAB_102bf00bc;
        }
        uVar8 = puVar6[lVar11];
      }
      lVar9 = lVar9 + 1;
      uVar1 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 - 1 & uVar8;
      puVar5 = (undefined8 *)
               (*(long *)(param_4 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x50 +
               lVar11 * 0x1400);
      uStack_b8 = puVar5[1];
      uStack_c0 = *puVar5;
      uStack_88 = puVar5[7];
      uStack_90 = puVar5[6];
      uStack_78 = puVar5[9];
      uStack_80 = puVar5[8];
      uStack_a8 = puVar5[3];
      uStack_b0 = puVar5[2];
      uStack_98 = puVar5[5];
      uStack_a0 = puVar5[4];
      uVar13 = puVar5[1];
      uVar12 = *puVar5;
      uVar15 = puVar5[3];
      uVar14 = puVar5[2];
      uVar17 = puVar5[5];
      uVar16 = puVar5[4];
      uVar18 = puVar5[6];
      uVar20 = puVar5[9];
      uVar19 = puVar5[8];
      param_2[7] = puVar5[7];
      param_2[6] = uVar18;
      param_2[9] = uVar20;
      param_2[8] = uVar19;
      param_2[3] = uVar15;
      param_2[2] = uVar14;
      param_2[5] = uVar17;
      param_2[4] = uVar16;
      param_2[1] = uVar13;
      *param_2 = uVar12;
      if (lVar9 == param_3) break;
      FUN_102bf0640(&uStack_c0,auStack_110);
      lVar4 = lVar11;
      param_2 = param_2 + 10;
    }
    FUN_102bf0640(&uStack_c0,auStack_110);
  }
LAB_102bf00bc:
  *param_1 = param_4;
  param_1[1] = (long)puVar6;
  param_1[2] = ~uVar7;
  param_1[3] = lVar11;
  param_1[4] = uVar8;
  return param_3;
}



/* Entry: 102bf0108; end: 102bf0173;  */

void FUN_102bf0108(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102bf0174;
  plVar4[5] = lVar2;
  plVar4[6] = lVar1;
  lVar2 = 0;
  func_0x000107c5fcec();
  plVar4[7] = lVar2;
  func_0x000107c5fce8();
  plVar4[8] = lVar2;
  plVar3 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  plVar4[9] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_102becc18;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(150000000)
  ;
  return;
}



/* Entry: 102bf0174; end: 102bf01c7;  */

void FUN_102bf0174(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102bf01ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102bf01c8; end: 102bf03e7;  */

undefined * FUN_102bf01c8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112efe118,&UNK_10db30960);
    puVar6 = puVar9;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar12 = puVar10[1];
      uVar11 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar11);
      func_0x000107c61434(uVar11,uVar12);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102bf02e4);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar4 = (undefined8 *)(*(long *)(puVar6 + 0x38) + uVar7 * 0x10);
      puVar4[1] = uVar12;
      *puVar4 = uVar11;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102bf02e8);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      puVar9 = puVar9 + -1;
      puVar10 = puVar10 + 4;
    } while (puVar9 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 102bf03e8; end: 102bf063f;  */

undefined1  [16] FUN_102bf03e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  
  cVar3 = *(char *)(param_1 + 0x10);
  cVar4 = *(char *)(param_1 + 0x11);
  bVar5 = *(byte *)(param_1 + 0x12);
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61434();
  uVar8 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar9 = uVar8;
  func_0x00010011d734();
  uVar10 = 0x2c;
  uVar11 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar8,uVar9);
  func_0x000102bf0f9c(&uStack_68,0x112d38270,&UNK_10d905a20);
  func_0x000107c5fb78(uVar10,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x000107c61434(0xe100000000000000);
  func_0x000107c5fb78(0x5d,0xe100000000000000);
  func_0x000107c6142c(0xe100000000000000);
  bVar7 = cVar3 != '\x01';
  uVar8 = 0x74696b6975;
  if (bVar7) {
    uVar8 = 0x6269737365636361;
  }
  uVar9 = 0xe500000000000000;
  if (bVar7) {
    uVar9 = 0xed00007974696c69;
  }
  func_0x000107c5fb78(0x7c,0xe100000000000000);
  uVar10 = 0x6b72616d;
  if (cVar4 != '\x01') {
    uVar10 = 0x66666f;
  }
  uVar11 = 0xe400000000000000;
  if (cVar4 != '\x01') {
    uVar11 = 0xe300000000000000;
  }
  uVar1 = 0x656e757270;
  if (cVar4 != '\0') {
    uVar1 = uVar10;
  }
  uVar10 = 0xe500000000000000;
  if (cVar4 != '\0') {
    uVar10 = uVar11;
  }
  func_0x000107c5fb78(uVar1,uVar10);
  func_0x000107c6142c(uVar10);
  func_0x000107c5fb78(0x7c,0xe100000000000000);
  uVar10 = 0xeb00000000736e69;
  uVar11 = 0x616843656772656d;
  if (bVar5 != 2) {
    uVar10 = 0xea00000000006576;
    uVar11 = 0x6973736572676761;
  }
  uVar1 = 0x66666f;
  if (bVar5 != 0) {
    uVar1 = 0x65666173;
  }
  uVar2 = 0xe300000000000000;
  if (bVar5 != 0) {
    uVar2 = 0xe400000000000000;
  }
  if (bVar5 < 2) {
    uVar10 = uVar2;
    uVar11 = uVar1;
  }
  func_0x000107c5fb78(uVar11,uVar10);
  func_0x000107c6142c(uVar10);
  func_0x000107c5fb78(0x7c,0xe100000000000000);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c6142c(0xe100000000000000);
  auVar6._8_8_ = uVar9;
  auVar6._0_8_ = uVar8;
  return auVar6;
}



/* Entry: 102bf0640; end: 102bf069f;  */

undefined8 FUN_102bf0640(undefined8 param_1,undefined8 param_2)

{
  FUN_102bee83c(param_2,param_1,&UNK_1105af860);
  return param_2;
}



/* Entry: 102bf06a0; end: 102bf06af;  */

void FUN_102bf06a0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 102bf06b0; end: 102bf06cf;  */

void FUN_102bf06b0(void)

{
  long unaff_x20;
  
  FUN_102bed7d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 102bf06d0; end: 102bf0703;  */

undefined8 FUN_102bf06d0(undefined8 param_1,undefined8 param_2)

{
  FUN_102bee9c8(param_2,param_1,&UNK_1105af860);
  return param_2;
}



/* Entry: 102bf0704; end: 102bf09d7;  */

undefined1  [16] FUN_102bf0704(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if (*(char *)(param_1 + 9) == '\x01') {
    lVar10 = 0;
    uVar11 = 0xe000000000000000;
    puVar8 = (undefined *)param_1[10];
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uStack_68 = param_1[6];
    uStack_70 = param_1[5];
    uStack_58 = param_1[8];
    uStack_60 = param_1[7];
    FUN_102bee540(&lStack_50,&uStack_70);
    puVar8 = (undefined *)param_1[10];
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar10 = lStack_50;
    uVar11 = uStack_48;
  }
  puVar7 = puVar8;
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar2;
  if (puVar8 == (undefined *)0x0) {
    func_0x0001001830b8();
    puVar7 = puVar2;
  }
  lVar3 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  *(undefined8 *)(lVar3 + 0x18) = 0xc;
  *(undefined8 *)(lVar3 + 0x10) = 6;
  *(undefined8 *)(lVar3 + 0x28) = uStack_68;
  *(undefined8 *)(lVar3 + 0x20) = uStack_70;
  *(long *)(lVar3 + 0x30) = lVar10;
  *(undefined8 *)(lVar3 + 0x38) = uVar11;
  lVar10 = *(long *)(puVar7 + 0x10);
  func_0x000107c61434(puVar8);
  if (lVar10 == 0) {
    func_0x000100402194(&uStack_70,&lStack_50);
  }
  else {
    func_0x000100402194(&uStack_70,&lStack_50);
    func_0x000107c61434(puVar7);
    lVar10 = 0x746e6f4374786574;
    uVar5 = 0xeb00000000746e65;
    func_0x000100029284();
    if ((uVar5 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(puVar7 + 0x38) + lVar10 * 0x10);
      uVar11 = *puVar1;
      uVar9 = puVar1[1];
      func_0x000107c61434(uVar9);
      func_0x000107c6142c(puVar7);
      goto LAB_102bf0838;
    }
    func_0x000107c6142c(puVar7);
  }
  uVar11 = 0;
  uVar9 = 0xe000000000000000;
LAB_102bf0838:
  *(undefined8 *)(lVar3 + 0x40) = uVar11;
  *(undefined8 *)(lVar3 + 0x48) = uVar9;
  if (*(long *)(puVar7 + 0x10) == 0) {
    uVar11 = 0;
    uVar9 = 0xe000000000000000;
  }
  else {
    func_0x000107c61434(puVar7);
    lVar10 = 0x656c6269736976;
    uVar5 = 0;
    func_0x000100029284();
    if ((uVar5 & 1) == 0) {
      uVar11 = 0;
      uVar9 = 0xe000000000000000;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(puVar7 + 0x38) + lVar10 * 0x10);
      uVar11 = *puVar1;
      uVar9 = puVar1[1];
      func_0x000107c61434(uVar9);
    }
    func_0x000107c6142c(puVar7);
  }
  *(undefined8 *)(lVar3 + 0x50) = uVar11;
  *(undefined8 *)(lVar3 + 0x58) = uVar9;
  if (*(long *)(puVar7 + 0x10) == 0) {
    uVar11 = 0;
    uVar9 = 0xe000000000000000;
  }
  else {
    func_0x000107c61434(puVar7);
    lVar10 = 0x656c626170706174;
    uVar5 = 0;
    func_0x000100029284();
    if ((uVar5 & 1) == 0) {
      uVar11 = 0;
      uVar9 = 0xe000000000000000;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(puVar7 + 0x38) + lVar10 * 0x10);
      uVar11 = *puVar1;
      uVar9 = puVar1[1];
      func_0x000107c61434(uVar9);
    }
    func_0x000107c6142c(puVar7);
  }
  *(undefined8 *)(lVar3 + 0x60) = uVar11;
  *(undefined8 *)(lVar3 + 0x68) = uVar9;
  if (*(long *)(puVar7 + 0x10) == 0) {
    uVar11 = 0;
    uVar9 = 0xe000000000000000;
  }
  else {
    func_0x000107c61434(puVar7);
    lVar10 = 0x64656c62616e65;
    uVar5 = 0;
    func_0x000100029284();
    if ((uVar5 & 1) == 0) {
      uVar11 = 0;
      uVar9 = 0xe000000000000000;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(puVar7 + 0x38) + lVar10 * 0x10);
      uVar11 = *puVar1;
      uVar9 = puVar1[1];
      func_0x000107c61434(uVar9);
    }
    func_0x000107c6142c(puVar7);
  }
  func_0x000107c6142c(puVar7);
  *(undefined8 *)(lVar3 + 0x70) = uVar11;
  *(undefined8 *)(lVar3 + 0x78) = uVar9;
  uVar11 = 0x112d38270;
  lStack_50 = lVar3;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar9 = uVar11;
  func_0x00010011d734();
  uVar4 = 0x7c;
  uVar6 = 0xe100000000000000;
  func_0x000107c5fa80(0x7c,0xe100000000000000,uVar11,uVar9);
  func_0x000107c61574(lVar3);
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar4;
  return auVar12;
}



/* Entry: 102bf09d8; end: 102bf0c6f;  */

void FUN_102bf09d8(long param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  long *plVar1;
  ulong *puVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lStack_88;
  ulong uStack_58;
  
  lStack_88 = 0;
  uVar8 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_3 + 0x38);
  lVar10 = 0;
LAB_102bf0a4c:
  do {
    if (uVar13 == 0) {
      do {
        lVar14 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf0c70);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar14) {
          func_0x000107c6157c(param_3);
          func_0x0001010aeef0(param_1,param_2,lStack_88,param_3);
          return;
        }
        uVar13 = ((ulong *)(param_3 + 0x38))[lVar14];
        lVar10 = lVar10 + 1;
      } while (uVar13 == 0);
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar14 = lVar10;
    }
    uVar7 = LZCOUNT(uVar6);
    plVar1 = (long *)(*(long *)(param_3 + 0x30) + (uVar7 | lVar14 << 6) * 0x10);
    lVar5 = *plVar1;
    uVar6 = plVar1[1];
    lVar10 = *param_4;
    lVar11 = *(long *)(lVar10 + 0x10);
    func_0x000107c61434(uVar6);
    if (lVar11 == 0) {
      uStack_58 = 0;
      uVar9 = 0;
    }
    else {
      func_0x000107c61434(lVar10);
      lVar11 = lVar5;
      uVar9 = uVar6;
      func_0x000100029284();
      if ((uVar9 & 1) == 0) {
        uStack_58 = 0;
        uVar9 = 0;
      }
      else {
        puVar2 = (ulong *)(*(long *)(lVar10 + 0x38) + lVar11 * 0x10);
        uStack_58 = *puVar2;
        uVar9 = puVar2[1];
        func_0x000107c61434(uVar9);
      }
      func_0x000107c6142c(lVar10);
    }
    lVar10 = lVar14;
    if (*(long *)(param_5 + 0x10) == 0) {
      uVar12 = 0;
      uVar15 = 0;
      if (uVar9 != 0) goto LAB_102bf0b74;
LAB_102bf0a40:
      uVar9 = uVar15;
      if (uVar9 == 0) {
LAB_102bf0a44:
        func_0x000107c6142c(uVar6);
        goto LAB_102bf0a4c;
      }
LAB_102bf0be4:
      func_0x000107c6142c(uVar6);
      func_0x000107c6142c(uVar9);
    }
    else {
      func_0x000107c61434(param_5);
      uVar12 = uVar6;
      func_0x000100029284();
      if ((uVar12 & 1) == 0) {
        uVar12 = 0;
        uVar15 = 0;
      }
      else {
        puVar2 = (ulong *)(*(long *)(param_5 + 0x38) + lVar5 * 0x10);
        uVar12 = *puVar2;
        uVar15 = puVar2[1];
        func_0x000107c61434(uVar15);
      }
      func_0x000107c6142c(param_5);
      if (uVar9 == 0) goto LAB_102bf0a40;
LAB_102bf0b74:
      if (uVar15 == 0) goto LAB_102bf0be4;
      if ((uStack_58 == uVar12) && (uVar9 == uVar15)) {
        func_0x000107c6142c(uVar6);
        func_0x000107c6142c(uVar9);
        uVar6 = uVar15;
        goto LAB_102bf0a44;
      }
      func_0x000107c605b8(uStack_58,uVar9,uVar12,uVar15,0);
      func_0x000107c6142c(uVar6);
      func_0x000107c6142c(uVar9);
      func_0x000107c6142c(uVar15);
      if ((uStack_58 & 1) != 0) goto LAB_102bf0a4c;
    }
    uVar6 = (uVar7 & 0xffffffffffffffc0 | lVar14 << 6) >> 3;
    *(ulong *)(param_1 + uVar6) = *(ulong *)(param_1 + uVar6) | 1L << (uVar7 & 0x3f);
    bVar4 = SCARRY8(lStack_88,1);
    lStack_88 = lStack_88 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf0c2c);
      (*pcVar3)();
    }
  } while( true );
}



/* Entry: 102bf0c70; end: 102bf0ebf;  */

undefined1 * FUN_102bf0c70(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *unaff_x21;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  undefined1 *apuStack_90 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  uVar7 = uVar6 * 8;
  uStack_70 = param_2;
  uStack_68 = param_3;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    func_0x000107c61434(param_3);
    func_0x000107c6157c(param_1);
  }
  else {
    iVar1 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c61434(param_3);
    func_0x000107c6157c(param_1);
    if ((iVar1 == 0) || (uVar5 = uVar7, func_0x000107c61594(uVar7,8), (uVar5 & 1) == 0)) {
      func_0x000107c6158c(uVar7,0xffffffffffffffff);
      func_0x0001010af89c(apuStack_90);
      puVar3 = apuStack_90[0];
      if (unaff_x21 != (undefined1 *)0x0) {
        puVar3 = puStack_98;
      }
      func_0x000107c61590(uVar7,0xffffffffffffffff,0xffffffffffffffff);
      goto joined_r0x000102bf0e6c;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar3 = auStack_a0 + -(uVar7 + 0xf & 0x1ffffffffffffff0);
  func_0x000107c60ee4(puVar3,uVar7);
  func_0x000107c61434(param_3);
  FUN_102bf09d8(puVar3,uVar6,param_1,param_2,param_3);
  if (unaff_x21 != (undefined1 *)0x0) {
    puVar3 = unaff_x21;
  }
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_3);
joined_r0x000102bf0e6c:
  if (unaff_x21 == (undefined1 *)0x0) {
    func_0x000107c6142c(param_3);
    func_0x000107c61574(param_1);
    uVar2 = (uint)param_1;
  }
  else {
    iVar1 = 2;
    puStack_98 = puVar3;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_98,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(param_1);
    func_0x000107c6142c(param_3);
    uVar2 = (uint)param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    FUN_102bee3cc();
    return (undefined1 *)(ulong)(uVar2 & 1);
  }
  return puVar3;
}



/* Entry: 102bf0ec0; end: 102bf0edb;  */

uint FUN_102bf0ec0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102bee3cc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return (uint)param_1 & 1;
}



/* Entry: 102bf0edc; end: 102bf1053;  */

undefined8 FUN_102bf0edc(undefined8 param_1,undefined8 param_2)

{
  FUN_102bff6ec(param_2,param_1);
  return param_2;
}



/* Entry: 102bf1054; end: 102bf117f;  */

undefined8 * FUN_102bf1054(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x11) = *(undefined2 *)((long)param_2 + 0x11);
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 102bf1180; end: 102bf11eb;  */

undefined8 * FUN_102bf1180(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x11) = *(undefined2 *)((long)param_2 + 0x11);
  func_0x000107c6142c(param_1[3]);
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  func_0x000107c61574(param_1[5]);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 102bf11ec; end: 102bf12a3;  */

int FUN_102bf11ec(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102bf12a4; end: 102bf23af;  */

void FUN_102bf12a4(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  ulong uVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  lVar5 = 0x112d483a8;
  puVar14 = &UNK_10d910f00;
  func_0x0001000285a8(0x112d483a8,&UNK_10d910f00);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_a0 + -extraout_x8;
  uVar15 = param_1;
  func_0x000107c3cf00();
  func_0x000107c61180();
  if (uVar15 != 0) {
    uVar12 = uVar15;
    func_0x000107c5faec();
    func_0x000107c61170(uVar15);
    func_0x000107c61438(puVar14,2);
    uVar3 = *param_2;
    func_0x000107c61558(uVar3);
    uStack_80 = *param_2;
    func_0x00010018433c(uVar12,puVar14,0x6469,0xe200000000000000,uVar3);
    *param_2 = uStack_80;
    func_0x000107c61558();
    uVar3 = uStack_80;
    uStack_80 = *param_2;
    func_0x00010018433c(0xd000000000000017,0x800000010f0fd9e0,0x657079546469,0xe600000000000000,
                        uVar3);
    *param_2 = uStack_80;
    func_0x000107c61558();
    uVar3 = uStack_80;
    uStack_80 = *param_2;
    func_0x00010018433c(uVar12,puVar14,0x6269737365636361,0xef64497974696c69,uVar3);
    *param_2 = uStack_80;
    func_0x000107c61558();
    uVar3 = uStack_80;
    uStack_80 = *param_2;
    func_0x00010018433c(uVar12,puVar14,0x656372756f736572,0xee00656d614e6449,uVar3);
    *param_2 = uStack_80;
  }
  uVar15 = param_1;
  func_0x000107c3cf04();
  func_0x000107c61180();
  if (uVar15 == 0) {
    uVar12 = 0;
    puVar14 = (undefined *)0x0;
  }
  else {
    uVar12 = uVar15;
    func_0x000107c5faec();
    func_0x000107c61170(uVar15);
  }
  FUN_102bf39ac(uVar12,puVar14,0xd000000000000012,0x800000010f0fd9a0);
  uVar15 = param_1;
  func_0x000107c49eac();
  bVar2 = (int)uVar15 == 0;
  uVar3 = 0x6c62697369766e69;
  if (bVar2) {
    uVar3 = 0x656c6269736976;
  }
  uVar6 = 0xe700000000000000;
  if (!bVar2) {
    uVar6 = 0xe900000000000065;
  }
  FUN_102bf39ac(uVar3,uVar6,0x696c696269736976,0xea00000000007974);
  uVar15 = param_1;
  func_0x000107c4a690();
  bVar2 = (int)uVar15 == 0;
  uVar3 = 0x65757274;
  if (bVar2) {
    uVar3 = 0x65736c6166;
  }
  uVar6 = 0xe400000000000000;
  if (bVar2) {
    uVar6 = 0xe500000000000000;
  }
  uVar4 = *param_2;
  func_0x000107c61558(uVar4);
  uStack_80 = *param_2;
  func_0x00010018433c(uVar3,uVar6,0x656c62616e457369,0xe900000000000064,uVar4);
  *param_2 = uStack_80;
  func_0x000107c5eed0(puVar13,0x4f505f53555f6e65,0xeb00000000584953);
  lVar5 = 0;
  func_0x000107c5ef14();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar13,0,1,lVar5);
  lVar5 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  dVar19 = 4.94065645841247e-324;
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  uVar15 = param_1;
  func_0x000107c3dc40();
  *(undefined **)(lVar5 + 0x38) = PTR___s12CoreGraphics7CGFloatVN_1103513a8;
  dVar18 = dVar19;
  func_0x0001013bc00c();
  *(ulong *)(lVar5 + 0x40) = uVar15;
  *(double *)(lVar5 + 0x20) = dVar19;
  uVar3 = 0x66322e25;
  uVar4 = 0xe400000000000000;
  func_0x000107c5faf8(0x66322e25,0xe400000000000000,puVar13,lVar5);
  func_0x000100eca640(puVar13);
  uVar6 = *param_2;
  func_0x000107c61558(uVar6);
  uStack_80 = *param_2;
  func_0x00010018433c(uVar3,uVar4,0x6168706c61,0xe500000000000000,uVar6);
  *param_2 = uStack_80;
  uVar15 = param_1;
  func_0x000107c49dc4();
  bVar2 = (int)uVar15 == 0;
  uVar3 = 0x65757274;
  if (bVar2) {
    uVar3 = 0x65736c6166;
  }
  uVar6 = 0xe400000000000000;
  if (bVar2) {
    uVar6 = 0xe500000000000000;
  }
  uVar4 = *param_2;
  func_0x000107c61558(uVar4);
  uStack_80 = *param_2;
  func_0x00010018433c(uVar3,uVar6,0x657375636f467369,0xe900000000000064,uVar4);
  *param_2 = uStack_80;
  uVar15 = param_1;
  func_0x000107c3cefc();
  func_0x000107c61180();
  if (uVar15 == 0) {
    uVar12 = 0;
    uVar6 = 0;
  }
  else {
    uVar12 = uVar15;
    func_0x000107c5faec();
    func_0x000107c61170(uVar15);
  }
  FUN_102bf39ac(uVar12,uVar6,0x746e6968,0xe400000000000000);
  puVar14 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c61168(PTR__OBJC_CLASS___UILabel_1126aec30);
  uVar15 = param_1;
  func_0x000107c6148c(param_1,puVar14);
  if (uVar15 != 0) {
    uVar12 = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c5c82c();
    func_0x000107c61180();
    if (uVar15 == 0) {
      uVar16 = 0;
      puVar14 = (undefined *)0x0;
    }
    else {
      uVar16 = uVar15;
      func_0x000107c5faec();
      func_0x000107c61170(uVar15);
    }
    FUN_102bf39ac(uVar16,puVar14,0x746e6f4374786574,0xeb00000000746e65);
    func_0x000107c61170(uVar12);
  }
  puVar14 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c61168(PTR__OBJC_CLASS___UIButton_1126aec48);
  uVar15 = param_1;
  func_0x000107c6148c(param_1,puVar14);
  if (uVar15 != 0) {
    uVar12 = param_1;
    func_0x000107c61174(param_1);
    uVar16 = uVar15;
    func_0x000107c5cabc();
    func_0x000107c61180();
    uStack_90 = param_1;
    if (uVar16 == 0) {
      uVar17 = 0;
      puVar14 = (undefined *)0x0;
    }
    else {
      uVar17 = uVar16;
      func_0x000107c5faec();
      func_0x000107c61170(uVar16);
    }
    FUN_102bf39ac(uVar17,puVar14,0x746e6f4374786574,0xeb00000000746e65);
    func_0x000107c61174(uVar12);
    uVar16 = uVar15;
    func_0x000107c49cd8();
    bVar2 = (int)uVar16 == 0;
    uVar3 = 0x65757274;
    if (bVar2) {
      uVar3 = 0x65736c6166;
    }
    uVar6 = 0xe400000000000000;
    if (bVar2) {
      uVar6 = 0xe500000000000000;
    }
    uVar4 = *param_2;
    func_0x000107c61558(uVar4);
    uStack_80 = *param_2;
    func_0x00010018433c(uVar3,uVar6,0x656c62616e457369,0xe900000000000064,uVar4);
    *param_2 = uStack_80;
    func_0x000107c4a3b4();
    func_0x000107c61170(uVar12);
    bVar2 = (int)uVar15 == 0;
    uVar3 = 0x65757274;
    if (bVar2) {
      uVar3 = 0x65736c6166;
    }
    uVar6 = 0xe400000000000000;
    if (bVar2) {
      uVar6 = 0xe500000000000000;
    }
    uVar4 = *param_2;
    func_0x000107c61558(uVar4);
    uStack_80 = *param_2;
    func_0x00010018433c(uVar3,uVar6,0x7463656c65537369,0xea00000000006465,uVar4);
    func_0x000107c61170(uVar12);
    *param_2 = uStack_80;
    param_1 = uStack_90;
  }
  puVar14 = PTR__OBJC_CLASS___UITextField_1126af060;
  func_0x000107c61168(PTR__OBJC_CLASS___UITextField_1126af060);
  uVar15 = param_1;
  func_0x000107c6148c(param_1,puVar14);
  if (uVar15 != 0) {
    uVar12 = param_1;
    func_0x000107c61174(param_1);
    uVar16 = uVar15;
    func_0x000107c5c82c();
    func_0x000107c61180();
    if (uVar16 == 0) {
      uVar17 = 0;
      puVar14 = (undefined *)0x0;
    }
    else {
      uVar17 = uVar16;
      func_0x000107c5faec();
      func_0x000107c61170(uVar16);
    }
    FUN_102bf39ac(uVar17,puVar14,0x746e6f4374786574,0xeb00000000746e65);
    uVar16 = uVar15;
    func_0x000107c4e80c();
    func_0x000107c61180();
    if (uVar16 == 0) {
      uVar17 = 0;
      puVar14 = (undefined *)0x0;
    }
    else {
      uVar17 = uVar16;
      func_0x000107c5faec();
      func_0x000107c61170(uVar16);
    }
    FUN_102bf39ac(uVar17,puVar14,0x746e6968,0xe400000000000000);
    func_0x000107c49cd8();
    bVar2 = (int)uVar15 == 0;
    uVar3 = 0x65757274;
    if (bVar2) {
      uVar3 = 0x65736c6166;
    }
    uVar6 = 0xe400000000000000;
    if (bVar2) {
      uVar6 = 0xe500000000000000;
    }
    uVar4 = *param_2;
    func_0x000107c61558(uVar4);
    uStack_80 = *param_2;
    func_0x00010018433c(uVar3,uVar6,0x656c62616e457369,0xe900000000000064,uVar4);
    func_0x000107c61170(uVar12);
    *param_2 = uStack_80;
  }
  puVar14 = PTR__OBJC_CLASS___UITextView_1126afb88;
  func_0x000107c61168(PTR__OBJC_CLASS___UITextView_1126afb88);
  uVar15 = param_1;
  func_0x000107c6148c(param_1,puVar14);
  if (uVar15 != 0) {
    uVar12 = param_1;
    func_0x000107c61174(param_1);
    uVar16 = uVar15;
    func_0x000107c5c82c();
    func_0x000107c61180();
    if (uVar16 == 0) {
      uVar17 = 0;
      puVar14 = (undefined *)0x0;
    }
    else {
      uVar17 = uVar16;
      func_0x000107c5faec();
      func_0x000107c61170(uVar16);
    }
    FUN_102bf39ac(uVar17,puVar14,0x746e6f4374786574,0xeb00000000746e65);
    func_0x000107c49c9c();
    bVar2 = (int)uVar15 == 0;
    uVar3 = 0x65757274;
    if (bVar2) {
      uVar3 = 0x65736c6166;
    }
    uVar6 = 0xe400000000000000;
    if (bVar2) {
      uVar6 = 0xe500000000000000;
    }
    uVar4 = *param_2;
    func_0x000107c61558(uVar4);
    uStack_80 = *param_2;
    func_0x00010018433c(uVar3,uVar6,0x6261746964457369,0xea0000000000656c,uVar4);
    func_0x000107c61170(uVar12);
    *param_2 = uStack_80;
  }
  puVar14 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  func_0x000107c61168(PTR__OBJC_CLASS___UISwitch_1126b0680);
  uVar15 = param_1;
  func_0x000107c6148c(param_1,puVar14);
  if (uVar15 != 0) {
    uVar12 = param_1;
    func_0x000107c61174();
    uVar16 = uVar15;
    uStack_98 = uVar12;
    func_0x000107c49cd8();
    bVar2 = (int)uVar16 == 0;
    uVar3 = 0x65757274;
    if (bVar2) {
      uVar3 = 0x65736c6166;
    }
    uVar6 = 0xe400000000000000;
    if (bVar2) {
      uVar6 = 0xe500000000000000;
    }
    uVar4 = *param_2;
    func_0x000107c61558(uVar4);
    uStack_80 = *param_2;
    func_0x00010018433c(uVar3,uVar6,0x656c62616e457369,0xe900000000000064,uVar4);
    *param_2 = uStack_80;
    func_0x000107c4a118();
    bVar2 = (int)uVar15 == 0;
    uVar3 = 0x65757274;
    if (bVar2) {
      uVar3 = 0x65736c6166;
    }
    uVar6 = 0xe400000000000000;
    if (bVar2) {
      uVar6 = 0xe500000000000000;
    }
    uVar4 = *param_2;
    func_0x000107c61558(uVar4);
    uStack_80 = *param_2;
    func_0x00010018433c(uVar3,uVar6,0x7463656c65537369,0xea00000000006465,uVar4);
    func_0x000107c61170(uStack_98);
    *param_2 = uStack_80;
  }
  puVar14 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImageView_1126aec28);
  uVar15 = param_1;
  func_0x000107c6148c(param_1,puVar14);
  if (uVar15 == 0) goto LAB_102bf1dbc;
  uVar12 = param_1;
  func_0x000107c61174(param_1);
  uVar16 = uVar15;
  func_0x000107c45034();
  func_0x000107c61180();
  if (uVar16 == 0) {
LAB_102bf1d30:
    puVar14 = (undefined *)0x0;
  }
  else {
    uVar17 = uVar16;
    func_0x000107c5afb8();
    func_0x000107c61180();
    func_0x000107c61170(uVar16);
    if (uVar17 == 0) goto LAB_102bf1d30;
    func_0x000107c5faec(uVar17);
    func_0x000107c61170(uVar17);
  }
  FUN_102bf39ac();
  func_0x000107c3cf04();
  func_0x000107c61180();
  if (uVar15 == 0) {
    uVar16 = 0;
    puVar14 = (undefined *)0x0;
  }
  else {
    uVar16 = uVar15;
    func_0x000107c5faec();
    func_0x000107c61170(uVar15);
  }
  FUN_102bf39ac(uVar16,puVar14,0xd000000000000017,0x800000010f0fd9c0);
  func_0x000107c61170(uVar12);
LAB_102bf1dbc:
  puVar14 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScrollView_1126af098);
  uVar15 = param_1;
  func_0x000107c6148c(param_1,puVar14);
  if (uVar15 != 0) {
    uStack_80 = 0x28;
    uStack_78 = 0xe100000000000000;
    uVar12 = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c404a0(uVar15);
    if (0x7fefffffffffffff < (ulong)ABS(dVar18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bf22b8);
      (*pcVar1)();
    }
    if (dVar18 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bf22bc);
      (*pcVar1)();
    }
    dVar19 = 9.223372036854776e+18;
    if (9.223372036854776e+18 <= dVar18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bf22c0);
      (*pcVar1)();
    }
    lStack_88 = (long)dVar18;
    puVar14 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar14);
    func_0x000107c5fb78(0x202c,0xe200000000000000);
    func_0x000107c404a0(uVar15);
    if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bf22c4);
      (*pcVar1)();
    }
    if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bf22cc);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bf22d0);
      (*pcVar1)();
    }
    lStack_88 = (long)dVar19;
    puVar14 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar14);
    func_0x000107c5fb78(0x29,0xe100000000000000);
    uVar3 = uStack_78;
    uVar15 = uStack_80;
    uVar6 = *param_2;
    func_0x000107c61558(uVar6);
    uStack_80 = *param_2;
    func_0x00010018433c(uVar15,uVar3,0x74536c6c6f726373,0xeb00000000657461,uVar6);
    func_0x000107c61170(uVar12);
    *param_2 = uStack_80;
  }
  puVar14 = PTR__OBJC_CLASS___UITableView_1126aed40;
  func_0x000107c61168(PTR__OBJC_CLASS___UITableView_1126aed40);
  uVar15 = param_1;
  func_0x000107c6148c(param_1,puVar14);
  if (uVar15 != 0) {
    uVar12 = param_1;
    func_0x000107c61174(param_1);
    uVar16 = uVar15;
    func_0x000107c4d934();
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bf22c8);
      (*pcVar1)();
    }
    if (uVar16 == 0) {
      lVar5 = 0;
    }
    else {
      uVar17 = 0;
      lVar5 = 0;
      do {
        uVar7 = uVar15;
        func_0x000107c4d930();
        bVar2 = SCARRY8(lVar5,uVar7);
        lVar5 = lVar5 + uVar7;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102bf22a8);
          (*pcVar1)();
        }
        uVar17 = uVar17 + 1;
      } while (uVar16 != uVar17);
    }
    puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    puVar14 = PTR___sSiN_11034deb0;
    puVar8 = PTR___sSiN_11034deb0;
    puVar10 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    uStack_80 = lVar5;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    uVar3 = *param_2;
    func_0x000107c61558(uVar3);
    uStack_80 = *param_2;
    func_0x00010018433c(puVar8,puVar10,0x6e756f436d657469,0xe900000000000074,uVar3);
    *param_2 = uStack_80;
    uStack_80 = uVar16;
    func_0x000107c6057c(puVar14,puVar11);
    uVar3 = *param_2;
    func_0x000107c61558(uVar3);
    uStack_80 = *param_2;
    func_0x00010018433c(puVar14,puVar11,0x436e6f6974636573,0xec000000746e756f,uVar3);
    func_0x000107c61170(uVar12);
    *param_2 = uStack_80;
  }
  puVar14 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  func_0x000107c61168(PTR__OBJC_CLASS___UICollectionView_1126afd20);
  uVar15 = param_1;
  func_0x000107c6148c(param_1,puVar14);
  if (uVar15 != 0) {
    uVar12 = param_1;
    func_0x000107c61174(param_1);
    uVar16 = uVar15;
    func_0x000107c4d934();
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bf22d4);
      (*pcVar1)();
    }
    if (uVar16 == 0) {
      lVar5 = 0;
    }
    else {
      uVar17 = 0;
      lVar5 = 0;
      do {
        uVar7 = uVar15;
        func_0x000107c4d91c();
        bVar2 = SCARRY8(lVar5,uVar7);
        lVar5 = lVar5 + uVar7;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102bf22ac);
          (*pcVar1)();
        }
        uVar17 = uVar17 + 1;
      } while (uVar16 != uVar17);
    }
    puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    puVar14 = PTR___sSiN_11034deb0;
    puVar8 = PTR___sSiN_11034deb0;
    puVar10 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    uStack_80 = lVar5;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    uVar3 = *param_2;
    func_0x000107c61558(uVar3);
    uStack_80 = *param_2;
    func_0x00010018433c(puVar8,puVar10,0x6e756f436d657469,0xe900000000000074,uVar3);
    *param_2 = uStack_80;
    uStack_80 = uVar16;
    func_0x000107c6057c(puVar14,puVar11);
    uVar3 = *param_2;
    func_0x000107c61558(uVar3);
    uStack_80 = *param_2;
    func_0x00010018433c(puVar14,puVar11,0x436e6f6974636573,0xec000000746e756f,uVar3);
    func_0x000107c61170(uVar12);
    *param_2 = uStack_80;
  }
  uVar15 = param_1;
  func_0x000107c43e88();
  func_0x000107c61180();
  if (uVar15 != 0) {
    uVar3 = 0;
    FUN_1023b4600(0);
    uVar12 = uVar15;
    func_0x000107c5fc54(uVar15,uVar3);
    func_0x000107c61170(uVar15);
    if (uVar12 >> 0x3e == 0) {
      uVar15 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar15 = uVar12 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar12) {
        uVar15 = uVar12;
      }
      func_0x000107c60480();
    }
    if (uVar15 != 0) {
      uVar16 = 0;
      do {
        if ((uVar12 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102bf22b4);
            (*pcVar1)();
          }
          uVar17 = *(ulong *)(uVar12 + uVar16 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar17 = uVar16;
          FUN_102bfbb04(uVar16,uVar12);
        }
        uVar7 = uVar16 + 1;
        if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102bf22b0);
          (*pcVar1)();
        }
        puVar14 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
        func_0x000107c61168(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
        uVar9 = uVar17;
        func_0x000107c6148c(uVar17,puVar14);
        if (uVar9 != 0) {
          func_0x000107c6142c(uVar12);
          func_0x000107c61170(uVar17);
          bVar2 = true;
          goto LAB_102bf22f8;
        }
        func_0x000107c61170(uVar17);
        uVar16 = uVar16 + 1;
      } while (uVar7 != uVar15);
    }
    func_0x000107c6142c(uVar12);
  }
  bVar2 = false;
LAB_102bf22f8:
  puVar14 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  func_0x000107c61168(PTR__OBJC_CLASS___UIControl_1126c3e60);
  func_0x000107c6148c(param_1,puVar14);
  uVar3 = 0x65757274;
  if (!bVar2) {
    uVar3 = 0x65736c6166;
  }
  uVar6 = 0xe400000000000000;
  if (!bVar2) {
    uVar6 = 0xe500000000000000;
  }
  if (param_1 != 0) {
    uVar6 = 0xe400000000000000;
    uVar3 = 0x65757274;
  }
  uVar4 = *param_2;
  func_0x000107c61558(uVar4);
  uStack_80 = *param_2;
  func_0x00010018433c(uVar3,uVar6,0x616b63696c437369,0xeb00000000656c62,uVar4);
  *param_2 = uStack_80;
  return;
}



/* Entry: 102bf23b0; end: 102bf295f;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_102bf23b0(undefined8 ******param_1,ulong param_2,code *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 ******ppppppuVar3;
  undefined *puVar4;
  undefined8 ******ppppppuVar5;
  undefined8 ******ppppppuVar6;
  undefined8 uVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 *****pppppuVar16;
  long lVar17;
  undefined8 ******ppppppuVar18;
  undefined8 ******ppppppuStack_80;
  undefined8 uStack_78;
  undefined8 *******pppppppuStack_70;
  undefined8 ******ppppppuStack_68;
  
  ppppppuVar18 = param_1;
  uVar12 = param_2;
  func_0x000107c3cf00();
  func_0x000107c61180();
  uVar13 = uVar12;
  if (ppppppuVar18 != (undefined8 ******)0x0) {
    ppppppuVar3 = ppppppuVar18;
    func_0x000107c5faec();
    uVar13 = uVar12;
    func_0x000107c61170(ppppppuVar18);
    func_0x000107c6142c(uVar12);
    uVar1 = (ulong)ppppppuVar3 & 0xffffffffffff;
    if ((uVar12 & 0x2000000000000000) != 0) {
      uVar1 = uVar12 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      return true;
    }
  }
  ppppppuVar18 = param_1;
  func_0x000107c3cf04();
  func_0x000107c61180();
  if (ppppppuVar18 != (undefined8 ******)0x0) {
    ppppppuVar3 = ppppppuVar18;
    func_0x000107c5faec();
    func_0x000107c61170(ppppppuVar18);
    func_0x000107c6142c(uVar13);
    uVar12 = (ulong)ppppppuVar3 & 0xffffffffffff;
    if ((uVar13 & 0x2000000000000000) != 0) {
      uVar12 = uVar13 >> 0x38 & 0xf;
    }
    if (uVar12 != 0) {
      return true;
    }
  }
  puVar4 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  func_0x000107c61168(PTR__OBJC_CLASS___UIControl_1126c3e60);
  ppppppuVar18 = param_1;
  func_0x000107c6148c(param_1,puVar4);
  if (ppppppuVar18 != (undefined8 ******)0x0) {
    return true;
  }
  puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c61168();
  ppppppuVar18 = param_1;
  func_0x000107c6148c();
  if (ppppppuVar18 != (undefined8 ******)0x0) {
    ppppppuVar3 = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c5c82c();
    func_0x000107c61180();
    if (ppppppuVar18 == (undefined8 ******)0x0) {
      func_0x000107c61170(ppppppuVar3);
    }
    else {
      ppppppuVar5 = ppppppuVar18;
      func_0x000107c5faec();
      func_0x000107c61170(ppppppuVar18);
      func_0x000107c61170(ppppppuVar3);
      func_0x000107c6142c(puVar4);
      uVar12 = (ulong)ppppppuVar5 & 0xffffffffffff;
      if (((ulong)puVar4 & 0x2000000000000000) != 0) {
        uVar12 = (ulong)puVar4 >> 0x38 & 0xf;
      }
      if (uVar12 != 0) {
        return true;
      }
    }
  }
  puVar4 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c61168();
  ppppppuVar18 = param_1;
  func_0x000107c6148c();
  if (ppppppuVar18 != (undefined8 ******)0x0) {
    ppppppuVar3 = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c5cabc();
    func_0x000107c61180();
    if (ppppppuVar18 == (undefined8 ******)0x0) {
      func_0x000107c61170(ppppppuVar3);
    }
    else {
      ppppppuVar5 = ppppppuVar18;
      func_0x000107c5faec();
      func_0x000107c61170(ppppppuVar18);
      func_0x000107c61170(ppppppuVar3);
      func_0x000107c6142c(puVar4);
      uVar12 = (ulong)ppppppuVar5 & 0xffffffffffff;
      if (((ulong)puVar4 & 0x2000000000000000) != 0) {
        uVar12 = (ulong)puVar4 >> 0x38 & 0xf;
      }
      if (uVar12 != 0) {
        return true;
      }
    }
  }
  puVar4 = PTR__OBJC_CLASS___UITextField_1126af060;
  func_0x000107c61168();
  ppppppuVar18 = param_1;
  func_0x000107c6148c();
  if (ppppppuVar18 == (undefined8 ******)0x0) {
LAB_102bf2698:
    puVar4 = PTR__OBJC_CLASS___UITextView_1126afb88;
    func_0x000107c61168();
    ppppppuVar18 = param_1;
    func_0x000107c6148c();
    if (ppppppuVar18 != (undefined8 ******)0x0) {
      ppppppuVar3 = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c5c82c();
      func_0x000107c61180();
      if (ppppppuVar18 == (undefined8 ******)0x0) {
        func_0x000107c61170(ppppppuVar3);
      }
      else {
        ppppppuVar5 = ppppppuVar18;
        func_0x000107c5faec();
        func_0x000107c61170(ppppppuVar18);
        func_0x000107c61170(ppppppuVar3);
        func_0x000107c6142c(puVar4);
        uVar12 = (ulong)ppppppuVar5 & 0xffffffffffff;
        if (((ulong)puVar4 & 0x2000000000000000) != 0) {
          uVar12 = (ulong)puVar4 >> 0x38 & 0xf;
        }
        if (uVar12 != 0) {
          return true;
        }
      }
    }
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImageView_1126aec28);
    ppppppuVar18 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (ppppppuVar18 != (undefined8 ******)0x0) {
      func_0x000107c45034();
      func_0x000107c61180();
      if (ppppppuVar18 != (undefined8 ******)0x0) goto LAB_102bf274c;
    }
    ppppppuVar18 = param_1;
    func_0x000107c43e88();
    func_0x000107c61180();
    if (ppppppuVar18 != (undefined8 ******)0x0) {
      uVar7 = 0;
      FUN_1023b4600(0);
      ppppppuVar3 = ppppppuVar18;
      func_0x000107c5fc54(ppppppuVar18,uVar7);
      func_0x000107c61170(ppppppuVar18);
      if ((ulong)ppppppuVar3 >> 0x3e == 0) {
        ppppppuVar18 = *(undefined8 *******)(((ulong)ppppppuVar3 & 0xffffffffffffff8) + 0x10);
      }
      else {
        ppppppuVar18 = (undefined8 ******)((ulong)ppppppuVar3 & 0xffffffffffffff8);
        if ((undefined8 ******)0x7fffffffffffffff < ppppppuVar3) {
          ppppppuVar18 = ppppppuVar3;
        }
        func_0x000107c60480();
      }
      if (ppppppuVar18 != (undefined8 ******)0x0) {
        pppppuVar16 = (undefined8 *****)0x0;
        do {
          if (((ulong)ppppppuVar3 & 0xc000000000000001) == 0) {
            if (*(undefined8 ******)(((ulong)ppppppuVar3 & 0xffffffffffffff8) + 0x10) <= pppppuVar16
               ) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf2858);
              (*pcVar2)();
            }
            pppppuVar8 = ppppppuVar3[(long)pppppuVar16 + 4];
            func_0x000107c61174();
          }
          else {
            pppppuVar8 = pppppuVar16;
            FUN_102bfbb04(pppppuVar16,ppppppuVar3);
          }
          ppppppuVar5 = (undefined8 ******)((long)pppppuVar16 + 1);
          if (SCARRY8((long)pppppuVar16,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf2854);
            (*pcVar2)();
          }
          puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
          func_0x000107c61168(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
          pppppuVar9 = pppppuVar8;
          func_0x000107c6148c(pppppuVar8,puVar4);
          if (pppppuVar9 != (undefined8 *****)0x0) {
            func_0x000107c61170(pppppuVar8);
            goto LAB_102bf28fc;
          }
          puVar4 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
          func_0x000107c61168(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
          pppppuVar9 = pppppuVar8;
          func_0x000107c6148c(pppppuVar8,puVar4);
          func_0x000107c61170(pppppuVar8);
          if (pppppuVar9 != (undefined8 *****)0x0) goto LAB_102bf28fc;
          pppppuVar16 = (undefined8 *****)((long)pppppuVar16 + 1);
        } while (ppppppuVar5 != ppppppuVar18);
      }
      func_0x000107c6142c(ppppppuVar3);
    }
    ppppppuVar18 = param_1;
    func_0x000107c614f0();
    ppppppuVar3 = (undefined8 ******)0x112dab9f8;
    pppppppuStack_70 = (undefined8 *******)ppppppuVar18;
    func_0x0001000285a8(0x112dab9f8,&UNK_10db30990);
    pppppppuVar10 = &pppppppuStack_70;
    func_0x000107c5fb18();
    puVar4 = PTR___sSSN_11034da80;
    lVar17 = *(long *)(param_2 + 0x10) + 1;
    puVar15 = (undefined8 *)(param_2 + 0x28);
    pppppppuStack_70 = pppppppuVar10;
    ppppppuStack_68 = ppppppuVar3;
    do {
      lVar17 = lVar17 + -1;
      if (lVar17 == 0) {
        func_0x000107c6142c(ppppppuVar3);
        ppppppuVar18 = param_1;
        (*param_3)();
        if (((ulong)ppppppuVar18 & 1) != 0) {
          return true;
        }
        puVar4 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
        func_0x000107c61168(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
        ppppppuVar18 = param_1;
        func_0x000107c6148c(param_1,puVar4);
        if (ppppppuVar18 != (undefined8 ******)0x0) {
          return true;
        }
        puVar4 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
        func_0x000107c61168(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
        func_0x000107c6148c(param_1,puVar4);
        return param_1 != (undefined8 ******)0x0;
      }
      ppppppuStack_80 = (undefined8 ******)puVar15[-1];
      uStack_78 = *puVar15;
      func_0x000100e8b654();
      pppppppuVar11 = &ppppppuStack_80;
      func_0x000107c6022c(pppppppuVar11,puVar4,puVar4,pppppppuVar10,pppppppuVar10);
      pppppppuVar10 = pppppppuVar11;
      puVar15 = puVar15 + 2;
    } while (((ulong)pppppppuVar11 & 1) == 0);
LAB_102bf28fc:
    func_0x000107c6142c(ppppppuVar3);
  }
  else {
    ppppppuVar3 = param_1;
    func_0x000107c61174(param_1);
    ppppppuVar5 = ppppppuVar18;
    func_0x000107c5c82c();
    func_0x000107c61180();
    puVar14 = puVar4;
    if (ppppppuVar5 == (undefined8 ******)0x0) {
LAB_102bf263c:
      func_0x000107c4e80c();
      func_0x000107c61180();
      if (ppppppuVar18 == (undefined8 ******)0x0) {
        func_0x000107c61170(ppppppuVar3);
      }
      else {
        ppppppuVar5 = ppppppuVar18;
        func_0x000107c5faec();
        func_0x000107c61170(ppppppuVar18);
        func_0x000107c61170(ppppppuVar3);
        func_0x000107c6142c(puVar14);
        uVar12 = (ulong)ppppppuVar5 & 0xffffffffffff;
        if (((ulong)puVar14 & 0x2000000000000000) != 0) {
          uVar12 = (ulong)puVar14 >> 0x38 & 0xf;
        }
        if (uVar12 != 0) {
          return true;
        }
      }
      goto LAB_102bf2698;
    }
    ppppppuVar6 = ppppppuVar5;
    func_0x000107c5faec();
    puVar14 = puVar4;
    func_0x000107c61170(ppppppuVar5);
    func_0x000107c6142c(puVar4);
    uVar12 = (ulong)ppppppuVar6 & 0xffffffffffff;
    if (((ulong)puVar4 & 0x2000000000000000) != 0) {
      uVar12 = (ulong)puVar4 >> 0x38 & 0xf;
    }
    if (uVar12 == 0) goto LAB_102bf263c;
LAB_102bf274c:
    func_0x000107c61170();
  }
  return true;
}



/* Entry: 102bf2960; end: 102bf2b03;  */

void FUN_102bf2960(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
  func_0x000107c61168(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
  lVar2 = param_1;
  func_0x000107c6148c(param_1,puVar1);
  if (lVar2 == 0) {
    puVar1 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
    func_0x000107c61168(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
    lVar2 = param_1;
    func_0x000107c6148c(param_1,puVar1);
    if (lVar2 != 0) {
      func_0x000107c5c42c();
      func_0x000107c61180();
      puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
      while (PTR__OBJC_CLASS___UITableView_1126aed40 = puVar1, param_1 != 0) {
        func_0x000107c61168(puVar1);
        lVar2 = param_1;
        func_0x000107c6148c(param_1,puVar1);
        if (lVar2 != 0) {
          func_0x000107c61174(param_1);
          func_0x000107c4168c();
          func_0x000107c61180();
          goto joined_r0x000102bf2ad8;
        }
        lVar2 = param_1;
        func_0x000107c5c42c();
        func_0x000107c61180();
        func_0x000107c61170(param_1);
        param_1 = lVar2;
        puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
      }
    }
  }
  else {
    func_0x000107c5c42c();
    func_0x000107c61180();
    puVar1 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    while (PTR__OBJC_CLASS___UICollectionView_1126afd20 = puVar1, param_1 != 0) {
      func_0x000107c61168(puVar1);
      lVar2 = param_1;
      func_0x000107c6148c(param_1,puVar1);
      if (lVar2 != 0) {
        func_0x000107c61174(param_1);
        func_0x000107c4168c();
        func_0x000107c61180();
joined_r0x000102bf2ad8:
        if (lVar2 != 0) {
          func_0x000107c50648();
          func_0x000107c615e8(lVar2);
        }
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_1);
        return;
      }
      lVar2 = param_1;
      func_0x000107c5c42c();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      param_1 = lVar2;
      puVar1 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    }
  }
  return;
}



/* Entry: 102bf2b04; end: 102bf39ab;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_102bf2b04(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *******param_5,undefined8 *******param_6,code *param_7,
                  undefined8 param_8,long param_9,long *param_10)

{
  undefined8 *******pppppppuVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined8 *******pppppppuVar6;
  undefined8 ******ppppppuVar7;
  undefined *puVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined8 uVar18;
  undefined8 ******ppppppuVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uStack_198;
  undefined8 ******ppppppuStack_178;
  undefined8 uStack_170;
  undefined8 *******pppppppuStack_168;
  undefined8 uStack_160;
  double adStack_138 [4];
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  
  func_0x000107c3ec60();
  func_0x000107c40740(param_5);
  dVar25 = param_1;
  func_0x000107c609cc();
  if (dVar25 <= 0.0) {
    uVar20 = 0;
  }
  else {
    dVar25 = param_1;
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    uVar20 = (uint)(0.0 < dVar25);
  }
  pppppppuVar15 = param_6;
  func_0x000107c3ec60();
  uVar4 = (uint)pppppppuVar15;
  func_0x000107c609dc();
  pppppppuVar15 = param_5;
  func_0x000107c49eac();
  if ((((ulong)pppppppuVar15 & 1) == 0) &&
     (func_0x000107c3dc40(param_5), ((uint)(0.01 <= dVar25) & uVar20 & uVar4) != 0)) {
    uVar18 = 0x65757274;
    uVar14 = 0xe400000000000000;
  }
  else {
    uVar14 = 0xe500000000000000;
    uVar18 = 0x65736c6166;
  }
  lVar5 = *param_10;
  func_0x000107c61558(lVar5);
  pppppppuStack_168 = (undefined8 *******)*param_10;
  func_0x00010018433c(uVar18,uVar14,0x656c6269736976,0xe700000000000000,lVar5);
  *param_10 = (long)pppppppuStack_168;
  if (uVar20 == 0) {
    return;
  }
  pppppppuVar15 = param_5;
  (*param_7)();
  pppppppuVar17 = param_5;
  func_0x000107c43e88();
  func_0x000107c61180();
  if (pppppppuVar17 == (undefined8 *******)0x0) {
    bVar3 = false;
  }
  else {
    uVar14 = 0;
    FUN_1023b4600(0);
    pppppppuVar6 = pppppppuVar17;
    func_0x000107c5fc54(pppppppuVar17,uVar14);
    func_0x000107c61170(pppppppuVar17);
    if ((ulong)pppppppuVar6 >> 0x3e == 0) {
      pppppppuVar17 = *(undefined8 ********)(((ulong)pppppppuVar6 & 0xffffffffffffff8) + 0x10);
      if (pppppppuVar17 == (undefined8 *******)0x0) goto LAB_102bf2d90;
LAB_102bf2cb4:
      ppppppuVar19 = (undefined8 ******)0x0;
      do {
        if (((ulong)pppppppuVar6 & 0xc000000000000001) == 0) {
          if (*(undefined8 *******)(((ulong)pppppppuVar6 & 0xffffffffffffff8) + 0x10) <=
              ppppppuVar19) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf2d78);
            (*pcVar2)();
          }
          ppppppuVar7 = pppppppuVar6[(long)ppppppuVar19 + 4];
          func_0x000107c61174();
        }
        else {
          ppppppuVar7 = ppppppuVar19;
          FUN_102bfbb04(ppppppuVar19,pppppppuVar6);
        }
        pppppppuVar16 = (undefined8 *******)((long)ppppppuVar19 + 1);
        if (SCARRY8((long)ppppppuVar19,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf2d74);
          (*pcVar2)();
        }
        puVar8 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
        func_0x000107c61168(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
        ppppppuVar9 = ppppppuVar7;
        func_0x000107c6148c(ppppppuVar7,puVar8);
        if (ppppppuVar9 != (undefined8 ******)0x0) {
LAB_102bf2d54:
          func_0x000107c61170(ppppppuVar7);
          bVar3 = true;
          goto LAB_102bf2d94;
        }
        puVar8 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
        func_0x000107c61168(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
        ppppppuVar9 = ppppppuVar7;
        func_0x000107c6148c(ppppppuVar7,puVar8);
        if (ppppppuVar9 != (undefined8 ******)0x0) goto LAB_102bf2d54;
        func_0x000107c61170(ppppppuVar7);
        ppppppuVar19 = (undefined8 ******)((long)ppppppuVar19 + 1);
      } while (pppppppuVar16 != pppppppuVar17);
      bVar3 = false;
    }
    else {
      pppppppuVar17 = (undefined8 *******)((ulong)pppppppuVar6 & 0xffffffffffffff8);
      if ((undefined8 *******)0x7fffffffffffffff < pppppppuVar6) {
        pppppppuVar17 = pppppppuVar6;
      }
      func_0x000107c60480();
      if (pppppppuVar17 != (undefined8 *******)0x0) goto LAB_102bf2cb4;
LAB_102bf2d90:
      bVar3 = false;
    }
LAB_102bf2d94:
    func_0x000107c6142c(pppppppuVar6);
    pppppppuVar15 = (undefined8 *******)((ulong)pppppppuVar15 & 0xffffffff);
  }
  puVar8 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  func_0x000107c61168(PTR__OBJC_CLASS___UIControl_1126c3e60);
  pppppppuVar17 = param_5;
  func_0x000107c6148c(param_5,puVar8);
  if (pppppppuVar17 == (undefined8 *******)0x0) {
    if (bVar3) {
      pppppppuVar17 = (undefined8 *******)0x0;
      lVar5 = 0;
      lVar21 = -0x1900000000000000;
      uStack_198 = 0x65727574736567;
    }
    else if (((ulong)pppppppuVar15 & 1) == 0) {
      pppppppuVar17 = param_5;
      func_0x000107c3cf10();
      uVar22 = *(ulong *)PTR__UIAccessibilityTraitButton_110345920;
      if ((uVar22 & ((ulong)pppppppuVar17 ^ 0xffffffffffffffff)) == 0) {
        pppppppuVar17 = (undefined8 *******)0x0;
        lVar5 = 0;
        lVar21 = -0x1800000000000000;
        uStack_198 = 0x6e6f747475427861;
      }
      else {
        pppppppuVar17 = param_5;
        FUN_102bf2960();
        if (((ulong)pppppppuVar17 & 1) == 0) {
          dVar25 = param_1;
          func_0x000107c609cc(param_1,param_2,param_3,param_4);
          if ((20.0 <= dVar25) &&
             (dVar25 = param_1, func_0x000107c609b0(param_1,param_2,param_3,param_4), 20.0 <= dVar25
             )) {
            dVar25 = param_1;
            func_0x000107c609bc(param_1,param_2,param_3,param_4);
            dVar27 = param_1;
            func_0x000107c609c0(param_1,param_2,param_3,param_4);
            pppppppuVar17 = param_6;
            func_0x000107c44ec4(dVar25,dVar27);
            func_0x000107c61180();
            pppppppuVar6 = pppppppuVar17;
            func_0x000107c61174();
            pppppppuVar16 = pppppppuVar6;
            if (pppppppuVar17 != (undefined8 *******)0x0) {
              do {
                if (param_5 == pppppppuVar16) {
                  func_0x000107c61170(pppppppuVar6);
                  func_0x000107c61170(pppppppuVar16);
                  pppppppuVar17 = (undefined8 *******)0x0;
                  lVar5 = 0;
                  lVar21 = -0x14ffffffff99939b;
                  uStack_198 = 0x5374736554746968;
                  goto LAB_102bf2e84;
                }
                pppppppuVar17 = pppppppuVar16;
                func_0x000107c5c42c();
                func_0x000107c61180();
                func_0x000107c61170(pppppppuVar16);
                pppppppuVar16 = pppppppuVar17;
              } while (pppppppuVar17 != (undefined8 *******)0x0);
              if (pppppppuVar6 != param_5) {
                puVar8 = PTR__OBJC_CLASS___UIControl_1126c3e60;
                func_0x000107c61168(PTR__OBJC_CLASS___UIControl_1126c3e60);
                pppppppuVar17 = pppppppuVar6;
                func_0x000107c6148c(pppppppuVar6,puVar8);
                func_0x000107c61174();
                pppppppuVar16 = pppppppuVar6;
                func_0x000107c43e88();
                func_0x000107c61180();
                if (pppppppuVar16 == (undefined8 *******)0x0) {
                  bVar3 = false;
                }
                else {
                  uVar14 = 0;
                  FUN_1023b4600(0);
                  pppppppuVar10 = pppppppuVar16;
                  func_0x000107c5fc54(pppppppuVar16,uVar14);
                  func_0x000107c61170(pppppppuVar16);
                  if ((ulong)pppppppuVar10 >> 0x3e == 0) {
                    pppppppuVar16 =
                         *(undefined8 ********)(((ulong)pppppppuVar10 & 0xffffffffffffff8) + 0x10);
                    if (pppppppuVar16 == (undefined8 *******)0x0) goto LAB_102bf38e0;
LAB_102bf377c:
                    ppppppuVar19 = (undefined8 ******)0x0;
                    do {
                      if (((ulong)pppppppuVar10 & 0xc000000000000001) == 0) {
                        if (*(undefined8 *******)(((ulong)pppppppuVar10 & 0xffffffffffffff8) + 0x10)
                            <= ppppppuVar19) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf38c8);
                          (*pcVar2)();
                        }
                        ppppppuVar7 = pppppppuVar10[(long)ppppppuVar19 + 4];
                        func_0x000107c61174();
                      }
                      else {
                        ppppppuVar7 = ppppppuVar19;
                        FUN_102bfbb04(ppppppuVar19,pppppppuVar10);
                      }
                      pppppppuVar1 = (undefined8 *******)((long)ppppppuVar19 + 1);
                      if (SCARRY8((long)ppppppuVar19,1)) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf38c4);
                        (*pcVar2)();
                      }
                      puVar8 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
                      func_0x000107c61168(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
                      ppppppuVar9 = ppppppuVar7;
                      func_0x000107c6148c(ppppppuVar7,puVar8);
                      if (ppppppuVar9 != (undefined8 ******)0x0) {
LAB_102bf3870:
                        func_0x000107c61170(ppppppuVar7);
                        bVar3 = true;
                        goto LAB_102bf38e4;
                      }
                      puVar8 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
                      func_0x000107c61168(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
                      ppppppuVar9 = ppppppuVar7;
                      func_0x000107c6148c(ppppppuVar7,puVar8);
                      if (ppppppuVar9 != (undefined8 ******)0x0) goto LAB_102bf3870;
                      func_0x000107c61170(ppppppuVar7);
                      ppppppuVar19 = (undefined8 ******)((long)ppppppuVar19 + 1);
                    } while (pppppppuVar1 != pppppppuVar16);
                    bVar3 = false;
                  }
                  else {
                    pppppppuVar16 = (undefined8 *******)((ulong)pppppppuVar10 & 0xffffffffffffff8);
                    if ((undefined8 *******)0x7fffffffffffffff < pppppppuVar10) {
                      pppppppuVar16 = pppppppuVar10;
                    }
                    func_0x000107c60480();
                    if (pppppppuVar16 != (undefined8 *******)0x0) goto LAB_102bf377c;
LAB_102bf38e0:
                    bVar3 = false;
                  }
LAB_102bf38e4:
                  func_0x000107c6142c(pppppppuVar10);
                }
                pppppppuVar16 = pppppppuVar6;
                func_0x000107c3cf10();
                if (((pppppppuVar17 != (undefined8 *******)0x0) || (bVar3)) ||
                   (((ulong)pppppppuVar16 & uVar22) == uVar22)) {
                  pppppppuVar17 = pppppppuVar6;
                  func_0x000107c614f0();
                  lVar5 = 0x112dab9f8;
                  pppppppuStack_168 = pppppppuVar17;
                  func_0x0001000285a8(0x112dab9f8,&UNK_10db30990);
                  pppppppuVar17 = &pppppppuStack_168;
                  func_0x000107c5fb18();
                  func_0x000107c61170(pppppppuVar6);
                  func_0x000107c61170(pppppppuVar6);
                  lVar21 = -0x109a8b9e989a939b;
                  uStack_198 = 0x4474736554746968;
                  goto LAB_102bf2e84;
                }
                func_0x000107c61170(pppppppuVar6);
              }
              func_0x000107c61170(pppppppuVar6);
            }
          }
          pppppppuVar17 = (undefined8 *******)0x0;
          lVar5 = 0;
          uStack_198 = 0;
          lVar21 = 0;
          bVar3 = true;
          uVar18 = 0xe200000000000000;
          uVar14 = 0x6f6e;
          goto LAB_102bf3418;
        }
        pppppppuVar17 = (undefined8 *******)0x0;
        lVar5 = 0;
        lVar21 = -0x1c00000000000000;
        uStack_198 = 0x6c6c6563;
      }
    }
    else {
      pppppppuVar17 = (undefined8 *******)0x0;
      lVar5 = 0;
      lVar21 = -0x1900000000000000;
      uStack_198 = 0x656e6f5a706174;
    }
  }
  else {
    pppppppuVar17 = (undefined8 *******)0x0;
    lVar5 = 0;
    lVar21 = -0x1900000000000000;
    uStack_198 = 0x6c6f72746e6f63;
  }
LAB_102bf2e84:
  pppppppuVar6 = param_6;
  func_0x000107c519d4(param_6);
  func_0x000107c61180();
  func_0x000107c51820();
  func_0x000107c61170(pppppppuVar6);
  if (((ulong)pppppppuVar15 & 1) == 0) {
    dVar27 = param_1;
    func_0x000107c609bc(param_1,param_2,param_3,param_4);
    func_0x000107c609c0(param_1,param_2,param_3,param_4);
    dVar27 = dVar25 * dVar27;
    if (0x7fefffffffffffff < (ulong)ABS(dVar27)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf3884);
      (*pcVar2)();
    }
    if (dVar27 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf3888);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar27) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf388c);
      (*pcVar2)();
    }
    pppppppuStack_168 = (undefined8 *******)(long)dVar27;
    puVar8 = PTR___sSiN_11034deb0;
    puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    lVar23 = *param_10;
    func_0x000107c61558(lVar23);
    pppppppuStack_168 = (undefined8 *******)*param_10;
    func_0x00010018433c(puVar8,puVar11,0x58706174,0xe400000000000000,lVar23);
    *param_10 = (long)pppppppuStack_168;
    dVar25 = dVar25 * param_1;
    if (0x7fefffffffffffff < (ulong)ABS(dVar25)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf3890);
      (*pcVar2)();
    }
    if (dVar25 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf3894);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar25) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf31cc);
      (*pcVar2)();
    }
LAB_102bf33a8:
    uVar14 = 0x736579;
    pppppppuStack_168 = (undefined8 *******)(long)dVar25;
    puVar8 = PTR___sSiN_11034deb0;
    puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    lVar23 = *param_10;
    func_0x000107c61558(lVar23);
    pppppppuStack_168 = (undefined8 *******)*param_10;
    func_0x00010018433c(puVar8,puVar11,0x59706174,0xe400000000000000,lVar23);
    bVar3 = false;
    *param_10 = (long)pppppppuStack_168;
    uVar18 = 0xe300000000000000;
  }
  else {
    dVar27 = param_1;
    func_0x000107c609bc(param_1,param_2,param_3,param_4);
    dVar26 = param_1;
    func_0x000107c609c0(param_1,param_2,param_3,param_4);
    dVar24 = param_1;
    adStack_138[0] = dVar27;
    adStack_138[1] = dVar26;
    func_0x000107c609b4(param_1,param_2,param_3,param_4);
    dVar27 = param_1;
    func_0x000107c609c0(param_1,param_2,param_3,param_4);
    dVar26 = param_1;
    adStack_138[2] = dVar24 + -4.0;
    adStack_138[3] = dVar27;
    func_0x000107c609c4(param_1,param_2,param_3,param_4);
    dVar27 = param_1;
    func_0x000107c609c0(param_1,param_2,param_3,param_4);
    dVar24 = param_1;
    dStack_118 = dVar26 + 4.0;
    dStack_110 = dVar27;
    func_0x000107c609bc(param_1,param_2,param_3,param_4);
    dVar27 = param_1;
    func_0x000107c609c8(param_1,param_2,param_3,param_4);
    dStack_100 = dVar27 + 4.0;
    dVar27 = param_1;
    dStack_108 = dVar24;
    func_0x000107c609bc(param_1,param_2,param_3,param_4);
    dVar26 = param_1;
    func_0x000107c609b8(param_1,param_2,param_3,param_4);
    dStack_f0 = dVar26 + -4.0;
    dVar26 = param_1;
    dStack_f8 = dVar27;
    func_0x000107c609b4(param_1,param_2,param_3,param_4);
    dVar27 = param_1;
    func_0x000107c609c8(param_1,param_2,param_3,param_4);
    dStack_e0 = dVar27 + 4.0;
    dVar27 = param_1;
    dStack_e8 = dVar26 + -4.0;
    func_0x000107c609b4(param_1,param_2,param_3,param_4);
    dVar26 = param_1;
    func_0x000107c609b8(param_1,param_2,param_3,param_4);
    dStack_d0 = dVar26 + -4.0;
    dVar26 = param_1;
    dStack_d8 = dVar27 + -4.0;
    func_0x000107c609c4(param_1,param_2,param_3,param_4);
    dVar27 = param_1;
    func_0x000107c609c8(param_1,param_2,param_3,param_4);
    dStack_c0 = dVar27 + 4.0;
    dVar27 = param_1;
    dStack_c8 = dVar26 + 4.0;
    func_0x000107c609c4(param_1,param_2,param_3,param_4);
    func_0x000107c609b8(param_1,param_2,param_3,param_4);
    puVar8 = PTR___sSSN_11034da80;
    lVar23 = 0;
    dStack_b8 = dVar27 + 4.0;
    dStack_b0 = param_1 + -4.0;
    do {
      dVar27 = adStack_138[lVar23 * 2];
      dVar26 = adStack_138[lVar23 * 2 + 1];
      pppppppuVar15 = param_6;
      func_0x000107c44ec4(dVar27,dVar26);
      func_0x000107c61180();
      if (pppppppuVar15 != (undefined8 *******)0x0) {
        pppppppuVar6 = pppppppuVar15;
        func_0x000107c614f0();
        uVar14 = 0x112dab9f8;
        pppppppuStack_168 = pppppppuVar6;
        func_0x0001000285a8(0x112dab9f8,&UNK_10db30990);
        pppppppuVar6 = &pppppppuStack_168;
        func_0x000107c5fb18();
        lVar13 = *(long *)(param_9 + 0x10) + 1;
        puVar12 = (undefined8 *)(param_9 + 0x28);
        pppppppuStack_168 = pppppppuVar6;
        uStack_160 = uVar14;
        do {
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) {
            func_0x000107c6142c(uVar14);
            func_0x000107c61170(pppppppuVar15);
            dVar27 = dVar25 * dVar27;
            if (0x7fefffffffffffff < (ulong)ABS(dVar27)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf3898);
              (*pcVar2)();
            }
            if (dVar27 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf389c);
              (*pcVar2)();
            }
            if (9.223372036854776e+18 <= dVar27) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf38a0);
              (*pcVar2)();
            }
            pppppppuStack_168 = (undefined8 *******)(long)dVar27;
            puVar8 = PTR___sSiN_11034deb0;
            puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
            func_0x000107c6057c(PTR___sSiN_11034deb0,
                                PTR___sSis23CustomStringConvertiblesWP_11034df00);
            lVar23 = *param_10;
            func_0x000107c61558(lVar23);
            pppppppuStack_168 = (undefined8 *******)*param_10;
            func_0x00010018433c(puVar8,puVar11,0x58706174,0xe400000000000000,lVar23);
            *param_10 = (long)pppppppuStack_168;
            dVar25 = dVar25 * dVar26;
            if (0x7fefffffffffffff < (ulong)ABS(dVar25)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf38a4);
              (*pcVar2)();
            }
            if (dVar25 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf38a8);
              (*pcVar2)();
            }
            if (9.223372036854776e+18 <= dVar25) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf38ac);
              (*pcVar2)();
            }
            goto LAB_102bf33a8;
          }
          ppppppuStack_178 = (undefined8 ******)puVar12[-1];
          uStack_170 = *puVar12;
          func_0x000100e8b654();
          pppppppuVar16 = &ppppppuStack_178;
          func_0x000107c6022c(pppppppuVar16,puVar8,puVar8,pppppppuVar6,pppppppuVar6);
          pppppppuVar6 = pppppppuVar16;
          puVar12 = puVar12 + 2;
        } while (((ulong)pppppppuVar16 & 1) == 0);
        func_0x000107c6142c(uVar14);
        func_0x000107c61170(pppppppuVar15);
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 != 9);
    func_0x000107c6142c(lVar5);
    func_0x000107c6142c(lVar21);
    bVar3 = false;
    pppppppuVar17 = (undefined8 *******)0x0;
    lVar5 = 0;
    uStack_198 = 0;
    lVar21 = 0;
    uVar18 = 0xea00000000006465;
    uVar14 = 0x746375727473626f;
  }
LAB_102bf3418:
  lVar23 = *param_10;
  func_0x000107c61558(lVar23);
  pppppppuStack_168 = (undefined8 *******)*param_10;
  func_0x00010018433c(uVar14,uVar18,0x656c626170706174,0xe800000000000000,lVar23);
  *param_10 = (long)pppppppuStack_168;
  if (lVar21 != 0) {
    func_0x000107c61434(lVar21);
    FUN_102bf39ac(uStack_198,lVar21,0x616956706174,0xe600000000000000);
  }
  if (lVar5 != 0) {
    func_0x000107c61434(lVar5);
    FUN_102bf39ac(pppppppuVar17,lVar5,0x67656c6544706174,0xeb00000000657461);
  }
  if (bVar3) {
    func_0x000107c6142c(lVar5);
    func_0x000107c6142c(lVar21);
  }
  else {
    puVar8 = PTR__OBJC_CLASS___UIControl_1126c3e60;
    func_0x000107c61168(PTR__OBJC_CLASS___UIControl_1126c3e60);
    pppppppuVar15 = param_5;
    func_0x000107c6148c(param_5,puVar8);
    if (pppppppuVar15 == (undefined8 *******)0x0) {
      lVar23 = *param_10;
      func_0x000107c61558(lVar23);
      pppppppuStack_168 = (undefined8 *******)*param_10;
      func_0x00010018433c(0x65757274,0xe400000000000000,0x64656c62616e65,0xe700000000000000,lVar23);
    }
    else {
      func_0x000107c61174(param_5);
      func_0x000107c49cd8();
      bVar3 = (int)pppppppuVar15 == 0;
      uVar14 = 0x65757274;
      if (bVar3) {
        uVar14 = 0x65736c6166;
      }
      uVar18 = 0xe400000000000000;
      if (bVar3) {
        uVar18 = 0xe500000000000000;
      }
      lVar23 = *param_10;
      func_0x000107c61558(lVar23);
      pppppppuStack_168 = (undefined8 *******)*param_10;
      func_0x00010018433c(uVar14,uVar18,0x64656c62616e65,0xe700000000000000,lVar23);
      func_0x000107c61170(param_5);
    }
    func_0x000107c6142c(lVar5);
    func_0x000107c6142c(lVar21);
    *param_10 = (long)pppppppuStack_168;
  }
  return;
}



/* Entry: 102bf39ac; end: 102bf3adf;  */

/* WARNING: Possible PIC construction at 0x000102bf3a0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bf3a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bf3a6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bf3a8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bf3a70) */
/* WARNING: Removing unreachable block (ram,0x000102bf3a44) */
/* WARNING: Removing unreachable block (ram,0x000102bf3ab4) */
/* WARNING: Removing unreachable block (ram,0x000102bf3a48) */
/* WARNING: Removing unreachable block (ram,0x000102bf3ad0) */
/* WARNING: Removing unreachable block (ram,0x000102bf3a5c) */
/* WARNING: Removing unreachable block (ram,0x000102bf3a10) */
/* WARNING: Removing unreachable block (ram,0x000102bf3a90) */
/* WARNING: Removing unreachable block (ram,0x000102bf3a9c) */

void FUN_102bf39ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  if (param_2 == 0) {
    uVar1 = *unaff_x20;
    func_0x000107c61434(uVar1);
    func_0x000100029284(param_3,param_4);
  }
  else {
    uVar1 = *unaff_x20;
    func_0x000107c61558(uVar1);
    func_0x00010018433c(param_1,param_2,param_3,param_4,uVar1);
    uVar1 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 102bf3ae0; end: 102bf7017;  */

undefined * FUN_102bf3ae0(undefined *param_1,byte param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined *puStack_748;
  undefined *puStack_740;
  undefined *puStack_6f8;
  undefined *puStack_6e8;
  undefined *puStack_6e0;
  undefined *puStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a0;
  ulong uStack_688;
  undefined *puStack_680;
  undefined *puStack_640;
  undefined8 uStack_638;
  undefined *puStack_5e0;
  undefined *puStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined *puStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined *puStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined *puStack_450;
  undefined8 uStack_448;
  long lStack_440;
  undefined *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined *puStack_400;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_390;
  undefined8 uStack_388;
  long lStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined *puStack_330;
  undefined8 uStack_328;
  long lStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined *puStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined *puStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      func_0x000107c61434(param_1);
      return param_1;
    }
    uVar11 = *(ulong *)(param_1 + 0x10);
    puStack_6f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar11 != 0) {
      uVar16 = 0;
LAB_102bf4a1c:
      uVar2 = uVar16;
      if (uVar16 <= uVar11) {
        uVar2 = uVar11;
      }
      do {
        if (uVar16 == uVar2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6d64);
          (*pcVar3)();
        }
        puVar12 = (undefined8 *)(param_1 + uVar16 * 0x58 + 0x20);
        uStack_428 = puVar12[5];
        uStack_430 = puVar12[4];
        uStack_418 = puVar12[7];
        uStack_420 = puVar12[6];
        uStack_408 = puVar12[9];
        uStack_410 = puVar12[8];
        puStack_400 = (undefined *)puVar12[10];
        uStack_448 = puVar12[1];
        puStack_450 = (undefined *)*puVar12;
        puStack_438 = (undefined *)puVar12[3];
        lVar20 = puVar12[2];
        uVar21 = *(ulong *)(lVar20 + 0x10);
        lStack_440 = lVar20;
        FUN_102bf0edc(&puStack_450,&uStack_4b0);
        puStack_748 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar21 != 0) {
          uVar23 = 0;
LAB_102bf4a94:
          do {
            if (*(ulong *)(lVar20 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6d70);
              (*pcVar3)();
            }
            puVar12 = (undefined8 *)(lVar20 + 0x20 + uVar23 * 0x58);
            uStack_3e8 = puVar12[1];
            puStack_3f0 = (undefined *)*puVar12;
            puStack_3d8 = (undefined *)puVar12[3];
            lVar15 = puVar12[2];
            uStack_3c8 = puVar12[5];
            uStack_3d0 = puVar12[4];
            uStack_3b8 = puVar12[7];
            uStack_3c0 = puVar12[6];
            uStack_3a8 = puVar12[9];
            uStack_3b0 = puVar12[8];
            puStack_3a0 = (undefined *)puVar12[10];
            uVar22 = *(ulong *)(lVar15 + 0x10);
            lStack_3e0 = lVar15;
            FUN_102bf0edc(&puStack_3f0,&uStack_4b0);
            puStack_740 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (uVar22 != 0) {
              uStack_6b0 = 0;
LAB_102bf4b04:
              do {
                if (*(ulong *)(lVar15 + 0x10) <= uStack_6b0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6d58);
                  (*pcVar3)();
                }
                puVar12 = (undefined8 *)(lVar15 + 0x20 + uStack_6b0 * 0x58);
                uStack_388 = puVar12[1];
                puStack_390 = (undefined *)*puVar12;
                puStack_378 = (undefined *)puVar12[3];
                lVar14 = puVar12[2];
                uStack_368 = puVar12[5];
                uStack_370 = puVar12[4];
                uStack_358 = puVar12[7];
                uStack_360 = puVar12[6];
                uStack_348 = puVar12[9];
                uStack_350 = puVar12[8];
                puStack_340 = (undefined *)puVar12[10];
                uVar17 = *(ulong *)(lVar14 + 0x10);
                lStack_380 = lVar14;
                FUN_102bf0edc(&puStack_390,&uStack_4b0);
                puStack_6e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
                if (uVar17 != 0) {
                  uStack_6a0 = 0;
LAB_102bf4b74:
                  do {
                    if (*(ulong *)(lVar14 + 0x10) <= uStack_6a0) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6d4c);
                      (*pcVar3)();
                    }
                    puVar12 = (undefined8 *)(lVar14 + 0x20 + uStack_6a0 * 0x58);
                    uStack_328 = puVar12[1];
                    puStack_330 = (undefined *)*puVar12;
                    puStack_318 = (undefined *)puVar12[3];
                    lVar27 = puVar12[2];
                    uStack_308 = puVar12[5];
                    uStack_310 = puVar12[4];
                    uStack_2f8 = puVar12[7];
                    uStack_300 = puVar12[6];
                    uStack_2e8 = puVar12[9];
                    uStack_2f0 = puVar12[8];
                    puStack_2e0 = (undefined *)puVar12[10];
                    uVar18 = *(ulong *)(lVar27 + 0x10);
                    lStack_320 = lVar27;
                    FUN_102bf0edc(&puStack_330,&uStack_4b0);
                    if (uVar18 == 0) {
                      puStack_6b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
                    }
                    else {
                      uStack_688 = 0;
                      puStack_6b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_102bf4bec:
                      do {
                        if (*(ulong *)(lVar27 + 0x10) <= uStack_688) {
                    /* WARNING: Does not return */
                          pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6d40);
                          (*pcVar3)();
                        }
                        puVar12 = (undefined8 *)(lVar27 + 0x20 + uStack_688 * 0x58);
                        uStack_2c8 = puVar12[1];
                        puStack_2d0 = (undefined *)*puVar12;
                        puStack_2b8 = (undefined *)puVar12[3];
                        lVar28 = puVar12[2];
                        uStack_2a8 = puVar12[5];
                        uStack_2b0 = puVar12[4];
                        uStack_298 = puVar12[7];
                        uStack_2a0 = puVar12[6];
                        uStack_288 = puVar12[9];
                        uStack_290 = puVar12[8];
                        puStack_280 = (undefined *)puVar12[10];
                        uVar19 = *(ulong *)(lVar28 + 0x10);
                        lStack_2c0 = lVar28;
                        FUN_102bf0edc(&puStack_2d0,&uStack_4b0);
                        if (uVar19 == 0) {
                          puStack_680 = PTR___swiftEmptyArrayStorage_11034f1c8;
                        }
                        else {
                          uVar24 = 0;
                          puStack_680 = PTR___swiftEmptyArrayStorage_11034f1c8;
                          do {
                            if (*(ulong *)(lVar28 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
                              pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6d34);
                              (*pcVar3)();
                            }
                            puVar12 = (undefined8 *)(lVar28 + 0x20 + uVar24 * 0x58);
                            uStack_268 = puVar12[1];
                            puStack_270 = (undefined *)*puVar12;
                            puStack_258 = (undefined *)puVar12[3];
                            lVar29 = puVar12[2];
                            uStack_248 = puVar12[5];
                            uStack_250 = puVar12[4];
                            uStack_238 = puVar12[7];
                            uStack_240 = puVar12[6];
                            uStack_228 = puVar12[9];
                            uStack_230 = puVar12[8];
                            puStack_220 = (undefined *)puVar12[10];
                            uVar13 = *(ulong *)(lVar29 + 0x10);
                            lStack_260 = lVar29;
                            FUN_102bf0edc(&puStack_270,&uStack_4b0);
                            puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
                            if (uVar13 != 0) {
                              uVar26 = 0;
                              do {
                                puVar12 = (undefined8 *)(lVar29 + 0x20 + uVar26 * 0x58);
                                uVar25 = uVar26;
                                while( true ) {
                                  if (*(ulong *)(lVar29 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
                                    pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf678c);
                                    (*pcVar3)();
                                  }
                                  uStack_208 = puVar12[1];
                                  puStack_210 = (undefined *)*puVar12;
                                  puStack_1f8 = (undefined *)puVar12[3];
                                  lVar30 = puVar12[2];
                                  uStack_1e8 = puVar12[5];
                                  uStack_1f0 = puVar12[4];
                                  uStack_1d8 = puVar12[7];
                                  uStack_1e0 = puVar12[6];
                                  uStack_1c8 = puVar12[9];
                                  uStack_1d0 = puVar12[8];
                                  puStack_1c0 = (undefined *)puVar12[10];
                                  uVar26 = uVar25 + 1;
                                  lStack_200 = lVar30;
                                  FUN_102bf0edc(&puStack_210,&uStack_4b0);
                                  lVar9 = lVar30;
                                  func_0x000107c61434();
                                  FUN_102bf7018();
                                  func_0x000107c6142c(lVar30);
                                  if (*(long *)(lVar9 + 0x10) != 0) break;
                                  uVar10 = 0;
                                  func_0x000102bf8168();
                                  if ((uVar10 & 1) != 0) break;
                                  func_0x000102bf0f18(&puStack_210);
                                  func_0x000107c6142c(lVar9);
                                  puVar12 = puVar12 + 0xb;
                                  uVar25 = uVar26;
                                  if (uVar13 == uVar26) goto LAB_102bf4eb8;
                                }
                                uStack_178 = uStack_208;
                                puStack_180 = puStack_210;
                                uStack_168 = uStack_1f0;
                                puStack_170 = puStack_1f8;
                                uStack_4a8 = uStack_1e0;
                                uStack_4b0 = uStack_1e8;
                                uStack_498 = uStack_1d0;
                                uStack_4a0 = uStack_1d8;
                                uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_1c8);
                                puStack_158 = puStack_1c0;
                                func_0x000100402194(&puStack_180,&puStack_510);
                                FUN_102bf7b80(&puStack_170,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
                                FUN_102bf7b80(&puStack_158,&puStack_510,0x112efe110,&UNK_10db30950);
                                func_0x000102bf0f18(&puStack_210);
                                puVar8 = puStack_158;
                                uStack_508 = uStack_178;
                                puStack_510 = puStack_180;
                                uStack_568 = uStack_168;
                                puStack_570 = puStack_170;
                                puVar7 = puVar6;
                                func_0x000107c61558();
                                puVar5 = puVar6;
                                if (((ulong)puVar7 & 1) == 0) {
                                  puVar5 = (undefined *)0x0;
                                  FUN_102bfb6d4(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
                                }
                                uVar10 = *(ulong *)(puVar5 + 0x10);
                                puVar6 = puVar5;
                                if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar10) {
                                  puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
                                  FUN_102bfb6d4(puVar6,uVar10 + 1,1,puVar5);
                                }
                                *(ulong *)(puVar6 + 0x10) = uVar10 + 1;
                                *(undefined8 *)(puVar6 + uVar10 * 0x58 + 0x28) = uStack_508;
                                *(undefined **)(puVar6 + uVar10 * 0x58 + 0x20) = puStack_510;
                                *(long *)(puVar6 + uVar10 * 0x58 + 0x30) = lVar9;
                                *(undefined8 *)(puVar6 + uVar10 * 0x58 + 0x40) = uStack_568;
                                *(undefined **)(puVar6 + uVar10 * 0x58 + 0x38) = puStack_570;
                                puVar6[uVar10 * 0x58 + 0x68] = (undefined1)uStack_490;
                                *(undefined8 *)(puVar6 + uVar10 * 0x58 + 0x60) = uStack_498;
                                *(undefined8 *)(puVar6 + uVar10 * 0x58 + 0x58) = uStack_4a0;
                                *(undefined8 *)(puVar6 + uVar10 * 0x58 + 0x50) = uStack_4a8;
                                *(undefined8 *)(puVar6 + uVar10 * 0x58 + 0x48) = uStack_4b0;
                                *(undefined **)(puVar6 + uVar10 * 0x58 + 0x70) = puVar8;
                              } while (uVar13 - 1 != uVar25);
                            }
LAB_102bf4eb8:
                            uVar24 = uVar24 + 1;
                            if (*(long *)(puVar6 + 0x10) == 0) {
                              uVar13 = 0;
                              func_0x000102bf8168();
                              if ((uVar13 & 1) != 0) goto LAB_102bf4ef8;
                              func_0x000102bf0f18(&puStack_270);
                              func_0x000107c6142c(puVar6);
                            }
                            else {
LAB_102bf4ef8:
                              uStack_148 = uStack_268;
                              puStack_150 = puStack_270;
                              uStack_138 = uStack_250;
                              puStack_140 = puStack_258;
                              uStack_4a8 = uStack_240;
                              uStack_4b0 = uStack_248;
                              uStack_498 = uStack_230;
                              uStack_4a0 = uStack_238;
                              uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_228);
                              puStack_128 = puStack_220;
                              func_0x000100402194(&puStack_150,&puStack_510);
                              FUN_102bf7b80(&puStack_140,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
                              FUN_102bf7b80(&puStack_128,&puStack_510,0x112efe110,&UNK_10db30950);
                              func_0x000102bf0f18(&puStack_270);
                              puVar8 = puStack_128;
                              uStack_508 = uStack_148;
                              puStack_510 = puStack_150;
                              uStack_568 = uStack_138;
                              puStack_570 = puStack_140;
                              puVar7 = puStack_680;
                              func_0x000107c61558();
                              if (((ulong)puVar7 & 1) == 0) {
                                plVar1 = (long *)(puStack_680 + 0x10);
                                puStack_680 = (undefined *)0x0;
                                FUN_102bfb6d4(0,*plVar1 + 1,1);
                              }
                              uVar13 = *(ulong *)(puStack_680 + 0x10);
                              if (*(ulong *)(puStack_680 + 0x18) >> 1 <= uVar13) {
                                puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puStack_680 + 0x18));
                                FUN_102bfb6d4(puVar7,uVar13 + 1,1,puStack_680);
                                puStack_680 = puVar7;
                              }
                              *(ulong *)(puStack_680 + 0x10) = uVar13 + 1;
                              *(undefined8 *)(puStack_680 + uVar13 * 0x58 + 0x28) = uStack_508;
                              *(undefined **)(puStack_680 + uVar13 * 0x58 + 0x20) = puStack_510;
                              *(undefined **)(puStack_680 + uVar13 * 0x58 + 0x30) = puVar6;
                              *(undefined8 *)(puStack_680 + uVar13 * 0x58 + 0x40) = uStack_568;
                              *(undefined **)(puStack_680 + uVar13 * 0x58 + 0x38) = puStack_570;
                              puStack_680[uVar13 * 0x58 + 0x68] = (undefined1)uStack_490;
                              *(undefined8 *)(puStack_680 + uVar13 * 0x58 + 0x60) = uStack_498;
                              *(undefined8 *)(puStack_680 + uVar13 * 0x58 + 0x58) = uStack_4a0;
                              *(undefined8 *)(puStack_680 + uVar13 * 0x58 + 0x50) = uStack_4a8;
                              *(undefined8 *)(puStack_680 + uVar13 * 0x58 + 0x48) = uStack_4b0;
                              *(undefined **)(puStack_680 + uVar13 * 0x58 + 0x70) = puVar8;
                            }
                          } while (uVar24 != uVar19);
                        }
                        uStack_688 = uStack_688 + 1;
                        if (*(long *)(puStack_680 + 0x10) != 0) {
LAB_102bf507c:
                          uStack_118 = uStack_2c8;
                          puStack_120 = puStack_2d0;
                          uStack_108 = uStack_2b0;
                          puStack_110 = puStack_2b8;
                          uStack_4a8 = uStack_2a0;
                          uStack_4b0 = uStack_2a8;
                          uStack_498 = uStack_290;
                          uStack_4a0 = uStack_298;
                          uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_288);
                          puStack_f8 = puStack_280;
                          func_0x000100402194(&puStack_120,&puStack_510);
                          FUN_102bf7b80(&puStack_110,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
                          FUN_102bf7b80(&puStack_f8,&puStack_510,0x112efe110,&UNK_10db30950);
                          func_0x000102bf0f18(&puStack_2d0);
                          puVar6 = puStack_f8;
                          uStack_508 = uStack_118;
                          puStack_510 = puStack_120;
                          uStack_568 = uStack_108;
                          puStack_570 = puStack_110;
                          puVar8 = puStack_6b8;
                          func_0x000107c61558();
                          if (((ulong)puVar8 & 1) == 0) {
                            plVar1 = (long *)(puStack_6b8 + 0x10);
                            puStack_6b8 = (undefined *)0x0;
                            FUN_102bfb6d4(0,*plVar1 + 1,1);
                          }
                          uVar19 = *(ulong *)(puStack_6b8 + 0x10);
                          if (*(ulong *)(puStack_6b8 + 0x18) >> 1 <= uVar19) {
                            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puStack_6b8 + 0x18));
                            FUN_102bfb6d4(puVar8,uVar19 + 1,1,puStack_6b8);
                            puStack_6b8 = puVar8;
                          }
                          *(ulong *)(puStack_6b8 + 0x10) = uVar19 + 1;
                          *(undefined8 *)(puStack_6b8 + uVar19 * 0x58 + 0x28) = uStack_508;
                          *(undefined **)(puStack_6b8 + uVar19 * 0x58 + 0x20) = puStack_510;
                          *(undefined **)(puStack_6b8 + uVar19 * 0x58 + 0x30) = puStack_680;
                          *(undefined8 *)(puStack_6b8 + uVar19 * 0x58 + 0x40) = uStack_568;
                          *(undefined **)(puStack_6b8 + uVar19 * 0x58 + 0x38) = puStack_570;
                          puStack_6b8[uVar19 * 0x58 + 0x68] = (undefined1)uStack_490;
                          *(undefined8 *)(puStack_6b8 + uVar19 * 0x58 + 0x60) = uStack_498;
                          *(undefined8 *)(puStack_6b8 + uVar19 * 0x58 + 0x58) = uStack_4a0;
                          *(undefined8 *)(puStack_6b8 + uVar19 * 0x58 + 0x50) = uStack_4a8;
                          *(undefined8 *)(puStack_6b8 + uVar19 * 0x58 + 0x48) = uStack_4b0;
                          *(undefined **)(puStack_6b8 + uVar19 * 0x58 + 0x70) = puVar6;
                          if (uStack_688 == uVar18) break;
                          goto LAB_102bf4bec;
                        }
                        uVar19 = 0;
                        func_0x000102bf8168();
                        if ((uVar19 & 1) != 0) goto LAB_102bf507c;
                        func_0x000102bf0f18(&puStack_2d0);
                        func_0x000107c6142c(puStack_680);
                      } while (uStack_688 != uVar18);
                    }
                    uStack_6a0 = uStack_6a0 + 1;
                    if (*(long *)(puStack_6b8 + 0x10) != 0) {
LAB_102bf521c:
                      uStack_e8 = uStack_328;
                      puStack_f0 = puStack_330;
                      uStack_d8 = uStack_310;
                      puStack_e0 = puStack_318;
                      uStack_4a8 = uStack_300;
                      uStack_4b0 = uStack_308;
                      uStack_498 = uStack_2f0;
                      uStack_4a0 = uStack_2f8;
                      uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_2e8);
                      puStack_c8 = puStack_2e0;
                      func_0x000100402194(&puStack_f0,&puStack_510);
                      FUN_102bf7b80(&puStack_e0,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
                      FUN_102bf7b80(&puStack_c8,&puStack_510,0x112efe110,&UNK_10db30950);
                      func_0x000102bf0f18(&puStack_330);
                      puVar6 = puStack_c8;
                      uStack_508 = uStack_e8;
                      puStack_510 = puStack_f0;
                      uStack_568 = uStack_d8;
                      puStack_570 = puStack_e0;
                      puVar8 = puStack_6e0;
                      func_0x000107c61558();
                      if (((ulong)puVar8 & 1) == 0) {
                        plVar1 = (long *)(puStack_6e0 + 0x10);
                        puStack_6e0 = (undefined *)0x0;
                        FUN_102bfb6d4(0,*plVar1 + 1,1);
                      }
                      uVar18 = *(ulong *)(puStack_6e0 + 0x10);
                      if (*(ulong *)(puStack_6e0 + 0x18) >> 1 <= uVar18) {
                        puStack_6e0 = (undefined *)(ulong)(1 < *(ulong *)(puStack_6e0 + 0x18));
                        FUN_102bfb6d4(puStack_6e0,uVar18 + 1,1);
                      }
                      *(ulong *)(puStack_6e0 + 0x10) = uVar18 + 1;
                      *(undefined8 *)(puStack_6e0 + uVar18 * 0x58 + 0x28) = uStack_508;
                      *(undefined **)(puStack_6e0 + uVar18 * 0x58 + 0x20) = puStack_510;
                      *(undefined **)(puStack_6e0 + uVar18 * 0x58 + 0x30) = puStack_6b8;
                      *(undefined8 *)(puStack_6e0 + uVar18 * 0x58 + 0x40) = uStack_568;
                      *(undefined **)(puStack_6e0 + uVar18 * 0x58 + 0x38) = puStack_570;
                      puStack_6e0[uVar18 * 0x58 + 0x68] = (undefined1)uStack_490;
                      *(undefined8 *)(puStack_6e0 + uVar18 * 0x58 + 0x60) = uStack_498;
                      *(undefined8 *)(puStack_6e0 + uVar18 * 0x58 + 0x58) = uStack_4a0;
                      *(undefined8 *)(puStack_6e0 + uVar18 * 0x58 + 0x50) = uStack_4a8;
                      *(undefined8 *)(puStack_6e0 + uVar18 * 0x58 + 0x48) = uStack_4b0;
                      *(undefined **)(puStack_6e0 + uVar18 * 0x58 + 0x70) = puVar6;
                      if (uStack_6a0 == uVar17) break;
                      goto LAB_102bf4b74;
                    }
                    uVar18 = 0;
                    func_0x000102bf8168();
                    if ((uVar18 & 1) != 0) goto LAB_102bf521c;
                    func_0x000102bf0f18(&puStack_330);
                    func_0x000107c6142c(puStack_6b8);
                  } while (uStack_6a0 != uVar17);
                }
                puVar6 = puStack_340;
                uStack_6b0 = uStack_6b0 + 1;
                if (*(long *)(puStack_6e0 + 0x10) != 0) {
LAB_102bf5448:
                  uStack_b8 = uStack_388;
                  puStack_c0 = puStack_390;
                  uStack_a8 = uStack_370;
                  puStack_b0 = puStack_378;
                  uStack_4a8 = uStack_360;
                  uStack_4b0 = uStack_368;
                  uStack_498 = uStack_350;
                  uStack_4a0 = uStack_358;
                  uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_348);
                  puStack_98 = puStack_340;
                  func_0x000100402194(&puStack_c0,&puStack_510);
                  FUN_102bf7b80(&puStack_b0,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
                  FUN_102bf7b80(&puStack_98,&puStack_510,0x112efe110,&UNK_10db30950);
                  func_0x000102bf0f18(&puStack_390);
                  puVar6 = puStack_98;
                  uStack_508 = uStack_b8;
                  puStack_510 = puStack_c0;
                  uStack_568 = uStack_a8;
                  puStack_570 = puStack_b0;
                  puVar8 = puStack_740;
                  func_0x000107c61558();
                  if (((ulong)puVar8 & 1) == 0) {
                    plVar1 = (long *)(puStack_740 + 0x10);
                    puStack_740 = (undefined *)0x0;
                    FUN_102bfb6d4(0,*plVar1 + 1,1);
                  }
                  uVar17 = *(ulong *)(puStack_740 + 0x10);
                  if (*(ulong *)(puStack_740 + 0x18) >> 1 <= uVar17) {
                    puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puStack_740 + 0x18));
                    FUN_102bfb6d4(puVar8,uVar17 + 1,1,puStack_740);
                    puStack_740 = puVar8;
                  }
                  *(ulong *)(puStack_740 + 0x10) = uVar17 + 1;
                  *(undefined8 *)(puStack_740 + uVar17 * 0x58 + 0x28) = uStack_508;
                  *(undefined **)(puStack_740 + uVar17 * 0x58 + 0x20) = puStack_510;
                  *(undefined **)(puStack_740 + uVar17 * 0x58 + 0x30) = puStack_6e0;
                  *(undefined8 *)(puStack_740 + uVar17 * 0x58 + 0x40) = uStack_568;
                  *(undefined **)(puStack_740 + uVar17 * 0x58 + 0x38) = puStack_570;
                  puStack_740[uVar17 * 0x58 + 0x68] = (undefined1)uStack_490;
                  *(undefined8 *)(puStack_740 + uVar17 * 0x58 + 0x60) = uStack_498;
                  *(undefined8 *)(puStack_740 + uVar17 * 0x58 + 0x58) = uStack_4a0;
                  *(undefined8 *)(puStack_740 + uVar17 * 0x58 + 0x50) = uStack_4a8;
                  *(undefined8 *)(puStack_740 + uVar17 * 0x58 + 0x48) = uStack_4b0;
                  *(undefined **)(puStack_740 + uVar17 * 0x58 + 0x70) = puVar6;
                  if (uStack_6b0 == uVar22) break;
                  goto LAB_102bf4b04;
                }
                if (puStack_340 != (undefined *)0x0) {
                  lVar14 = *(long *)(puStack_340 + 0x10);
                  func_0x000107c61434(puStack_340);
                  if (lVar14 != 0) {
                    uVar17 = 0;
                    func_0x000100029284(0x656c626170706174);
                    if ((uVar17 & 1) != 0) {
LAB_102bf543c:
                      func_0x000107c6142c(puVar6);
                      goto LAB_102bf5448;
                    }
                    if (*(long *)(puVar6 + 0x10) != 0) {
                      uVar17 = 0;
                      func_0x000100029284(0x656c6269736976);
                      if ((uVar17 & 1) != 0) goto LAB_102bf543c;
                      if (*(long *)(puVar6 + 0x10) != 0) {
                        uVar17 = 0xe900000000000079;
                        func_0x000100029284(0x4264657265766f63);
                        if ((uVar17 & 1) != 0) goto LAB_102bf543c;
                      }
                    }
                  }
                  func_0x000107c6142c(puVar6);
                  uVar17 = 0;
                  func_0x000102bf7d9c();
                  if ((uVar17 & 1) != 0) goto LAB_102bf5448;
                }
                func_0x000107c6142c(puStack_6e0);
                func_0x000102bf0f18(&puStack_390);
              } while (uStack_6b0 != uVar22);
            }
            uVar23 = uVar23 + 1;
            if (*(long *)(puStack_740 + 0x10) != 0) {
LAB_102bf55e8:
              uStack_88 = uStack_3e8;
              puStack_90 = puStack_3f0;
              uStack_78 = uStack_3d0;
              puStack_80 = puStack_3d8;
              uStack_4a8 = uStack_3c0;
              uStack_4b0 = uStack_3c8;
              uStack_498 = uStack_3b0;
              uStack_4a0 = uStack_3b8;
              uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_3a8);
              puStack_1b0 = puStack_3a0;
              func_0x000100402194(&puStack_90,&puStack_510);
              FUN_102bf7b80(&puStack_80,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
              FUN_102bf7b80(&puStack_1b0,&puStack_510,0x112efe110,&UNK_10db30950);
              func_0x000102bf0f18(&puStack_3f0);
              puVar6 = puStack_1b0;
              uStack_508 = uStack_88;
              puStack_510 = puStack_90;
              uStack_568 = uStack_78;
              puStack_570 = puStack_80;
              puVar8 = puStack_748;
              func_0x000107c61558();
              if (((ulong)puVar8 & 1) == 0) {
                plVar1 = (long *)(puStack_748 + 0x10);
                puStack_748 = (undefined *)0x0;
                FUN_102bfb6d4(0,*plVar1 + 1,1);
              }
              uVar22 = *(ulong *)(puStack_748 + 0x10);
              if (*(ulong *)(puStack_748 + 0x18) >> 1 <= uVar22) {
                puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puStack_748 + 0x18));
                FUN_102bfb6d4(puVar8,uVar22 + 1,1,puStack_748);
                puStack_748 = puVar8;
              }
              *(ulong *)(puStack_748 + 0x10) = uVar22 + 1;
              *(undefined8 *)(puStack_748 + uVar22 * 0x58 + 0x28) = uStack_508;
              *(undefined **)(puStack_748 + uVar22 * 0x58 + 0x20) = puStack_510;
              *(undefined **)(puStack_748 + uVar22 * 0x58 + 0x30) = puStack_740;
              *(undefined8 *)(puStack_748 + uVar22 * 0x58 + 0x40) = uStack_568;
              *(undefined **)(puStack_748 + uVar22 * 0x58 + 0x38) = puStack_570;
              puStack_748[uVar22 * 0x58 + 0x68] = (undefined1)uStack_490;
              *(undefined8 *)(puStack_748 + uVar22 * 0x58 + 0x60) = uStack_498;
              *(undefined8 *)(puStack_748 + uVar22 * 0x58 + 0x58) = uStack_4a0;
              *(undefined8 *)(puStack_748 + uVar22 * 0x58 + 0x50) = uStack_4a8;
              *(undefined8 *)(puStack_748 + uVar22 * 0x58 + 0x48) = uStack_4b0;
              *(undefined **)(puStack_748 + uVar22 * 0x58 + 0x70) = puVar6;
              if (uVar23 == uVar21) break;
              goto LAB_102bf4a94;
            }
            uVar22 = 0;
            func_0x000102bf8168();
            if ((uVar22 & 1) != 0) goto LAB_102bf55e8;
            func_0x000102bf0f18(&puStack_3f0);
            func_0x000107c6142c(puStack_740);
          } while (uVar23 != uVar21);
        }
        uVar16 = uVar16 + 1;
        if (*(long *)(puStack_748 + 0x10) != 0) goto LAB_102bf5778;
        uVar21 = 0;
        func_0x000102bf8168();
        if ((uVar21 & 1) != 0) goto LAB_102bf5778;
        func_0x000102bf0f18(&puStack_450);
        func_0x000107c6142c(puStack_748);
        if (uVar16 == uVar11) break;
      } while( true );
    }
LAB_102bf6790:
    lVar20 = *(long *)(puStack_6f8 + 0x10);
    if (lVar20 == 0) goto LAB_102bf6cfc;
    puStack_188 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_102bf7c5c(0,lVar20,0);
    lVar15 = 0x20;
    do {
      puVar6 = puStack_188;
      puVar12 = (undefined8 *)(puStack_6f8 + lVar15);
      uStack_4a8 = puVar12[1];
      uStack_4b0 = *puVar12;
      uStack_498 = puVar12[3];
      uStack_4a0 = puVar12[2];
      uStack_488 = puVar12[5];
      uStack_490 = puVar12[4];
      uStack_478 = puVar12[7];
      uStack_480 = puVar12[6];
      uStack_468 = puVar12[9];
      uStack_470 = puVar12[8];
      uStack_460 = puVar12[10];
      FUN_102bf0edc(&uStack_4b0,&puStack_570);
      FUN_102bf71f4(&puStack_510,&uStack_4b0,param_3);
      func_0x000102bf0f18(&uStack_4b0);
      uVar11 = *(ulong *)(puVar6 + 0x10);
      puStack_188 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar11) {
        FUN_102bf7c5c(1 < *(ulong *)(puVar6 + 0x18),uVar11 + 1,1);
      }
      *(ulong *)(puStack_188 + 0x10) = uVar11 + 1;
      *(undefined8 *)(puStack_188 + uVar11 * 0x58 + 0x28) = uStack_508;
      *(undefined **)(puStack_188 + uVar11 * 0x58 + 0x20) = puStack_510;
      *(undefined8 *)(puStack_188 + uVar11 * 0x58 + 0x38) = uStack_4f8;
      *(undefined8 *)(puStack_188 + uVar11 * 0x58 + 0x30) = uStack_500;
      *(undefined8 *)(puStack_188 + uVar11 * 0x58 + 0x70) = uStack_4c0;
      *(undefined8 *)(puStack_188 + uVar11 * 0x58 + 0x58) = uStack_4d8;
      *(undefined8 *)(puStack_188 + uVar11 * 0x58 + 0x50) = uStack_4e0;
      *(undefined8 *)(puStack_188 + uVar11 * 0x58 + 0x68) = uStack_4c8;
      *(undefined8 *)(puStack_188 + uVar11 * 0x58 + 0x60) = uStack_4d0;
      *(undefined8 *)(puStack_188 + uVar11 * 0x58 + 0x48) = uStack_4e8;
      *(undefined8 *)(puStack_188 + uVar11 * 0x58 + 0x40) = uStack_4f0;
      lVar15 = lVar15 + 0x58;
      lVar20 = lVar20 + -1;
      puVar6 = puStack_188;
    } while (lVar20 != 0);
  }
  else if (param_2 == 2) {
    uVar11 = *(ulong *)(param_1 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar11 != 0) {
      uVar16 = 0;
LAB_102bf3b58:
      uVar2 = uVar16;
      if (uVar16 <= uVar11) {
        uVar2 = uVar11;
      }
      do {
        if (uVar16 == uVar2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6d60);
          (*pcVar3)();
        }
        puVar12 = (undefined8 *)(param_1 + uVar16 * 0x58 + 0x20);
        uStack_428 = puVar12[5];
        uStack_430 = puVar12[4];
        uStack_418 = puVar12[7];
        uStack_420 = puVar12[6];
        uStack_408 = puVar12[9];
        uStack_410 = puVar12[8];
        puStack_400 = (undefined *)puVar12[10];
        uStack_448 = puVar12[1];
        puStack_450 = (undefined *)*puVar12;
        puStack_438 = (undefined *)puVar12[3];
        lVar20 = puVar12[2];
        uVar21 = *(ulong *)(lVar20 + 0x10);
        lStack_440 = lVar20;
        FUN_102bf0edc(&puStack_450,&uStack_4b0);
        puStack_748 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar21 != 0) {
          uVar23 = 0;
LAB_102bf3bcc:
          do {
            if (*(ulong *)(lVar20 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6d6c);
              (*pcVar3)();
            }
            puVar12 = (undefined8 *)(lVar20 + 0x20 + uVar23 * 0x58);
            uStack_3e8 = puVar12[1];
            puStack_3f0 = (undefined *)*puVar12;
            puStack_3d8 = (undefined *)puVar12[3];
            lVar15 = puVar12[2];
            uStack_3c8 = puVar12[5];
            uStack_3d0 = puVar12[4];
            uStack_3b8 = puVar12[7];
            uStack_3c0 = puVar12[6];
            uStack_3a8 = puVar12[9];
            uStack_3b0 = puVar12[8];
            puStack_3a0 = (undefined *)puVar12[10];
            uVar22 = *(ulong *)(lVar15 + 0x10);
            lStack_3e0 = lVar15;
            FUN_102bf0edc(&puStack_3f0,&uStack_4b0);
            puStack_740 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (uVar22 != 0) {
              uStack_6b0 = 0;
LAB_102bf3c3c:
              do {
                if (*(ulong *)(lVar15 + 0x10) <= uStack_6b0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6d54);
                  (*pcVar3)();
                }
                puVar12 = (undefined8 *)(lVar15 + 0x20 + uStack_6b0 * 0x58);
                uStack_388 = puVar12[1];
                puStack_390 = (undefined *)*puVar12;
                puStack_378 = (undefined *)puVar12[3];
                lVar14 = puVar12[2];
                uStack_368 = puVar12[5];
                uStack_370 = puVar12[4];
                uStack_358 = puVar12[7];
                uStack_360 = puVar12[6];
                uStack_348 = puVar12[9];
                uStack_350 = puVar12[8];
                puStack_340 = (undefined *)puVar12[10];
                uVar17 = *(ulong *)(lVar14 + 0x10);
                lStack_380 = lVar14;
                FUN_102bf0edc(&puStack_390,&uStack_4b0);
                puStack_6e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
                if (uVar17 != 0) {
                  uStack_6a0 = 0;
LAB_102bf3cac:
                  do {
                    if (*(ulong *)(lVar14 + 0x10) <= uStack_6a0) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6d48);
                      (*pcVar3)();
                    }
                    puVar12 = (undefined8 *)(lVar14 + 0x20 + uStack_6a0 * 0x58);
                    uStack_328 = puVar12[1];
                    puStack_330 = (undefined *)*puVar12;
                    puStack_318 = (undefined *)puVar12[3];
                    lVar27 = puVar12[2];
                    uStack_308 = puVar12[5];
                    uStack_310 = puVar12[4];
                    uStack_2f8 = puVar12[7];
                    uStack_300 = puVar12[6];
                    uStack_2e8 = puVar12[9];
                    uStack_2f0 = puVar12[8];
                    puStack_2e0 = (undefined *)puVar12[10];
                    uVar18 = *(ulong *)(lVar27 + 0x10);
                    lStack_320 = lVar27;
                    FUN_102bf0edc(&puStack_330,&uStack_4b0);
                    if (uVar18 == 0) {
                      puStack_6b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
                    }
                    else {
                      uStack_688 = 0;
                      puStack_6b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_102bf3d24:
                      do {
                        if (*(ulong *)(lVar27 + 0x10) <= uStack_688) {
                    /* WARNING: Does not return */
                          pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6d3c);
                          (*pcVar3)();
                        }
                        puVar12 = (undefined8 *)(lVar27 + 0x20 + uStack_688 * 0x58);
                        uStack_2c8 = puVar12[1];
                        puStack_2d0 = (undefined *)*puVar12;
                        puStack_2b8 = (undefined *)puVar12[3];
                        lVar28 = puVar12[2];
                        uStack_2a8 = puVar12[5];
                        uStack_2b0 = puVar12[4];
                        uStack_298 = puVar12[7];
                        uStack_2a0 = puVar12[6];
                        uStack_288 = puVar12[9];
                        uStack_290 = puVar12[8];
                        puStack_280 = (undefined *)puVar12[10];
                        uVar19 = *(ulong *)(lVar28 + 0x10);
                        lStack_2c0 = lVar28;
                        FUN_102bf0edc(&puStack_2d0,&uStack_4b0);
                        if (uVar19 == 0) {
                          puStack_680 = PTR___swiftEmptyArrayStorage_11034f1c8;
                        }
                        else {
                          uVar24 = 0;
                          puStack_680 = PTR___swiftEmptyArrayStorage_11034f1c8;
                          do {
                            if (*(ulong *)(lVar28 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
                              pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6d30);
                              (*pcVar3)();
                            }
                            puVar12 = (undefined8 *)(lVar28 + 0x20 + uVar24 * 0x58);
                            uStack_268 = puVar12[1];
                            puStack_270 = (undefined *)*puVar12;
                            puStack_258 = (undefined *)puVar12[3];
                            lVar29 = puVar12[2];
                            uStack_248 = puVar12[5];
                            uStack_250 = puVar12[4];
                            uStack_238 = puVar12[7];
                            uStack_240 = puVar12[6];
                            uStack_228 = puVar12[9];
                            uStack_230 = puVar12[8];
                            puStack_220 = (undefined *)puVar12[10];
                            uVar13 = *(ulong *)(lVar29 + 0x10);
                            lStack_260 = lVar29;
                            FUN_102bf0edc(&puStack_270,&uStack_4b0);
                            puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
                            if (uVar13 != 0) {
                              uVar26 = 0;
                              do {
                                puVar12 = (undefined8 *)(lVar29 + 0x20 + uVar26 * 0x58);
                                uVar25 = uVar26;
                                while( true ) {
                                  if (*(ulong *)(lVar29 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
                                    pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6788);
                                    (*pcVar3)();
                                  }
                                  uStack_208 = puVar12[1];
                                  puStack_210 = (undefined *)*puVar12;
                                  puStack_1f8 = (undefined *)puVar12[3];
                                  lVar30 = puVar12[2];
                                  uStack_1e8 = puVar12[5];
                                  uStack_1f0 = puVar12[4];
                                  uStack_1d8 = puVar12[7];
                                  uStack_1e0 = puVar12[6];
                                  uStack_1c8 = puVar12[9];
                                  uStack_1d0 = puVar12[8];
                                  puStack_1c0 = (undefined *)puVar12[10];
                                  uVar26 = uVar25 + 1;
                                  lStack_200 = lVar30;
                                  FUN_102bf0edc(&puStack_210,&uStack_4b0);
                                  lVar9 = lVar30;
                                  func_0x000107c61434();
                                  FUN_102bf7018();
                                  func_0x000107c6142c(lVar30);
                                  if (*(long *)(lVar9 + 0x10) != 0) break;
                                  uVar10 = 0;
                                  func_0x000102bf8168();
                                  if ((uVar10 & 1) != 0) break;
                                  func_0x000102bf0f18(&puStack_210);
                                  func_0x000107c6142c(lVar9);
                                  puVar12 = puVar12 + 0xb;
                                  uVar25 = uVar26;
                                  if (uVar13 == uVar26) goto LAB_102bf3ff0;
                                }
                                uStack_1a8 = uStack_208;
                                puStack_1b0 = puStack_210;
                                uStack_198 = uStack_1f0;
                                puStack_1a0 = puStack_1f8;
                                uStack_4a8 = uStack_1e0;
                                uStack_4b0 = uStack_1e8;
                                uStack_498 = uStack_1d0;
                                uStack_4a0 = uStack_1d8;
                                uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_1c8);
                                puStack_190 = puStack_1c0;
                                func_0x000100402194(&puStack_1b0,&puStack_510);
                                FUN_102bf7b80(&puStack_1a0,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
                                FUN_102bf7b80(&puStack_190,&puStack_510,0x112efe110,&UNK_10db30950);
                                func_0x000102bf0f18(&puStack_210);
                                puVar7 = puStack_190;
                                uStack_508 = uStack_1a8;
                                puStack_510 = puStack_1b0;
                                uStack_568 = uStack_198;
                                puStack_570 = puStack_1a0;
                                puVar5 = puVar8;
                                func_0x000107c61558();
                                puVar4 = puVar8;
                                if (((ulong)puVar5 & 1) == 0) {
                                  puVar4 = (undefined *)0x0;
                                  FUN_102bfb6d4(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
                                }
                                uVar10 = *(ulong *)(puVar4 + 0x10);
                                puVar8 = puVar4;
                                if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar10) {
                                  puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
                                  FUN_102bfb6d4(puVar8,uVar10 + 1,1,puVar4);
                                }
                                *(ulong *)(puVar8 + 0x10) = uVar10 + 1;
                                *(undefined8 *)(puVar8 + uVar10 * 0x58 + 0x28) = uStack_508;
                                *(undefined **)(puVar8 + uVar10 * 0x58 + 0x20) = puStack_510;
                                *(long *)(puVar8 + uVar10 * 0x58 + 0x30) = lVar9;
                                *(undefined8 *)(puVar8 + uVar10 * 0x58 + 0x40) = uStack_568;
                                *(undefined **)(puVar8 + uVar10 * 0x58 + 0x38) = puStack_570;
                                puVar8[uVar10 * 0x58 + 0x68] = (undefined1)uStack_490;
                                *(undefined8 *)(puVar8 + uVar10 * 0x58 + 0x60) = uStack_498;
                                *(undefined8 *)(puVar8 + uVar10 * 0x58 + 0x58) = uStack_4a0;
                                *(undefined8 *)(puVar8 + uVar10 * 0x58 + 0x50) = uStack_4a8;
                                *(undefined8 *)(puVar8 + uVar10 * 0x58 + 0x48) = uStack_4b0;
                                *(undefined **)(puVar8 + uVar10 * 0x58 + 0x70) = puVar7;
                              } while (uVar13 - 1 != uVar25);
                            }
LAB_102bf3ff0:
                            uVar24 = uVar24 + 1;
                            if (*(long *)(puVar8 + 0x10) == 0) {
                              uVar13 = 0;
                              func_0x000102bf8168();
                              if ((uVar13 & 1) != 0) goto LAB_102bf4030;
                              func_0x000102bf0f18(&puStack_270);
                              func_0x000107c6142c(puVar8);
                            }
                            else {
LAB_102bf4030:
                              uStack_178 = uStack_268;
                              puStack_180 = puStack_270;
                              uStack_168 = uStack_250;
                              puStack_170 = puStack_258;
                              uStack_4a8 = uStack_240;
                              uStack_4b0 = uStack_248;
                              uStack_498 = uStack_230;
                              uStack_4a0 = uStack_238;
                              uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_228);
                              puStack_188 = puStack_220;
                              func_0x000100402194(&puStack_180,&puStack_510);
                              FUN_102bf7b80(&puStack_170,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
                              FUN_102bf7b80(&puStack_188,&puStack_510,0x112efe110,&UNK_10db30950);
                              func_0x000102bf0f18(&puStack_270);
                              puVar7 = puStack_188;
                              uStack_508 = uStack_178;
                              puStack_510 = puStack_180;
                              uStack_568 = uStack_168;
                              puStack_570 = puStack_170;
                              puVar5 = puStack_680;
                              func_0x000107c61558();
                              if (((ulong)puVar5 & 1) == 0) {
                                plVar1 = (long *)(puStack_680 + 0x10);
                                puStack_680 = (undefined *)0x0;
                                FUN_102bfb6d4(0,*plVar1 + 1,1);
                              }
                              uVar13 = *(ulong *)(puStack_680 + 0x10);
                              if (*(ulong *)(puStack_680 + 0x18) >> 1 <= uVar13) {
                                puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puStack_680 + 0x18));
                                FUN_102bfb6d4(puVar5,uVar13 + 1,1,puStack_680);
                                puStack_680 = puVar5;
                              }
                              *(ulong *)(puStack_680 + 0x10) = uVar13 + 1;
                              *(undefined8 *)(puStack_680 + uVar13 * 0x58 + 0x28) = uStack_508;
                              *(undefined **)(puStack_680 + uVar13 * 0x58 + 0x20) = puStack_510;
                              *(undefined **)(puStack_680 + uVar13 * 0x58 + 0x30) = puVar8;
                              *(undefined8 *)(puStack_680 + uVar13 * 0x58 + 0x40) = uStack_568;
                              *(undefined **)(puStack_680 + uVar13 * 0x58 + 0x38) = puStack_570;
                              puStack_680[uVar13 * 0x58 + 0x68] = (undefined1)uStack_490;
                              *(undefined8 *)(puStack_680 + uVar13 * 0x58 + 0x60) = uStack_498;
                              *(undefined8 *)(puStack_680 + uVar13 * 0x58 + 0x58) = uStack_4a0;
                              *(undefined8 *)(puStack_680 + uVar13 * 0x58 + 0x50) = uStack_4a8;
                              *(undefined8 *)(puStack_680 + uVar13 * 0x58 + 0x48) = uStack_4b0;
                              *(undefined **)(puStack_680 + uVar13 * 0x58 + 0x70) = puVar7;
                            }
                          } while (uVar24 != uVar19);
                        }
                        uStack_688 = uStack_688 + 1;
                        if (*(long *)(puStack_680 + 0x10) != 0) {
LAB_102bf41b4:
                          uStack_148 = uStack_2c8;
                          puStack_150 = puStack_2d0;
                          uStack_138 = uStack_2b0;
                          puStack_140 = puStack_2b8;
                          uStack_4a8 = uStack_2a0;
                          uStack_4b0 = uStack_2a8;
                          uStack_498 = uStack_290;
                          uStack_4a0 = uStack_298;
                          uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_288);
                          puStack_158 = puStack_280;
                          func_0x000100402194(&puStack_150,&puStack_510);
                          FUN_102bf7b80(&puStack_140,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
                          FUN_102bf7b80(&puStack_158,&puStack_510,0x112efe110,&UNK_10db30950);
                          func_0x000102bf0f18(&puStack_2d0);
                          puVar8 = puStack_158;
                          uStack_508 = uStack_148;
                          puStack_510 = puStack_150;
                          uStack_568 = uStack_138;
                          puStack_570 = puStack_140;
                          puVar7 = puStack_6b8;
                          func_0x000107c61558();
                          if (((ulong)puVar7 & 1) == 0) {
                            plVar1 = (long *)(puStack_6b8 + 0x10);
                            puStack_6b8 = (undefined *)0x0;
                            FUN_102bfb6d4(0,*plVar1 + 1,1);
                          }
                          uVar19 = *(ulong *)(puStack_6b8 + 0x10);
                          if (*(ulong *)(puStack_6b8 + 0x18) >> 1 <= uVar19) {
                            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puStack_6b8 + 0x18));
                            FUN_102bfb6d4(puVar7,uVar19 + 1,1,puStack_6b8);
                            puStack_6b8 = puVar7;
                          }
                          *(ulong *)(puStack_6b8 + 0x10) = uVar19 + 1;
                          *(undefined8 *)(puStack_6b8 + uVar19 * 0x58 + 0x28) = uStack_508;
                          *(undefined **)(puStack_6b8 + uVar19 * 0x58 + 0x20) = puStack_510;
                          *(undefined **)(puStack_6b8 + uVar19 * 0x58 + 0x30) = puStack_680;
                          *(undefined8 *)(puStack_6b8 + uVar19 * 0x58 + 0x40) = uStack_568;
                          *(undefined **)(puStack_6b8 + uVar19 * 0x58 + 0x38) = puStack_570;
                          puStack_6b8[uVar19 * 0x58 + 0x68] = (undefined1)uStack_490;
                          *(undefined8 *)(puStack_6b8 + uVar19 * 0x58 + 0x60) = uStack_498;
                          *(undefined8 *)(puStack_6b8 + uVar19 * 0x58 + 0x58) = uStack_4a0;
                          *(undefined8 *)(puStack_6b8 + uVar19 * 0x58 + 0x50) = uStack_4a8;
                          *(undefined8 *)(puStack_6b8 + uVar19 * 0x58 + 0x48) = uStack_4b0;
                          *(undefined **)(puStack_6b8 + uVar19 * 0x58 + 0x70) = puVar8;
                          if (uStack_688 == uVar18) break;
                          goto LAB_102bf3d24;
                        }
                        uVar19 = 0;
                        func_0x000102bf8168();
                        if ((uVar19 & 1) != 0) goto LAB_102bf41b4;
                        func_0x000102bf0f18(&puStack_2d0);
                        func_0x000107c6142c(puStack_680);
                      } while (uStack_688 != uVar18);
                    }
                    uStack_6a0 = uStack_6a0 + 1;
                    if (*(long *)(puStack_6b8 + 0x10) != 0) {
LAB_102bf4354:
                      uStack_118 = uStack_328;
                      puStack_120 = puStack_330;
                      uStack_108 = uStack_310;
                      puStack_110 = puStack_318;
                      uStack_4a8 = uStack_300;
                      uStack_4b0 = uStack_308;
                      uStack_498 = uStack_2f0;
                      uStack_4a0 = uStack_2f8;
                      uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_2e8);
                      puStack_128 = puStack_2e0;
                      func_0x000100402194(&puStack_120,&puStack_510);
                      FUN_102bf7b80(&puStack_110,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
                      FUN_102bf7b80(&puStack_128,&puStack_510,0x112efe110,&UNK_10db30950);
                      func_0x000102bf0f18(&puStack_330);
                      puVar8 = puStack_128;
                      uStack_508 = uStack_118;
                      puStack_510 = puStack_120;
                      uStack_568 = uStack_108;
                      puStack_570 = puStack_110;
                      puVar7 = puStack_6e8;
                      func_0x000107c61558();
                      if (((ulong)puVar7 & 1) == 0) {
                        plVar1 = (long *)(puStack_6e8 + 0x10);
                        puStack_6e8 = (undefined *)0x0;
                        FUN_102bfb6d4(0,*plVar1 + 1,1);
                      }
                      uVar18 = *(ulong *)(puStack_6e8 + 0x10);
                      if (*(ulong *)(puStack_6e8 + 0x18) >> 1 <= uVar18) {
                        puStack_6e8 = (undefined *)(ulong)(1 < *(ulong *)(puStack_6e8 + 0x18));
                        FUN_102bfb6d4(puStack_6e8,uVar18 + 1,1);
                      }
                      *(ulong *)(puStack_6e8 + 0x10) = uVar18 + 1;
                      *(undefined8 *)(puStack_6e8 + uVar18 * 0x58 + 0x28) = uStack_508;
                      *(undefined **)(puStack_6e8 + uVar18 * 0x58 + 0x20) = puStack_510;
                      *(undefined **)(puStack_6e8 + uVar18 * 0x58 + 0x30) = puStack_6b8;
                      *(undefined8 *)(puStack_6e8 + uVar18 * 0x58 + 0x40) = uStack_568;
                      *(undefined **)(puStack_6e8 + uVar18 * 0x58 + 0x38) = puStack_570;
                      puStack_6e8[uVar18 * 0x58 + 0x68] = (undefined1)uStack_490;
                      *(undefined8 *)(puStack_6e8 + uVar18 * 0x58 + 0x60) = uStack_498;
                      *(undefined8 *)(puStack_6e8 + uVar18 * 0x58 + 0x58) = uStack_4a0;
                      *(undefined8 *)(puStack_6e8 + uVar18 * 0x58 + 0x50) = uStack_4a8;
                      *(undefined8 *)(puStack_6e8 + uVar18 * 0x58 + 0x48) = uStack_4b0;
                      *(undefined **)(puStack_6e8 + uVar18 * 0x58 + 0x70) = puVar8;
                      if (uStack_6a0 == uVar17) break;
                      goto LAB_102bf3cac;
                    }
                    uVar18 = 0;
                    func_0x000102bf8168();
                    if ((uVar18 & 1) != 0) goto LAB_102bf4354;
                    func_0x000102bf0f18(&puStack_330);
                    func_0x000107c6142c(puStack_6b8);
                  } while (uStack_6a0 != uVar17);
                }
                puVar8 = puStack_340;
                uStack_6b0 = uStack_6b0 + 1;
                if (*(long *)(puStack_6e8 + 0x10) != 0) {
LAB_102bf4588:
                  uStack_e8 = uStack_388;
                  puStack_f0 = puStack_390;
                  uStack_d8 = uStack_370;
                  puStack_e0 = puStack_378;
                  uStack_4a8 = uStack_360;
                  uStack_4b0 = uStack_368;
                  uStack_498 = uStack_350;
                  uStack_4a0 = uStack_358;
                  uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_348);
                  puStack_f8 = puStack_340;
                  func_0x000100402194(&puStack_f0,&puStack_510);
                  FUN_102bf7b80(&puStack_e0,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
                  FUN_102bf7b80(&puStack_f8,&puStack_510,0x112efe110,&UNK_10db30950);
                  func_0x000102bf0f18(&puStack_390);
                  puVar8 = puStack_f8;
                  uStack_508 = uStack_e8;
                  puStack_510 = puStack_f0;
                  uStack_568 = uStack_d8;
                  puStack_570 = puStack_e0;
                  puVar7 = puStack_740;
                  func_0x000107c61558();
                  if (((ulong)puVar7 & 1) == 0) {
                    plVar1 = (long *)(puStack_740 + 0x10);
                    puStack_740 = (undefined *)0x0;
                    FUN_102bfb6d4(0,*plVar1 + 1,1);
                  }
                  uVar17 = *(ulong *)(puStack_740 + 0x10);
                  if (*(ulong *)(puStack_740 + 0x18) >> 1 <= uVar17) {
                    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puStack_740 + 0x18));
                    FUN_102bfb6d4(puVar7,uVar17 + 1,1,puStack_740);
                    puStack_740 = puVar7;
                  }
                  *(ulong *)(puStack_740 + 0x10) = uVar17 + 1;
                  *(undefined8 *)(puStack_740 + uVar17 * 0x58 + 0x28) = uStack_508;
                  *(undefined **)(puStack_740 + uVar17 * 0x58 + 0x20) = puStack_510;
                  *(undefined **)(puStack_740 + uVar17 * 0x58 + 0x30) = puStack_6e8;
                  *(undefined8 *)(puStack_740 + uVar17 * 0x58 + 0x40) = uStack_568;
                  *(undefined **)(puStack_740 + uVar17 * 0x58 + 0x38) = puStack_570;
                  puStack_740[uVar17 * 0x58 + 0x68] = (undefined1)uStack_490;
                  *(undefined8 *)(puStack_740 + uVar17 * 0x58 + 0x60) = uStack_498;
                  *(undefined8 *)(puStack_740 + uVar17 * 0x58 + 0x58) = uStack_4a0;
                  *(undefined8 *)(puStack_740 + uVar17 * 0x58 + 0x50) = uStack_4a8;
                  *(undefined8 *)(puStack_740 + uVar17 * 0x58 + 0x48) = uStack_4b0;
                  *(undefined **)(puStack_740 + uVar17 * 0x58 + 0x70) = puVar8;
                  if (uStack_6b0 == uVar22) break;
                  goto LAB_102bf3c3c;
                }
                if (puStack_340 != (undefined *)0x0) {
                  lVar14 = *(long *)(puStack_340 + 0x10);
                  func_0x000107c61434(puStack_340);
                  if (lVar14 != 0) {
                    uVar17 = 0;
                    func_0x000100029284(0x656c626170706174);
                    if ((uVar17 & 1) != 0) {
LAB_102bf457c:
                      func_0x000107c6142c(puVar8);
                      goto LAB_102bf4588;
                    }
                    if (*(long *)(puVar8 + 0x10) != 0) {
                      uVar17 = 0;
                      func_0x000100029284(0x656c6269736976);
                      if ((uVar17 & 1) != 0) goto LAB_102bf457c;
                      if (*(long *)(puVar8 + 0x10) != 0) {
                        uVar17 = 0xe900000000000079;
                        func_0x000100029284(0x4264657265766f63);
                        if ((uVar17 & 1) != 0) goto LAB_102bf457c;
                      }
                    }
                  }
                  func_0x000107c6142c(puVar8);
                  uVar17 = 0;
                  func_0x000102bf7d9c();
                  if ((uVar17 & 1) != 0) goto LAB_102bf4588;
                }
                func_0x000107c6142c(puStack_6e8);
                func_0x000102bf0f18(&puStack_390);
              } while (uStack_6b0 != uVar22);
            }
            uVar23 = uVar23 + 1;
            if (*(long *)(puStack_740 + 0x10) != 0) {
LAB_102bf4728:
              uStack_b8 = uStack_3e8;
              puStack_c0 = puStack_3f0;
              uStack_a8 = uStack_3d0;
              puStack_b0 = puStack_3d8;
              uStack_4a8 = uStack_3c0;
              uStack_4b0 = uStack_3c8;
              uStack_498 = uStack_3b0;
              uStack_4a0 = uStack_3b8;
              uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_3a8);
              puStack_c8 = puStack_3a0;
              func_0x000100402194(&puStack_c0,&puStack_510);
              FUN_102bf7b80(&puStack_b0,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
              FUN_102bf7b80(&puStack_c8,&puStack_510,0x112efe110,&UNK_10db30950);
              func_0x000102bf0f18(&puStack_3f0);
              puVar8 = puStack_c8;
              uStack_508 = uStack_b8;
              puStack_510 = puStack_c0;
              uStack_568 = uStack_a8;
              puStack_570 = puStack_b0;
              puVar7 = puStack_748;
              func_0x000107c61558();
              if (((ulong)puVar7 & 1) == 0) {
                plVar1 = (long *)(puStack_748 + 0x10);
                puStack_748 = (undefined *)0x0;
                FUN_102bfb6d4(0,*plVar1 + 1,1);
              }
              uVar22 = *(ulong *)(puStack_748 + 0x10);
              if (*(ulong *)(puStack_748 + 0x18) >> 1 <= uVar22) {
                puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puStack_748 + 0x18));
                FUN_102bfb6d4(puVar7,uVar22 + 1,1,puStack_748);
                puStack_748 = puVar7;
              }
              *(ulong *)(puStack_748 + 0x10) = uVar22 + 1;
              *(undefined8 *)(puStack_748 + uVar22 * 0x58 + 0x28) = uStack_508;
              *(undefined **)(puStack_748 + uVar22 * 0x58 + 0x20) = puStack_510;
              *(undefined **)(puStack_748 + uVar22 * 0x58 + 0x30) = puStack_740;
              *(undefined8 *)(puStack_748 + uVar22 * 0x58 + 0x40) = uStack_568;
              *(undefined **)(puStack_748 + uVar22 * 0x58 + 0x38) = puStack_570;
              puStack_748[uVar22 * 0x58 + 0x68] = (undefined1)uStack_490;
              *(undefined8 *)(puStack_748 + uVar22 * 0x58 + 0x60) = uStack_498;
              *(undefined8 *)(puStack_748 + uVar22 * 0x58 + 0x58) = uStack_4a0;
              *(undefined8 *)(puStack_748 + uVar22 * 0x58 + 0x50) = uStack_4a8;
              *(undefined8 *)(puStack_748 + uVar22 * 0x58 + 0x48) = uStack_4b0;
              *(undefined **)(puStack_748 + uVar22 * 0x58 + 0x70) = puVar8;
              if (uVar23 == uVar21) break;
              goto LAB_102bf3bcc;
            }
            uVar22 = 0;
            func_0x000102bf8168();
            if ((uVar22 & 1) != 0) goto LAB_102bf4728;
            func_0x000102bf0f18(&puStack_3f0);
            func_0x000107c6142c(puStack_740);
          } while (uVar23 != uVar21);
        }
        uVar16 = uVar16 + 1;
        if (*(long *)(puStack_748 + 0x10) != 0) goto LAB_102bf48c8;
        uVar21 = 0;
        func_0x000102bf8168();
        if ((uVar21 & 1) != 0) goto LAB_102bf48c8;
        func_0x000102bf0f18(&puStack_450);
        func_0x000107c6142c(puStack_748);
        if (uVar16 == uVar11) break;
      } while( true );
    }
LAB_102bf6888:
    lVar20 = *(long *)(puVar6 + 0x10);
    if (lVar20 == 0) {
      func_0x000107c6142c(puVar6);
      puStack_6f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_570 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_102bf7b1c(lVar20);
      lVar15 = 0x20;
      puStack_6f8 = puStack_570;
      do {
        puVar12 = (undefined8 *)(puVar6 + lVar15);
        uStack_4a8 = puVar12[1];
        uStack_4b0 = *puVar12;
        uStack_498 = puVar12[3];
        uStack_4a0 = puVar12[2];
        uStack_488 = puVar12[5];
        uStack_490 = puVar12[4];
        uStack_478 = puVar12[7];
        uStack_480 = puVar12[6];
        uStack_468 = puVar12[9];
        uStack_470 = puVar12[8];
        uStack_460 = puVar12[10];
        FUN_102bf0edc(&uStack_4b0,&puStack_510);
        FUN_102bf71f4(&puStack_5d0,&uStack_4b0,param_3);
        func_0x000102bf0f18(&uStack_4b0);
        puVar8 = puStack_6f8;
        func_0x000107c61558();
        if (((ulong)puVar8 & 1) == 0) {
          FUN_102bf7c5c(0,*(long *)(puStack_6f8 + 0x10) + 1,1);
          puStack_6f8 = puStack_570;
        }
        uVar11 = *(ulong *)(puStack_6f8 + 0x10);
        if (*(ulong *)(puStack_6f8 + 0x18) >> 1 <= uVar11) {
          FUN_102bf7c5c(1 < *(ulong *)(puStack_6f8 + 0x18),uVar11 + 1,1);
          puStack_6f8 = puStack_570;
        }
        *(ulong *)(puStack_6f8 + 0x10) = uVar11 + 1;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x28) = uStack_5c8;
        *(undefined **)(puStack_6f8 + uVar11 * 0x58 + 0x20) = puStack_5d0;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x38) = uStack_5b8;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x30) = uStack_5c0;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x70) = uStack_580;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x58) = uStack_598;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x50) = uStack_5a0;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x68) = uStack_588;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x60) = uStack_590;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x48) = uStack_5a8;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x40) = uStack_5b0;
        lVar15 = lVar15 + 0x58;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      func_0x000107c6142c(puVar6);
    }
    lVar20 = *(long *)(puStack_6f8 + 0x10);
    if (lVar20 == 0) {
LAB_102bf6cfc:
      func_0x000107c6142c(puStack_6f8);
      return PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    puStack_5e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_102bf7b1c(lVar20);
    lVar15 = 0x20;
    puVar6 = puStack_5e0;
    do {
      puVar12 = (undefined8 *)(puStack_6f8 + lVar15);
      uStack_508 = puVar12[1];
      puStack_510 = (undefined *)*puVar12;
      uStack_4f8 = puVar12[3];
      uStack_500 = puVar12[2];
      uStack_4e8 = puVar12[5];
      uStack_4f0 = puVar12[4];
      uStack_4d8 = puVar12[7];
      uStack_4e0 = puVar12[6];
      uStack_4c8 = puVar12[9];
      uStack_4d0 = puVar12[8];
      uStack_4c0 = puVar12[10];
      FUN_102bf0edc(&puStack_510,&puStack_640);
      func_0x000102bf7548(&puStack_570,&puStack_510,param_3);
      func_0x000102bf0f18(&puStack_510);
      puVar8 = puVar6;
      func_0x000107c61558();
      if (((ulong)puVar8 & 1) == 0) {
        FUN_102bf7c5c(0,*(long *)(puVar6 + 0x10) + 1,1);
        puVar6 = puStack_5e0;
      }
      uVar11 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar11) {
        FUN_102bf7c5c(1 < *(ulong *)(puVar6 + 0x18),uVar11 + 1,1);
        puVar6 = puStack_5e0;
      }
      *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x28) = uStack_568;
      *(undefined **)(puVar6 + uVar11 * 0x58 + 0x20) = puStack_570;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x38) = uStack_558;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x30) = uStack_560;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x70) = uStack_520;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x58) = uStack_538;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x50) = uStack_540;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x68) = uStack_528;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x60) = uStack_530;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x48) = uStack_548;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x40) = uStack_550;
      lVar15 = lVar15 + 0x58;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  else {
    uVar11 = *(ulong *)(param_1 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar11 != 0) {
      uVar16 = 0;
LAB_102bf58e0:
      uVar2 = uVar16;
      if (uVar16 <= uVar11) {
        uVar2 = uVar11;
      }
      do {
        if (uVar16 == uVar2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6d68);
          (*pcVar3)();
        }
        puVar12 = (undefined8 *)(param_1 + uVar16 * 0x58 + 0x20);
        uStack_428 = puVar12[5];
        uStack_430 = puVar12[4];
        uStack_418 = puVar12[7];
        uStack_420 = puVar12[6];
        uStack_408 = puVar12[9];
        uStack_410 = puVar12[8];
        puStack_400 = (undefined *)puVar12[10];
        uStack_448 = puVar12[1];
        puStack_450 = (undefined *)*puVar12;
        puStack_438 = (undefined *)puVar12[3];
        lVar20 = puVar12[2];
        uVar21 = *(ulong *)(lVar20 + 0x10);
        lStack_440 = lVar20;
        FUN_102bf0edc(&puStack_450,&uStack_4b0);
        puStack_748 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar21 != 0) {
          uVar23 = 0;
LAB_102bf5954:
          do {
            if (*(ulong *)(lVar20 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6d74);
              (*pcVar3)();
            }
            puVar12 = (undefined8 *)(lVar20 + 0x20 + uVar23 * 0x58);
            uStack_3e8 = puVar12[1];
            puStack_3f0 = (undefined *)*puVar12;
            puStack_3d8 = (undefined *)puVar12[3];
            lVar15 = puVar12[2];
            uStack_3c8 = puVar12[5];
            uStack_3d0 = puVar12[4];
            uStack_3b8 = puVar12[7];
            uStack_3c0 = puVar12[6];
            uStack_3a8 = puVar12[9];
            uStack_3b0 = puVar12[8];
            puStack_3a0 = (undefined *)puVar12[10];
            uVar22 = *(ulong *)(lVar15 + 0x10);
            lStack_3e0 = lVar15;
            FUN_102bf0edc(&puStack_3f0,&uStack_4b0);
            puStack_740 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (uVar22 != 0) {
              uStack_6b0 = 0;
LAB_102bf59c4:
              do {
                if (*(ulong *)(lVar15 + 0x10) <= uStack_6b0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6d5c);
                  (*pcVar3)();
                }
                puVar12 = (undefined8 *)(lVar15 + 0x20 + uStack_6b0 * 0x58);
                uStack_388 = puVar12[1];
                puStack_390 = (undefined *)*puVar12;
                puStack_378 = (undefined *)puVar12[3];
                lVar14 = puVar12[2];
                uStack_368 = puVar12[5];
                uStack_370 = puVar12[4];
                uStack_358 = puVar12[7];
                uStack_360 = puVar12[6];
                uStack_348 = puVar12[9];
                uStack_350 = puVar12[8];
                puStack_340 = (undefined *)puVar12[10];
                uVar17 = *(ulong *)(lVar14 + 0x10);
                lStack_380 = lVar14;
                FUN_102bf0edc(&puStack_390,&uStack_4b0);
                puStack_6e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
                if (uVar17 != 0) {
                  uStack_6a0 = 0;
LAB_102bf5a34:
                  do {
                    if (*(ulong *)(lVar14 + 0x10) <= uStack_6a0) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6d50);
                      (*pcVar3)();
                    }
                    puVar12 = (undefined8 *)(lVar14 + 0x20 + uStack_6a0 * 0x58);
                    uStack_328 = puVar12[1];
                    puStack_330 = (undefined *)*puVar12;
                    puStack_318 = (undefined *)puVar12[3];
                    lVar27 = puVar12[2];
                    uStack_308 = puVar12[5];
                    uStack_310 = puVar12[4];
                    uStack_2f8 = puVar12[7];
                    uStack_300 = puVar12[6];
                    uStack_2e8 = puVar12[9];
                    uStack_2f0 = puVar12[8];
                    puStack_2e0 = (undefined *)puVar12[10];
                    uVar18 = *(ulong *)(lVar27 + 0x10);
                    lStack_320 = lVar27;
                    FUN_102bf0edc(&puStack_330,&uStack_4b0);
                    if (uVar18 == 0) {
                      puStack_6b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
                    }
                    else {
                      uStack_688 = 0;
                      puStack_6b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_102bf5aac:
                      do {
                        if (*(ulong *)(lVar27 + 0x10) <= uStack_688) {
                    /* WARNING: Does not return */
                          pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6d44);
                          (*pcVar3)();
                        }
                        puVar12 = (undefined8 *)(lVar27 + 0x20 + uStack_688 * 0x58);
                        uStack_2c8 = puVar12[1];
                        puStack_2d0 = (undefined *)*puVar12;
                        puStack_2b8 = (undefined *)puVar12[3];
                        lVar28 = puVar12[2];
                        uStack_2a8 = puVar12[5];
                        uStack_2b0 = puVar12[4];
                        uStack_298 = puVar12[7];
                        uStack_2a0 = puVar12[6];
                        uStack_288 = puVar12[9];
                        uStack_290 = puVar12[8];
                        puStack_280 = (undefined *)puVar12[10];
                        uVar19 = *(ulong *)(lVar28 + 0x10);
                        lStack_2c0 = lVar28;
                        FUN_102bf0edc(&puStack_2d0,&uStack_4b0);
                        if (uVar19 == 0) {
                          puStack_680 = PTR___swiftEmptyArrayStorage_11034f1c8;
                        }
                        else {
                          uVar24 = 0;
                          puStack_680 = PTR___swiftEmptyArrayStorage_11034f1c8;
                          do {
                            if (*(ulong *)(lVar28 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
                              pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6d38);
                              (*pcVar3)();
                            }
                            puVar12 = (undefined8 *)(lVar28 + 0x20 + uVar24 * 0x58);
                            uStack_268 = puVar12[1];
                            puStack_270 = (undefined *)*puVar12;
                            puStack_258 = (undefined *)puVar12[3];
                            lVar29 = puVar12[2];
                            uStack_248 = puVar12[5];
                            uStack_250 = puVar12[4];
                            uStack_238 = puVar12[7];
                            uStack_240 = puVar12[6];
                            uStack_228 = puVar12[9];
                            uStack_230 = puVar12[8];
                            puStack_220 = (undefined *)puVar12[10];
                            uVar13 = *(ulong *)(lVar29 + 0x10);
                            lStack_260 = lVar29;
                            FUN_102bf0edc(&puStack_270,&uStack_4b0);
                            puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
                            if (uVar13 != 0) {
                              uVar26 = 0;
                              do {
                                puVar12 = (undefined8 *)(lVar29 + 0x20 + uVar26 * 0x58);
                                uVar25 = uVar26;
                                while( true ) {
                                  if (*(ulong *)(lVar29 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
                                    pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf6790);
                                    (*pcVar3)();
                                  }
                                  uStack_208 = puVar12[1];
                                  puStack_210 = (undefined *)*puVar12;
                                  puStack_1f8 = (undefined *)puVar12[3];
                                  lVar30 = puVar12[2];
                                  uStack_1e8 = puVar12[5];
                                  uStack_1f0 = puVar12[4];
                                  uStack_1d8 = puVar12[7];
                                  uStack_1e0 = puVar12[6];
                                  uStack_1c8 = puVar12[9];
                                  uStack_1d0 = puVar12[8];
                                  puStack_1c0 = (undefined *)puVar12[10];
                                  uVar26 = uVar25 + 1;
                                  lStack_200 = lVar30;
                                  FUN_102bf0edc(&puStack_210,&uStack_4b0);
                                  lVar9 = lVar30;
                                  func_0x000107c61434();
                                  FUN_102bf7018();
                                  func_0x000107c6142c(lVar30);
                                  if (*(long *)(lVar9 + 0x10) != 0) break;
                                  uVar10 = 0;
                                  func_0x000102bf8168();
                                  if ((uVar10 & 1) != 0) break;
                                  func_0x000102bf0f18(&puStack_210);
                                  func_0x000107c6142c(lVar9);
                                  puVar12 = puVar12 + 0xb;
                                  uVar25 = uVar26;
                                  if (uVar13 == uVar26) goto LAB_102bf5d78;
                                }
                                uStack_1a8 = uStack_208;
                                puStack_1b0 = puStack_210;
                                uStack_198 = uStack_1f0;
                                puStack_1a0 = puStack_1f8;
                                uStack_4a8 = uStack_1e0;
                                uStack_4b0 = uStack_1e8;
                                uStack_498 = uStack_1d0;
                                uStack_4a0 = uStack_1d8;
                                uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_1c8);
                                puStack_190 = puStack_1c0;
                                func_0x000100402194(&puStack_1b0,&puStack_510);
                                FUN_102bf7b80(&puStack_1a0,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
                                FUN_102bf7b80(&puStack_190,&puStack_510,0x112efe110,&UNK_10db30950);
                                func_0x000102bf0f18(&puStack_210);
                                puVar7 = puStack_190;
                                uStack_508 = uStack_1a8;
                                puStack_510 = puStack_1b0;
                                uStack_568 = uStack_198;
                                puStack_570 = puStack_1a0;
                                puVar5 = puVar8;
                                func_0x000107c61558();
                                puVar4 = puVar8;
                                if (((ulong)puVar5 & 1) == 0) {
                                  puVar4 = (undefined *)0x0;
                                  FUN_102bfb6d4(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
                                }
                                uVar10 = *(ulong *)(puVar4 + 0x10);
                                puVar8 = puVar4;
                                if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar10) {
                                  puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
                                  FUN_102bfb6d4(puVar8,uVar10 + 1,1,puVar4);
                                }
                                *(ulong *)(puVar8 + 0x10) = uVar10 + 1;
                                *(undefined8 *)(puVar8 + uVar10 * 0x58 + 0x28) = uStack_508;
                                *(undefined **)(puVar8 + uVar10 * 0x58 + 0x20) = puStack_510;
                                *(long *)(puVar8 + uVar10 * 0x58 + 0x30) = lVar9;
                                *(undefined8 *)(puVar8 + uVar10 * 0x58 + 0x40) = uStack_568;
                                *(undefined **)(puVar8 + uVar10 * 0x58 + 0x38) = puStack_570;
                                puVar8[uVar10 * 0x58 + 0x68] = (undefined1)uStack_490;
                                *(undefined8 *)(puVar8 + uVar10 * 0x58 + 0x60) = uStack_498;
                                *(undefined8 *)(puVar8 + uVar10 * 0x58 + 0x58) = uStack_4a0;
                                *(undefined8 *)(puVar8 + uVar10 * 0x58 + 0x50) = uStack_4a8;
                                *(undefined8 *)(puVar8 + uVar10 * 0x58 + 0x48) = uStack_4b0;
                                *(undefined **)(puVar8 + uVar10 * 0x58 + 0x70) = puVar7;
                              } while (uVar13 - 1 != uVar25);
                            }
LAB_102bf5d78:
                            uVar24 = uVar24 + 1;
                            if (*(long *)(puVar8 + 0x10) == 0) {
                              uVar13 = 0;
                              func_0x000102bf8168();
                              if ((uVar13 & 1) != 0) goto LAB_102bf5db8;
                              func_0x000102bf0f18(&puStack_270);
                              func_0x000107c6142c(puVar8);
                            }
                            else {
LAB_102bf5db8:
                              uStack_178 = uStack_268;
                              puStack_180 = puStack_270;
                              uStack_168 = uStack_250;
                              puStack_170 = puStack_258;
                              uStack_4a8 = uStack_240;
                              uStack_4b0 = uStack_248;
                              uStack_498 = uStack_230;
                              uStack_4a0 = uStack_238;
                              uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_228);
                              puStack_188 = puStack_220;
                              func_0x000100402194(&puStack_180,&puStack_510);
                              FUN_102bf7b80(&puStack_170,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
                              FUN_102bf7b80(&puStack_188,&puStack_510,0x112efe110,&UNK_10db30950);
                              func_0x000102bf0f18(&puStack_270);
                              puVar7 = puStack_188;
                              uStack_508 = uStack_178;
                              puStack_510 = puStack_180;
                              uStack_568 = uStack_168;
                              puStack_570 = puStack_170;
                              puVar5 = puStack_680;
                              func_0x000107c61558();
                              if (((ulong)puVar5 & 1) == 0) {
                                plVar1 = (long *)(puStack_680 + 0x10);
                                puStack_680 = (undefined *)0x0;
                                FUN_102bfb6d4(0,*plVar1 + 1,1);
                              }
                              uVar13 = *(ulong *)(puStack_680 + 0x10);
                              if (*(ulong *)(puStack_680 + 0x18) >> 1 <= uVar13) {
                                puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puStack_680 + 0x18));
                                FUN_102bfb6d4(puVar5,uVar13 + 1,1,puStack_680);
                                puStack_680 = puVar5;
                              }
                              *(ulong *)(puStack_680 + 0x10) = uVar13 + 1;
                              *(undefined8 *)(puStack_680 + uVar13 * 0x58 + 0x28) = uStack_508;
                              *(undefined **)(puStack_680 + uVar13 * 0x58 + 0x20) = puStack_510;
                              *(undefined **)(puStack_680 + uVar13 * 0x58 + 0x30) = puVar8;
                              *(undefined8 *)(puStack_680 + uVar13 * 0x58 + 0x40) = uStack_568;
                              *(undefined **)(puStack_680 + uVar13 * 0x58 + 0x38) = puStack_570;
                              puStack_680[uVar13 * 0x58 + 0x68] = (undefined1)uStack_490;
                              *(undefined8 *)(puStack_680 + uVar13 * 0x58 + 0x60) = uStack_498;
                              *(undefined8 *)(puStack_680 + uVar13 * 0x58 + 0x58) = uStack_4a0;
                              *(undefined8 *)(puStack_680 + uVar13 * 0x58 + 0x50) = uStack_4a8;
                              *(undefined8 *)(puStack_680 + uVar13 * 0x58 + 0x48) = uStack_4b0;
                              *(undefined **)(puStack_680 + uVar13 * 0x58 + 0x70) = puVar7;
                            }
                          } while (uVar24 != uVar19);
                        }
                        uStack_688 = uStack_688 + 1;
                        if (*(long *)(puStack_680 + 0x10) != 0) {
LAB_102bf5f3c:
                          uStack_148 = uStack_2c8;
                          puStack_150 = puStack_2d0;
                          uStack_138 = uStack_2b0;
                          puStack_140 = puStack_2b8;
                          uStack_4a8 = uStack_2a0;
                          uStack_4b0 = uStack_2a8;
                          uStack_498 = uStack_290;
                          uStack_4a0 = uStack_298;
                          uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_288);
                          puStack_158 = puStack_280;
                          func_0x000100402194(&puStack_150,&puStack_510);
                          FUN_102bf7b80(&puStack_140,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
                          FUN_102bf7b80(&puStack_158,&puStack_510,0x112efe110,&UNK_10db30950);
                          func_0x000102bf0f18(&puStack_2d0);
                          puVar8 = puStack_158;
                          uStack_508 = uStack_148;
                          puStack_510 = puStack_150;
                          uStack_568 = uStack_138;
                          puStack_570 = puStack_140;
                          puVar7 = puStack_6b8;
                          func_0x000107c61558();
                          if (((ulong)puVar7 & 1) == 0) {
                            plVar1 = (long *)(puStack_6b8 + 0x10);
                            puStack_6b8 = (undefined *)0x0;
                            FUN_102bfb6d4(0,*plVar1 + 1,1);
                          }
                          uVar19 = *(ulong *)(puStack_6b8 + 0x10);
                          if (*(ulong *)(puStack_6b8 + 0x18) >> 1 <= uVar19) {
                            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puStack_6b8 + 0x18));
                            FUN_102bfb6d4(puVar7,uVar19 + 1,1,puStack_6b8);
                            puStack_6b8 = puVar7;
                          }
                          *(ulong *)(puStack_6b8 + 0x10) = uVar19 + 1;
                          *(undefined8 *)(puStack_6b8 + uVar19 * 0x58 + 0x28) = uStack_508;
                          *(undefined **)(puStack_6b8 + uVar19 * 0x58 + 0x20) = puStack_510;
                          *(undefined **)(puStack_6b8 + uVar19 * 0x58 + 0x30) = puStack_680;
                          *(undefined8 *)(puStack_6b8 + uVar19 * 0x58 + 0x40) = uStack_568;
                          *(undefined **)(puStack_6b8 + uVar19 * 0x58 + 0x38) = puStack_570;
                          puStack_6b8[uVar19 * 0x58 + 0x68] = (undefined1)uStack_490;
                          *(undefined8 *)(puStack_6b8 + uVar19 * 0x58 + 0x60) = uStack_498;
                          *(undefined8 *)(puStack_6b8 + uVar19 * 0x58 + 0x58) = uStack_4a0;
                          *(undefined8 *)(puStack_6b8 + uVar19 * 0x58 + 0x50) = uStack_4a8;
                          *(undefined8 *)(puStack_6b8 + uVar19 * 0x58 + 0x48) = uStack_4b0;
                          *(undefined **)(puStack_6b8 + uVar19 * 0x58 + 0x70) = puVar8;
                          if (uStack_688 == uVar18) break;
                          goto LAB_102bf5aac;
                        }
                        uVar19 = 0;
                        func_0x000102bf8168();
                        if ((uVar19 & 1) != 0) goto LAB_102bf5f3c;
                        func_0x000102bf0f18(&puStack_2d0);
                        func_0x000107c6142c(puStack_680);
                      } while (uStack_688 != uVar18);
                    }
                    uStack_6a0 = uStack_6a0 + 1;
                    if (*(long *)(puStack_6b8 + 0x10) != 0) {
LAB_102bf60dc:
                      uStack_118 = uStack_328;
                      puStack_120 = puStack_330;
                      uStack_108 = uStack_310;
                      puStack_110 = puStack_318;
                      uStack_4a8 = uStack_300;
                      uStack_4b0 = uStack_308;
                      uStack_498 = uStack_2f0;
                      uStack_4a0 = uStack_2f8;
                      uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_2e8);
                      puStack_128 = puStack_2e0;
                      func_0x000100402194(&puStack_120,&puStack_510);
                      FUN_102bf7b80(&puStack_110,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
                      FUN_102bf7b80(&puStack_128,&puStack_510,0x112efe110,&UNK_10db30950);
                      func_0x000102bf0f18(&puStack_330);
                      puVar8 = puStack_128;
                      uStack_508 = uStack_118;
                      puStack_510 = puStack_120;
                      uStack_568 = uStack_108;
                      puStack_570 = puStack_110;
                      puVar7 = puStack_6e8;
                      func_0x000107c61558();
                      if (((ulong)puVar7 & 1) == 0) {
                        plVar1 = (long *)(puStack_6e8 + 0x10);
                        puStack_6e8 = (undefined *)0x0;
                        FUN_102bfb6d4(0,*plVar1 + 1,1);
                      }
                      uVar18 = *(ulong *)(puStack_6e8 + 0x10);
                      if (*(ulong *)(puStack_6e8 + 0x18) >> 1 <= uVar18) {
                        puStack_6e8 = (undefined *)(ulong)(1 < *(ulong *)(puStack_6e8 + 0x18));
                        FUN_102bfb6d4(puStack_6e8,uVar18 + 1,1);
                      }
                      *(ulong *)(puStack_6e8 + 0x10) = uVar18 + 1;
                      *(undefined8 *)(puStack_6e8 + uVar18 * 0x58 + 0x28) = uStack_508;
                      *(undefined **)(puStack_6e8 + uVar18 * 0x58 + 0x20) = puStack_510;
                      *(undefined **)(puStack_6e8 + uVar18 * 0x58 + 0x30) = puStack_6b8;
                      *(undefined8 *)(puStack_6e8 + uVar18 * 0x58 + 0x40) = uStack_568;
                      *(undefined **)(puStack_6e8 + uVar18 * 0x58 + 0x38) = puStack_570;
                      puStack_6e8[uVar18 * 0x58 + 0x68] = (undefined1)uStack_490;
                      *(undefined8 *)(puStack_6e8 + uVar18 * 0x58 + 0x60) = uStack_498;
                      *(undefined8 *)(puStack_6e8 + uVar18 * 0x58 + 0x58) = uStack_4a0;
                      *(undefined8 *)(puStack_6e8 + uVar18 * 0x58 + 0x50) = uStack_4a8;
                      *(undefined8 *)(puStack_6e8 + uVar18 * 0x58 + 0x48) = uStack_4b0;
                      *(undefined **)(puStack_6e8 + uVar18 * 0x58 + 0x70) = puVar8;
                      if (uStack_6a0 == uVar17) break;
                      goto LAB_102bf5a34;
                    }
                    uVar18 = 0;
                    func_0x000102bf8168();
                    if ((uVar18 & 1) != 0) goto LAB_102bf60dc;
                    func_0x000102bf0f18(&puStack_330);
                    func_0x000107c6142c(puStack_6b8);
                  } while (uStack_6a0 != uVar17);
                }
                puVar8 = puStack_340;
                uStack_6b0 = uStack_6b0 + 1;
                if (*(long *)(puStack_6e8 + 0x10) != 0) {
LAB_102bf6310:
                  uStack_e8 = uStack_388;
                  puStack_f0 = puStack_390;
                  uStack_d8 = uStack_370;
                  puStack_e0 = puStack_378;
                  uStack_4a8 = uStack_360;
                  uStack_4b0 = uStack_368;
                  uStack_498 = uStack_350;
                  uStack_4a0 = uStack_358;
                  uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_348);
                  puStack_f8 = puStack_340;
                  func_0x000100402194(&puStack_f0,&puStack_510);
                  FUN_102bf7b80(&puStack_e0,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
                  FUN_102bf7b80(&puStack_f8,&puStack_510,0x112efe110,&UNK_10db30950);
                  func_0x000102bf0f18(&puStack_390);
                  puVar8 = puStack_f8;
                  uStack_508 = uStack_e8;
                  puStack_510 = puStack_f0;
                  uStack_568 = uStack_d8;
                  puStack_570 = puStack_e0;
                  puVar7 = puStack_740;
                  func_0x000107c61558();
                  if (((ulong)puVar7 & 1) == 0) {
                    plVar1 = (long *)(puStack_740 + 0x10);
                    puStack_740 = (undefined *)0x0;
                    FUN_102bfb6d4(0,*plVar1 + 1,1);
                  }
                  uVar17 = *(ulong *)(puStack_740 + 0x10);
                  if (*(ulong *)(puStack_740 + 0x18) >> 1 <= uVar17) {
                    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puStack_740 + 0x18));
                    FUN_102bfb6d4(puVar7,uVar17 + 1,1,puStack_740);
                    puStack_740 = puVar7;
                  }
                  *(ulong *)(puStack_740 + 0x10) = uVar17 + 1;
                  *(undefined8 *)(puStack_740 + uVar17 * 0x58 + 0x28) = uStack_508;
                  *(undefined **)(puStack_740 + uVar17 * 0x58 + 0x20) = puStack_510;
                  *(undefined **)(puStack_740 + uVar17 * 0x58 + 0x30) = puStack_6e8;
                  *(undefined8 *)(puStack_740 + uVar17 * 0x58 + 0x40) = uStack_568;
                  *(undefined **)(puStack_740 + uVar17 * 0x58 + 0x38) = puStack_570;
                  puStack_740[uVar17 * 0x58 + 0x68] = (undefined1)uStack_490;
                  *(undefined8 *)(puStack_740 + uVar17 * 0x58 + 0x60) = uStack_498;
                  *(undefined8 *)(puStack_740 + uVar17 * 0x58 + 0x58) = uStack_4a0;
                  *(undefined8 *)(puStack_740 + uVar17 * 0x58 + 0x50) = uStack_4a8;
                  *(undefined8 *)(puStack_740 + uVar17 * 0x58 + 0x48) = uStack_4b0;
                  *(undefined **)(puStack_740 + uVar17 * 0x58 + 0x70) = puVar8;
                  if (uStack_6b0 == uVar22) break;
                  goto LAB_102bf59c4;
                }
                if (puStack_340 != (undefined *)0x0) {
                  lVar14 = *(long *)(puStack_340 + 0x10);
                  func_0x000107c61434(puStack_340);
                  if (lVar14 != 0) {
                    uVar17 = 0;
                    func_0x000100029284(0x656c626170706174);
                    if ((uVar17 & 1) != 0) {
LAB_102bf6304:
                      func_0x000107c6142c(puVar8);
                      goto LAB_102bf6310;
                    }
                    if (*(long *)(puVar8 + 0x10) != 0) {
                      uVar17 = 0;
                      func_0x000100029284(0x656c6269736976);
                      if ((uVar17 & 1) != 0) goto LAB_102bf6304;
                      if (*(long *)(puVar8 + 0x10) != 0) {
                        uVar17 = 0xe900000000000079;
                        func_0x000100029284(0x4264657265766f63);
                        if ((uVar17 & 1) != 0) goto LAB_102bf6304;
                      }
                    }
                  }
                  func_0x000107c6142c(puVar8);
                  uVar17 = 0;
                  func_0x000102bf7d9c();
                  if ((uVar17 & 1) != 0) goto LAB_102bf6310;
                }
                func_0x000107c6142c(puStack_6e8);
                func_0x000102bf0f18(&puStack_390);
              } while (uStack_6b0 != uVar22);
            }
            uVar23 = uVar23 + 1;
            if (*(long *)(puStack_740 + 0x10) != 0) {
LAB_102bf64b0:
              uStack_b8 = uStack_3e8;
              puStack_c0 = puStack_3f0;
              uStack_a8 = uStack_3d0;
              puStack_b0 = puStack_3d8;
              uStack_4a8 = uStack_3c0;
              uStack_4b0 = uStack_3c8;
              uStack_498 = uStack_3b0;
              uStack_4a0 = uStack_3b8;
              uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_3a8);
              puStack_c8 = puStack_3a0;
              func_0x000100402194(&puStack_c0,&puStack_510);
              FUN_102bf7b80(&puStack_b0,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
              FUN_102bf7b80(&puStack_c8,&puStack_510,0x112efe110,&UNK_10db30950);
              func_0x000102bf0f18(&puStack_3f0);
              puVar8 = puStack_c8;
              uStack_508 = uStack_b8;
              puStack_510 = puStack_c0;
              uStack_568 = uStack_a8;
              puStack_570 = puStack_b0;
              puVar7 = puStack_748;
              func_0x000107c61558();
              if (((ulong)puVar7 & 1) == 0) {
                plVar1 = (long *)(puStack_748 + 0x10);
                puStack_748 = (undefined *)0x0;
                FUN_102bfb6d4(0,*plVar1 + 1,1);
              }
              uVar22 = *(ulong *)(puStack_748 + 0x10);
              if (*(ulong *)(puStack_748 + 0x18) >> 1 <= uVar22) {
                puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puStack_748 + 0x18));
                FUN_102bfb6d4(puVar7,uVar22 + 1,1,puStack_748);
                puStack_748 = puVar7;
              }
              *(ulong *)(puStack_748 + 0x10) = uVar22 + 1;
              *(undefined8 *)(puStack_748 + uVar22 * 0x58 + 0x28) = uStack_508;
              *(undefined **)(puStack_748 + uVar22 * 0x58 + 0x20) = puStack_510;
              *(undefined **)(puStack_748 + uVar22 * 0x58 + 0x30) = puStack_740;
              *(undefined8 *)(puStack_748 + uVar22 * 0x58 + 0x40) = uStack_568;
              *(undefined **)(puStack_748 + uVar22 * 0x58 + 0x38) = puStack_570;
              puStack_748[uVar22 * 0x58 + 0x68] = (undefined1)uStack_490;
              *(undefined8 *)(puStack_748 + uVar22 * 0x58 + 0x60) = uStack_498;
              *(undefined8 *)(puStack_748 + uVar22 * 0x58 + 0x58) = uStack_4a0;
              *(undefined8 *)(puStack_748 + uVar22 * 0x58 + 0x50) = uStack_4a8;
              *(undefined8 *)(puStack_748 + uVar22 * 0x58 + 0x48) = uStack_4b0;
              *(undefined **)(puStack_748 + uVar22 * 0x58 + 0x70) = puVar8;
              if (uVar23 == uVar21) break;
              goto LAB_102bf5954;
            }
            uVar22 = 0;
            func_0x000102bf8168();
            if ((uVar22 & 1) != 0) goto LAB_102bf64b0;
            func_0x000102bf0f18(&puStack_3f0);
            func_0x000107c6142c(puStack_740);
          } while (uVar23 != uVar21);
        }
        uVar16 = uVar16 + 1;
        if (*(long *)(puStack_748 + 0x10) != 0) goto LAB_102bf6650;
        uVar21 = 0;
        func_0x000102bf8168();
        if ((uVar21 & 1) != 0) goto LAB_102bf6650;
        func_0x000102bf0f18(&puStack_450);
        func_0x000107c6142c(puStack_748);
        if (uVar16 == uVar11) break;
      } while( true );
    }
LAB_102bf6998:
    lVar20 = *(long *)(puVar6 + 0x10);
    if (lVar20 == 0) {
      func_0x000107c6142c(puVar6);
      puStack_6f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_570 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_102bf7b1c(lVar20);
      lVar15 = 0x20;
      puStack_6f8 = puStack_570;
      do {
        puVar12 = (undefined8 *)(puVar6 + lVar15);
        uStack_4a8 = puVar12[1];
        uStack_4b0 = *puVar12;
        uStack_498 = puVar12[3];
        uStack_4a0 = puVar12[2];
        uStack_488 = puVar12[5];
        uStack_490 = puVar12[4];
        uStack_478 = puVar12[7];
        uStack_480 = puVar12[6];
        uStack_468 = puVar12[9];
        uStack_470 = puVar12[8];
        uStack_460 = puVar12[10];
        FUN_102bf0edc(&uStack_4b0,&puStack_510);
        FUN_102bf71f4(&puStack_5d0,&uStack_4b0,param_3);
        func_0x000102bf0f18(&uStack_4b0);
        puVar8 = puStack_6f8;
        func_0x000107c61558();
        if (((ulong)puVar8 & 1) == 0) {
          FUN_102bf7c5c(0,*(long *)(puStack_6f8 + 0x10) + 1,1);
          puStack_6f8 = puStack_570;
        }
        uVar11 = *(ulong *)(puStack_6f8 + 0x10);
        if (*(ulong *)(puStack_6f8 + 0x18) >> 1 <= uVar11) {
          FUN_102bf7c5c(1 < *(ulong *)(puStack_6f8 + 0x18),uVar11 + 1,1);
          puStack_6f8 = puStack_570;
        }
        *(ulong *)(puStack_6f8 + 0x10) = uVar11 + 1;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x28) = uStack_5c8;
        *(undefined **)(puStack_6f8 + uVar11 * 0x58 + 0x20) = puStack_5d0;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x38) = uStack_5b8;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x30) = uStack_5c0;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x70) = uStack_580;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x58) = uStack_598;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x50) = uStack_5a0;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x68) = uStack_588;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x60) = uStack_590;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x48) = uStack_5a8;
        *(undefined8 *)(puStack_6f8 + uVar11 * 0x58 + 0x40) = uStack_5b0;
        lVar15 = lVar15 + 0x58;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      func_0x000107c6142c(puVar6);
    }
    lVar20 = *(long *)(puStack_6f8 + 0x10);
    if (lVar20 == 0) goto LAB_102bf6cfc;
    puStack_5e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_102bf7b1c(lVar20);
    lVar15 = 0x20;
    puVar6 = puStack_5e0;
    do {
      puVar12 = (undefined8 *)(puStack_6f8 + lVar15);
      uStack_508 = puVar12[1];
      puStack_510 = (undefined *)*puVar12;
      uStack_4f8 = puVar12[3];
      uStack_500 = puVar12[2];
      uStack_4e8 = puVar12[5];
      uStack_4f0 = puVar12[4];
      uStack_4d8 = puVar12[7];
      uStack_4e0 = puVar12[6];
      uStack_4c8 = puVar12[9];
      uStack_4d0 = puVar12[8];
      uStack_4c0 = puVar12[10];
      FUN_102bf0edc(&puStack_510,&puStack_640);
      FUN_102bf7840(&puStack_570,&puStack_510,param_3);
      func_0x000102bf0f18(&puStack_510);
      puVar8 = puVar6;
      func_0x000107c61558();
      if (((ulong)puVar8 & 1) == 0) {
        FUN_102bf7c5c(0,*(long *)(puVar6 + 0x10) + 1,1);
        puVar6 = puStack_5e0;
      }
      uVar11 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar11) {
        FUN_102bf7c5c(1 < *(ulong *)(puVar6 + 0x18),uVar11 + 1,1);
        puVar6 = puStack_5e0;
      }
      *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x28) = uStack_568;
      *(undefined **)(puVar6 + uVar11 * 0x58 + 0x20) = puStack_570;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x38) = uStack_558;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x30) = uStack_560;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x70) = uStack_520;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x58) = uStack_538;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x50) = uStack_540;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x68) = uStack_528;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x60) = uStack_530;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x48) = uStack_548;
      *(undefined8 *)(puVar6 + uVar11 * 0x58 + 0x40) = uStack_550;
      lVar15 = lVar15 + 0x58;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  func_0x000107c6142c(puStack_6f8);
  return puVar6;
LAB_102bf6650:
  uStack_88 = uStack_448;
  puStack_90 = puStack_450;
  uStack_78 = uStack_430;
  puStack_80 = puStack_438;
  uStack_4a8 = uStack_420;
  uStack_4b0 = uStack_428;
  uStack_498 = uStack_410;
  uStack_4a0 = uStack_418;
  uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_408);
  puStack_98 = puStack_400;
  func_0x000100402194(&puStack_90,&puStack_510);
  FUN_102bf7b80(&puStack_80,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
  FUN_102bf7b80(&puStack_98,&puStack_510,0x112efe110,&UNK_10db30950);
  func_0x000102bf0f18(&puStack_450);
  puVar8 = puStack_98;
  uStack_508 = uStack_88;
  puStack_510 = puStack_90;
  uStack_568 = uStack_78;
  puStack_570 = puStack_80;
  puVar7 = puVar6;
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    puVar7 = (undefined *)0x0;
    FUN_102bfb6d4(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
    puVar6 = puVar7;
  }
  uVar2 = *(ulong *)(puVar6 + 0x10);
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_102bfb6d4(puVar6,uVar2 + 1,1);
  }
  *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
  *(undefined8 *)(puVar6 + uVar2 * 0x58 + 0x28) = uStack_508;
  *(undefined **)(puVar6 + uVar2 * 0x58 + 0x20) = puStack_510;
  *(undefined **)(puVar6 + uVar2 * 0x58 + 0x30) = puStack_748;
  *(undefined8 *)(puVar6 + uVar2 * 0x58 + 0x40) = uStack_568;
  *(undefined **)(puVar6 + uVar2 * 0x58 + 0x38) = puStack_570;
  puVar6[uVar2 * 0x58 + 0x68] = (undefined1)uStack_490;
  *(undefined8 *)(puVar6 + uVar2 * 0x58 + 0x60) = uStack_498;
  *(undefined8 *)(puVar6 + uVar2 * 0x58 + 0x58) = uStack_4a0;
  *(undefined8 *)(puVar6 + uVar2 * 0x58 + 0x50) = uStack_4a8;
  *(undefined8 *)(puVar6 + uVar2 * 0x58 + 0x48) = uStack_4b0;
  *(undefined **)(puVar6 + uVar2 * 0x58 + 0x70) = puVar8;
  if (uVar16 == uVar11) goto LAB_102bf6998;
  goto LAB_102bf58e0;
LAB_102bf48c8:
  uStack_88 = uStack_448;
  puStack_90 = puStack_450;
  uStack_78 = uStack_430;
  puStack_80 = puStack_438;
  uStack_4a8 = uStack_420;
  uStack_4b0 = uStack_428;
  uStack_498 = uStack_410;
  uStack_4a0 = uStack_418;
  uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_408);
  puStack_98 = puStack_400;
  func_0x000100402194(&puStack_90,&puStack_510);
  FUN_102bf7b80(&puStack_80,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
  FUN_102bf7b80(&puStack_98,&puStack_510,0x112efe110,&UNK_10db30950);
  func_0x000102bf0f18(&puStack_450);
  puVar8 = puStack_98;
  uStack_508 = uStack_88;
  puStack_510 = puStack_90;
  uStack_568 = uStack_78;
  puStack_570 = puStack_80;
  puVar7 = puVar6;
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    puVar7 = (undefined *)0x0;
    FUN_102bfb6d4(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
    puVar6 = puVar7;
  }
  uVar2 = *(ulong *)(puVar6 + 0x10);
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_102bfb6d4(puVar6,uVar2 + 1,1);
  }
  *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
  *(undefined8 *)(puVar6 + uVar2 * 0x58 + 0x28) = uStack_508;
  *(undefined **)(puVar6 + uVar2 * 0x58 + 0x20) = puStack_510;
  *(undefined **)(puVar6 + uVar2 * 0x58 + 0x30) = puStack_748;
  *(undefined8 *)(puVar6 + uVar2 * 0x58 + 0x40) = uStack_568;
  *(undefined **)(puVar6 + uVar2 * 0x58 + 0x38) = puStack_570;
  puVar6[uVar2 * 0x58 + 0x68] = (undefined1)uStack_490;
  *(undefined8 *)(puVar6 + uVar2 * 0x58 + 0x60) = uStack_498;
  *(undefined8 *)(puVar6 + uVar2 * 0x58 + 0x58) = uStack_4a0;
  *(undefined8 *)(puVar6 + uVar2 * 0x58 + 0x50) = uStack_4a8;
  *(undefined8 *)(puVar6 + uVar2 * 0x58 + 0x48) = uStack_4b0;
  *(undefined **)(puVar6 + uVar2 * 0x58 + 0x70) = puVar8;
  if (uVar16 == uVar11) goto LAB_102bf6888;
  goto LAB_102bf3b58;
LAB_102bf5778:
  uStack_638 = uStack_448;
  puStack_640 = puStack_450;
  uStack_5c8 = uStack_430;
  puStack_5d0 = puStack_438;
  uStack_4a8 = uStack_420;
  uStack_4b0 = uStack_428;
  uStack_498 = uStack_410;
  uStack_4a0 = uStack_418;
  uStack_490 = CONCAT71(uStack_490._1_7_,(undefined1)uStack_408);
  puStack_1a0 = puStack_400;
  func_0x000100402194(&puStack_640,&puStack_510);
  FUN_102bf7b80(&puStack_5d0,&puStack_510,0x112d35ff8,&UNK_10d900cd0);
  FUN_102bf7b80(&puStack_1a0,&puStack_510,0x112efe110,&UNK_10db30950);
  func_0x000102bf0f18(&puStack_450);
  puVar6 = puStack_1a0;
  uStack_508 = uStack_638;
  puStack_510 = puStack_640;
  uStack_568 = uStack_5c8;
  puStack_570 = puStack_5d0;
  puVar8 = puStack_6f8;
  func_0x000107c61558();
  if (((ulong)puVar8 & 1) == 0) {
    plVar1 = (long *)(puStack_6f8 + 0x10);
    puStack_6f8 = (undefined *)0x0;
    FUN_102bfb6d4(0,*plVar1 + 1,1);
  }
  uVar2 = *(ulong *)(puStack_6f8 + 0x10);
  if (*(ulong *)(puStack_6f8 + 0x18) >> 1 <= uVar2) {
    puStack_6f8 = (undefined *)(ulong)(1 < *(ulong *)(puStack_6f8 + 0x18));
    FUN_102bfb6d4(puStack_6f8,uVar2 + 1,1);
  }
  *(ulong *)(puStack_6f8 + 0x10) = uVar2 + 1;
  *(undefined8 *)(puStack_6f8 + uVar2 * 0x58 + 0x28) = uStack_508;
  *(undefined **)(puStack_6f8 + uVar2 * 0x58 + 0x20) = puStack_510;
  *(undefined **)(puStack_6f8 + uVar2 * 0x58 + 0x30) = puStack_748;
  *(undefined8 *)(puStack_6f8 + uVar2 * 0x58 + 0x40) = uStack_568;
  *(undefined **)(puStack_6f8 + uVar2 * 0x58 + 0x38) = puStack_570;
  puStack_6f8[uVar2 * 0x58 + 0x68] = (undefined1)uStack_490;
  *(undefined8 *)(puStack_6f8 + uVar2 * 0x58 + 0x60) = uStack_498;
  *(undefined8 *)(puStack_6f8 + uVar2 * 0x58 + 0x58) = uStack_4a0;
  *(undefined8 *)(puStack_6f8 + uVar2 * 0x58 + 0x50) = uStack_4a8;
  *(undefined8 *)(puStack_6f8 + uVar2 * 0x58 + 0x48) = uStack_4b0;
  *(undefined **)(puStack_6f8 + uVar2 * 0x58 + 0x70) = puVar6;
  if (uVar16 == uVar11) goto LAB_102bf6790;
  goto LAB_102bf4a1c;
}



/* Entry: 102bf7018; end: 102bf71f3;  */

undefined * FUN_102bf7018(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  long lStack_178;
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
  long lStack_120;
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
  
  uVar8 = *(ulong *)(param_1 + 0x10);
  func_0x000107c61434();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      lVar7 = 0;
      if (uVar9 <= uVar8) {
        lVar7 = uVar8 - uVar9;
      }
      puVar6 = (undefined8 *)(param_1 + 0x20 + uVar9 * 0x58);
      uVar9 = uVar9 + 1;
      while( true ) {
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf71f4);
          (*pcVar2)();
        }
        uStack_a8 = puVar6[5];
        uStack_b0 = puVar6[4];
        uStack_98 = puVar6[7];
        uStack_a0 = puVar6[6];
        uStack_88 = puVar6[9];
        uStack_90 = puVar6[8];
        uStack_80 = puVar6[10];
        uStack_c8 = puVar6[1];
        uStack_d0 = *puVar6;
        uStack_b8 = puVar6[3];
        uStack_c0 = puVar6[2];
        FUN_102bf0edc(&uStack_d0,&uStack_1e0);
        func_0x000102bf6d74(&uStack_128,&uStack_d0);
        uStack_158 = uStack_100;
        uStack_160 = uStack_108;
        uStack_148 = uStack_f0;
        uStack_150 = uStack_f8;
        uStack_138 = uStack_e0;
        uStack_140 = uStack_e8;
        uStack_130 = uStack_d8;
        lStack_178 = lStack_120;
        uStack_180 = uStack_128;
        uStack_168 = uStack_110;
        uStack_170 = uStack_118;
        func_0x000102bf0f18(&uStack_d0);
        if (lStack_120 != 0) break;
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 0xb;
        uVar9 = uVar9 + 1;
        if (uVar9 - uVar8 == 1) goto LAB_102bf71c0;
      }
      puVar3 = puVar5;
      func_0x000107c61558();
      puVar4 = puVar5;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        FUN_102bfb6d4(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar1 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_102bfb6d4(puVar5,uVar1 + 1,1,puVar4);
      }
      uStack_1b8 = uStack_158;
      uStack_1c0 = uStack_160;
      uStack_1a8 = uStack_148;
      uStack_1b0 = uStack_150;
      uStack_198 = uStack_138;
      uStack_1a0 = uStack_140;
      uStack_190 = uStack_130;
      lStack_1d8 = lStack_178;
      uStack_1e0 = uStack_180;
      uStack_1c8 = uStack_168;
      uStack_1d0 = uStack_170;
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar5 + uVar1 * 0x58 + 0x38) = uStack_168;
      *(undefined8 *)(puVar5 + uVar1 * 0x58 + 0x30) = uStack_170;
      *(undefined8 *)(puVar5 + uVar1 * 0x58 + 0x70) = uStack_130;
      *(undefined8 *)(puVar5 + uVar1 * 0x58 + 0x58) = uStack_148;
      *(undefined8 *)(puVar5 + uVar1 * 0x58 + 0x50) = uStack_150;
      *(undefined8 *)(puVar5 + uVar1 * 0x58 + 0x68) = uStack_138;
      *(undefined8 *)(puVar5 + uVar1 * 0x58 + 0x60) = uStack_140;
      *(undefined8 *)(puVar5 + uVar1 * 0x58 + 0x48) = uStack_158;
      *(undefined8 *)(puVar5 + uVar1 * 0x58 + 0x40) = uStack_160;
      *(long *)(puVar5 + uVar1 * 0x58 + 0x28) = lStack_178;
      *(undefined8 *)(puVar5 + uVar1 * 0x58 + 0x20) = uStack_180;
    } while (uVar9 != uVar8);
  }
LAB_102bf71c0:
  func_0x000107c6142c(param_1);
  return puVar5;
}



/* Entry: 102bf71f4; end: 102bf783f;  */

void FUN_102bf71f4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined1 auStack_298 [88];
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  long lStack_190;
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
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
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
  
  lVar7 = param_2[2];
  lVar10 = *(long *)(lVar7 + 0x10);
  if (lVar10 == 0) {
    lVar7 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_1e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_102bf7c5c(0,lVar10,0);
    puVar8 = (undefined8 *)(lVar7 + 0x20);
    do {
      puVar14 = puStack_1e0;
      uStack_c8 = puVar8[1];
      uStack_d0 = *puVar8;
      uStack_b8 = puVar8[3];
      uStack_c0 = puVar8[2];
      uStack_a8 = puVar8[5];
      uStack_b0 = puVar8[4];
      uStack_98 = puVar8[7];
      uStack_a0 = puVar8[6];
      uStack_88 = puVar8[9];
      uStack_90 = puVar8[8];
      uStack_80 = puVar8[10];
      FUN_102bf0edc(&uStack_d0,&puStack_130);
      FUN_102bf71f4(&uStack_188,&uStack_d0,param_3);
      func_0x000102bf0f18(&uStack_d0);
      uVar2 = *(ulong *)(puVar14 + 0x10);
      lVar7 = uVar2 + 1;
      puStack_1e0 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar2) {
        FUN_102bf7c5c(1 < *(ulong *)(puVar14 + 0x18),lVar7,1);
      }
      *(long *)(puStack_1e0 + 0x10) = lVar7;
      *(undefined8 *)(puStack_1e0 + uVar2 * 0x58 + 0x28) = uStack_180;
      *(undefined8 *)(puStack_1e0 + uVar2 * 0x58 + 0x20) = uStack_188;
      *(undefined8 *)(puStack_1e0 + uVar2 * 0x58 + 0x38) = uStack_170;
      *(undefined8 *)(puStack_1e0 + uVar2 * 0x58 + 0x30) = uStack_178;
      *(undefined8 *)(puStack_1e0 + uVar2 * 0x58 + 0x70) = uStack_138;
      *(undefined8 *)(puStack_1e0 + uVar2 * 0x58 + 0x58) = uStack_150;
      *(undefined8 *)(puStack_1e0 + uVar2 * 0x58 + 0x50) = uStack_158;
      *(undefined8 *)(puStack_1e0 + uVar2 * 0x58 + 0x68) = uStack_140;
      *(undefined8 *)(puStack_1e0 + uVar2 * 0x58 + 0x60) = uStack_148;
      *(undefined8 *)(puStack_1e0 + uVar2 * 0x58 + 0x48) = uStack_160;
      *(undefined8 *)(puStack_1e0 + uVar2 * 0x58 + 0x40) = uStack_168;
      puVar8 = puVar8 + 0xb;
      lVar10 = lVar10 + -1;
      puVar14 = puStack_1e0;
    } while (lVar10 != 0);
  }
  puVar3 = (undefined *)*param_2;
  uVar9 = param_2[1];
  uVar4 = param_2[3];
  uVar11 = param_2[4];
  uVar5 = param_2[5];
  uVar12 = param_2[6];
  uVar15 = param_2[7];
  uVar13 = param_2[8];
  uVar6 = *(undefined1 *)(param_2 + 9);
  lVar10 = param_2[10];
  if (lVar7 == 1) {
    func_0x000107c61434(uVar9);
    func_0x000107c61434(uVar11);
    func_0x000107c61434(lVar10);
    do {
      uStack_e8 = CONCAT71(uStack_197,uVar6);
      puStack_1e0 = puVar3;
      uStack_1d8 = uVar9;
      puStack_1d0 = puVar14;
      uStack_1c8 = uVar4;
      uStack_1c0 = uVar11;
      uStack_1b8 = uVar5;
      uStack_1b0 = uVar12;
      uStack_1a8 = uVar15;
      uStack_1a0 = uVar13;
      uStack_198 = uVar6;
      lStack_190 = lVar10;
      puStack_130 = puVar3;
      uStack_128 = uVar9;
      puStack_120 = puVar14;
      uStack_118 = uVar4;
      uStack_110 = uVar11;
      uStack_108 = uVar5;
      uStack_100 = uVar12;
      uStack_f8 = uVar15;
      uStack_f0 = uVar13;
      lStack_e0 = lVar10;
      if (lVar10 != 0) {
        lVar7 = *(long *)(lVar10 + 0x10);
        func_0x000107c61438(lVar10,2);
        if (lVar7 != 0) {
          uVar2 = 0;
          func_0x000100029284(0x656c626170706174);
          if ((uVar2 & 1) != 0) {
LAB_102bf7528:
            func_0x000107c61430(lVar10,2);
            break;
          }
          if (*(long *)(lVar10 + 0x10) != 0) {
            uVar2 = 0;
            func_0x000100029284(0x656c6269736976);
            if ((uVar2 & 1) != 0) goto LAB_102bf7528;
          }
        }
        func_0x000107c6142c(lVar10);
        if (*(long *)(lVar10 + 0x10) != 0) {
          uVar2 = 0xe900000000000079;
          func_0x000100029284(0x4264657265766f63);
          if ((uVar2 & 1) != 0) {
            func_0x000107c6142c(lVar10);
            break;
          }
        }
        func_0x000107c6142c(lVar10);
        uVar2 = 0;
        func_0x000102bf7d9c();
        if ((uVar2 & 1) != 0) break;
      }
      if (*(long *)(puVar14 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bf7548);
        (*pcVar1)();
      }
      uStack_218 = *(undefined8 *)(puVar14 + 0x48);
      uStack_220 = *(undefined8 *)(puVar14 + 0x40);
      uStack_208 = *(undefined8 *)(puVar14 + 0x58);
      uStack_210 = *(undefined8 *)(puVar14 + 0x50);
      uStack_1f8 = *(undefined8 *)(puVar14 + 0x68);
      uStack_200 = *(undefined8 *)(puVar14 + 0x60);
      lStack_1f0 = *(long *)(puVar14 + 0x70);
      uStack_238 = *(undefined8 *)(puVar14 + 0x28);
      puStack_240 = *(undefined **)(puVar14 + 0x20);
      uStack_228 = *(undefined8 *)(puVar14 + 0x38);
      puStack_230 = *(undefined **)(puVar14 + 0x30);
      FUN_102bf0edc(&puStack_240,auStack_298);
      func_0x000102bf0f18(&puStack_1e0);
      puVar3 = puStack_240;
      uVar4 = uStack_228;
      uVar5 = uStack_218;
      lVar10 = lStack_1f0;
      uVar9 = uStack_238;
      uVar11 = uStack_220;
      uVar12 = uStack_210;
      uVar13 = uStack_200;
      puVar14 = puStack_230;
      uVar15 = uStack_208;
      uVar6 = (undefined1)uStack_1f8;
    } while (*(long *)(puStack_230 + 0x10) == 1);
  }
  else {
    func_0x000107c61434(lVar10);
    func_0x000107c61434(uVar9);
    func_0x000107c61434(uVar11);
  }
  *param_1 = puVar3;
  param_1[1] = uVar9;
  param_1[2] = puVar14;
  param_1[3] = uVar4;
  param_1[4] = uVar11;
  param_1[5] = uVar5;
  param_1[6] = uVar12;
  param_1[7] = uVar15;
  param_1[8] = uVar13;
  *(undefined1 *)(param_1 + 9) = uVar6;
  param_1[10] = lVar10;
  return;
}



/* Entry: 102bf7840; end: 102bf7b1b;  */

void FUN_102bf7840(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  double *pdVar1;
  double *pdVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  double *pdVar8;
  double *pdVar9;
  bool bVar10;
  bool bVar11;
  ulong uVar12;
  char *pcVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_2a8 [88];
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  char cStack_1a8;
  undefined7 uStack_1a7;
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
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
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
  
  lVar14 = param_2[2];
  lVar16 = *(long *)(lVar14 + 0x10);
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar16 != 0) {
    puStack_1f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_102bf7c5c(0,lVar16,0);
    puVar18 = (undefined8 *)(lVar14 + 0x20);
    do {
      puVar17 = puStack_1f0;
      uStack_d8 = puVar18[1];
      uStack_e0 = *puVar18;
      uStack_c8 = puVar18[3];
      uStack_d0 = puVar18[2];
      uStack_b8 = puVar18[5];
      uStack_c0 = puVar18[4];
      uStack_a8 = puVar18[7];
      uStack_b0 = puVar18[6];
      uStack_98 = puVar18[9];
      uStack_a0 = puVar18[8];
      uStack_90 = puVar18[10];
      FUN_102bf0edc(&uStack_e0,&puStack_140);
      FUN_102bf7840(&uStack_198,&uStack_e0,param_3);
      func_0x000102bf0f18(&uStack_e0);
      uVar12 = *(ulong *)(puVar17 + 0x10);
      puStack_1f0 = puVar17;
      if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar12) {
        FUN_102bf7c5c(1 < *(ulong *)(puVar17 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(puStack_1f0 + 0x10) = uVar12 + 1;
      *(undefined8 *)(puStack_1f0 + uVar12 * 0x58 + 0x28) = uStack_190;
      *(undefined8 *)(puStack_1f0 + uVar12 * 0x58 + 0x20) = uStack_198;
      *(undefined8 *)(puStack_1f0 + uVar12 * 0x58 + 0x38) = uStack_180;
      *(undefined8 *)(puStack_1f0 + uVar12 * 0x58 + 0x30) = uStack_188;
      *(undefined8 *)(puStack_1f0 + uVar12 * 0x58 + 0x70) = uStack_148;
      *(undefined8 *)(puStack_1f0 + uVar12 * 0x58 + 0x58) = uStack_160;
      *(undefined8 *)(puStack_1f0 + uVar12 * 0x58 + 0x50) = uStack_168;
      *(undefined8 *)(puStack_1f0 + uVar12 * 0x58 + 0x68) = uStack_150;
      *(undefined8 *)(puStack_1f0 + uVar12 * 0x58 + 0x60) = uStack_158;
      *(undefined8 *)(puStack_1f0 + uVar12 * 0x58 + 0x48) = uStack_170;
      *(undefined8 *)(puStack_1f0 + uVar12 * 0x58 + 0x40) = uStack_178;
      puVar18 = puVar18 + 0xb;
      lVar16 = lVar16 + -1;
      puVar17 = puStack_1f0;
    } while (lVar16 != 0);
  }
  puVar3 = (undefined *)*param_2;
  uVar5 = param_2[1];
  uVar4 = param_2[3];
  uVar6 = param_2[4];
  dVar22 = (double)param_2[8];
  dVar21 = (double)param_2[7];
  dVar20 = (double)param_2[6];
  dVar19 = (double)param_2[5];
  cVar7 = *(char *)(param_2 + 9);
  uVar15 = param_2[10];
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar15);
  uStack_1e8 = uVar5;
  uStack_1a0 = uVar15;
  uStack_1d0 = uVar6;
  puStack_1f0 = puVar3;
  uStack_1d8 = uVar4;
  while (uStack_f8 = CONCAT71(uStack_1a7,cVar7), puStack_1e0 = puVar17, dStack_1c8 = dVar19,
        dStack_1c0 = dVar20, dStack_1b8 = dVar21, dStack_1b0 = dVar22, cStack_1a8 = cVar7,
        *(long *)(puVar17 + 0x10) != 0) {
    uVar12 = 0;
    puStack_140 = puStack_1f0;
    uStack_138 = uStack_1e8;
    puStack_130 = puVar17;
    uStack_128 = uStack_1d8;
    uStack_120 = uStack_1d0;
    dStack_118 = dVar19;
    dStack_110 = dVar20;
    dStack_108 = dVar21;
    dStack_100 = dVar22;
    uStack_f0 = uStack_1a0;
    func_0x000102bf7d9c();
    if ((((uVar12 & 1) != 0) || (cVar7 == '\x01')) ||
       (lVar16 = *(long *)(puVar17 + 0x10), lVar16 == 0)) break;
    pcVar13 = puVar17 + 0x68;
    lVar14 = -1;
    while (lVar14 = lVar14 + 1, lVar16 != lVar14) {
      if (*pcVar13 == '\x01') goto LAB_102bf7ad8;
      pdVar1 = (double *)(pcVar13 + -0x10);
      pdVar8 = (double *)(pcVar13 + -8);
      pdVar2 = (double *)(pcVar13 + -0x20);
      pdVar9 = (double *)(pcVar13 + -0x18);
      pcVar13 = pcVar13 + 0x58;
      bVar10 = false;
      if ((ABS(dVar19 - *pdVar2) < 0.5) && (bVar10 = false, !NAN(ABS(dVar20 - *pdVar9)))) {
        bVar10 = ABS(dVar20 - *pdVar9) < 0.5;
      }
      bVar11 = false;
      if ((bVar10) && (bVar11 = false, !NAN(ABS(dVar21 - *pdVar1)))) {
        bVar11 = ABS(dVar21 - *pdVar1) < 0.5;
      }
      bVar10 = false;
      if ((bVar11) && (bVar10 = false, !NAN(ABS(dVar22 - *pdVar8)))) {
        bVar10 = ABS(dVar22 - *pdVar8) < 0.5;
      }
      if (!bVar10) goto LAB_102bf7ad8;
    }
    if (lVar16 != 1) break;
    dStack_228 = *(double *)(puVar17 + 0x48);
    uStack_230 = *(undefined8 *)(puVar17 + 0x40);
    dStack_218 = *(double *)(puVar17 + 0x58);
    dStack_220 = *(double *)(puVar17 + 0x50);
    uStack_208 = *(undefined8 *)(puVar17 + 0x68);
    dStack_210 = *(double *)(puVar17 + 0x60);
    uStack_200 = *(undefined8 *)(puVar17 + 0x70);
    uStack_248 = *(undefined8 *)(puVar17 + 0x28);
    puStack_250 = *(undefined **)(puVar17 + 0x20);
    uStack_238 = *(undefined8 *)(puVar17 + 0x38);
    puStack_240 = *(undefined **)(puVar17 + 0x30);
    FUN_102bf0edc(&puStack_250,auStack_2a8);
    func_0x000102bf0f18(&puStack_1f0);
    uStack_1e8 = uStack_248;
    uStack_1a0 = uStack_200;
    uStack_1d0 = uStack_230;
    puStack_1f0 = puStack_250;
    puVar17 = puStack_240;
    uStack_1d8 = uStack_238;
    dVar21 = dStack_218;
    dVar22 = dStack_210;
    dVar19 = dStack_228;
    dVar20 = dStack_220;
    cVar7 = (char)uStack_208;
  }
LAB_102bf7ad8:
  param_1[5] = dStack_1c8;
  param_1[4] = uStack_1d0;
  param_1[7] = dStack_1b8;
  param_1[6] = dStack_1c0;
  param_1[9] = CONCAT71(uStack_1a7,cStack_1a8);
  param_1[8] = dStack_1b0;
  param_1[10] = uStack_1a0;
  param_1[1] = uStack_1e8;
  *param_1 = puStack_1f0;
  param_1[3] = uStack_1d8;
  param_1[2] = puStack_1e0;
  return;
}



/* Entry: 102bf7b1c; end: 102bf7b7f;  */

void FUN_102bf7b1c(long param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  lVar1 = lVar2;
  func_0x000107c61558();
  *unaff_x20 = lVar2;
  if (((int)lVar1 != 0) && (param_1 <= (long)(*(ulong *)(lVar2 + 0x18) >> 1))) {
    return;
  }
  FUN_102bf7c78();
  *unaff_x20 = lVar1;
  return;
}



/* Entry: 102bf7b80; end: 102bf7bc7;  */

undefined8 FUN_102bf7b80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102bf7bc8; end: 102bf7c0f;  */

void FUN_102bf7bc8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  *(undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 8) = param_4;
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf7c10);
  (*pcVar3)();
}



/* Entry: 102bf7c10; end: 102bf7c5b;  */

void FUN_102bf7c10(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61558();
  *unaff_x20 = uVar2;
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
    func_0x0001000d182c(0,*(long *)(uVar2 + 0x10) + 1,1,uVar2);
    *unaff_x20 = uVar1;
  }
  return;
}



/* Entry: 102bf7c5c; end: 102bf7c77;  */

void FUN_102bf7c5c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102bf7c78();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102bf7c78; end: 102bf829f;  */

undefined * FUN_102bf7c78(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102bf7d9c);
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
    puVar3 = (undefined *)0x112efe128;
    func_0x0001000285a8(0x112efe128,&UNK_10db30988);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x58) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1105afeb0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x58 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x58);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102bf82a0; end: 102bf854f;  */

undefined8 FUN_102bf82a0(long param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  long lStack_50;
  long lStack_48;
  
  if ((*(char *)(param_1 + 0x48) == '\x01') || (*(char *)(param_2 + 0x48) == '\x01')) {
LAB_102bf8330:
    uVar6 = 0;
  }
  else {
    dVar11 = *(double *)(param_1 + 0x28);
    dVar9 = *(double *)(param_1 + 0x30);
    dVar12 = *(double *)(param_2 + 0x28);
    dVar10 = *(double *)(param_2 + 0x30);
    bVar2 = false;
    if ((ABS(dVar11 - dVar12) < 0.5) && (bVar2 = false, !NAN(ABS(dVar9 - dVar10)))) {
      bVar2 = ABS(dVar9 - dVar10) < 0.5;
    }
    dVar13 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_2 + 0x38));
    bVar3 = false;
    if ((bVar2) && (bVar3 = false, !NAN(dVar13))) {
      bVar3 = dVar13 < 0.5;
    }
    if ((!bVar3) || (0.5 <= ABS(*(double *)(param_1 + 0x40) - *(double *)(param_2 + 0x40)))) {
      dVar13 = dVar9 + -0.5;
      bVar2 = false;
      bVar3 = true;
      if (dVar11 + -0.5 <= dVar12) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar13) && !NAN(dVar10)) {
          bVar2 = dVar13 == dVar10;
          bVar3 = dVar10 <= dVar13;
        }
      }
      if ((bVar3 && !bVar2) ||
         (dVar11 + *(double *)(param_1 + 0x38) + 0.5 < dVar12 + *(double *)(param_2 + 0x38)))
      goto LAB_102bf8330;
      bVar2 = false;
      if (dVar9 + *(double *)(param_1 + 0x40) + 0.5 < dVar10 + *(double *)(param_2 + 0x40)) {
        return 0;
      }
    }
    else {
      bVar2 = true;
    }
    lVar7 = *(long *)(param_1 + 0x50);
    lStack_48 = lVar7;
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) {
      uVar8 = 1;
    }
    else {
      func_0x000107c61434(lVar7);
      lVar4 = 0x656c626170706174;
      uVar5 = 0;
      func_0x000100029284();
      if ((uVar5 & 1) == 0) {
        FUN_102bf98e8(&lStack_48,0x112efe110,&UNK_10db30950);
        uVar8 = 1;
      }
      else {
        plVar1 = (long *)(*(long *)(lVar7 + 0x38) + lVar4 * 0x10);
        lVar7 = *plVar1;
        lVar4 = plVar1[1];
        func_0x000107c61434(lVar4);
        FUN_102bf98e8(&lStack_48,0x112efe110,&UNK_10db30950);
        if (lVar7 == 0x736579 && lVar4 == -0x1d00000000000000) {
          func_0x000107c6142c(lVar4);
          uVar8 = 0;
        }
        else {
          func_0x000107c605b8(lVar7,lVar4,0x736579,0xe300000000000000,0);
          func_0x000107c6142c(lVar4);
          uVar8 = (uint)lVar7 ^ 1;
        }
      }
    }
    lVar7 = *(long *)(param_2 + 0x50);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
      lStack_50 = lVar7;
      func_0x000107c61434(lVar7);
      lVar4 = 0x656c626170706174;
      uVar5 = 0;
      func_0x000100029284();
      if ((uVar5 & 1) == 0) {
        FUN_102bf98e8(&lStack_50,0x112efe110,&UNK_10db30950);
      }
      else {
        plVar1 = (long *)(*(long *)(lVar7 + 0x38) + lVar4 * 0x10);
        lVar7 = *plVar1;
        lVar4 = plVar1[1];
        func_0x000107c61434(lVar4);
        FUN_102bf98e8(&lStack_50,0x112efe110,&UNK_10db30950);
        if (lVar7 == 0x736579 && lVar4 == -0x1d00000000000000) {
          func_0x000107c6142c(lVar4);
        }
        else {
          func_0x000107c605b8(lVar7,lVar4,0x736579,0xe300000000000000,0);
          func_0x000107c6142c(lVar4);
          uVar8 = uVar8 | (uint)lVar7 ^ 0xffffffff;
        }
        if (!bVar2 && (uVar8 & 1) == 0) goto LAB_102bf8330;
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}



/* Entry: 102bf8550; end: 102bf98e7;  */

byte * FUN_102bf8550(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  byte *pbVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  long extraout_x8;
  ulong uVar20;
  ulong uVar21;
  byte **ppbVar22;
  byte *pbVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  ulong uVar27;
  byte *pbVar28;
  ulong uVar29;
  byte *pbVar30;
  uint uVar31;
  undefined8 auStack_170 [2];
  undefined1 auStack_160 [8];
  undefined1 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  byte *pbStack_130;
  ulong uStack_128;
  byte *pbStack_120;
  ulong uStack_118;
  undefined *puStack_110;
  
  lVar5 = 0x112d483a8;
  func_0x0001000285a8(0x112d483a8,&UNK_10d910f00);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = -extraout_x8;
  puStack_158 = auStack_160 + lVar5;
  pbVar23 = *(byte **)(param_1 + 0x50);
  pbVar6 = pbVar23;
  if (pbVar23 == (byte *)0x0) {
    pbVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8();
  }
  puVar25 = (undefined *)param_2[10];
  puStack_148 = param_2;
  if (puVar25 == (undefined *)0x0) {
    func_0x000107c61434(pbVar23);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8();
  }
  else {
    func_0x000107c61434(pbVar23);
    puVar8 = puVar25;
  }
  lVar7 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  *(undefined8 *)(lVar7 + 0x18) = 0x10;
  *(undefined8 *)(lVar7 + 0x10) = 8;
  puStack_150 = (undefined8 *)(lVar7 + 0x20);
  *puStack_150 = 0x746e6f4374786574;
  *(undefined8 *)(lVar7 + 0x28) = 0xeb00000000746e65;
  *(undefined8 *)(lVar7 + 0x30) = 0x4b6e6f6349676973;
  *(undefined8 *)(lVar7 + 0x38) = 0xea00000000007965;
  *(undefined8 *)(lVar7 + 0x40) = 0xd000000000000017;
  *(undefined8 *)(lVar7 + 0x48) = 0x800000010f0fd9c0;
  *(undefined8 *)(lVar7 + 0x50) = 0x746e6968;
  *(undefined8 *)(lVar7 + 0x58) = 0xe400000000000000;
  *(undefined8 *)(lVar7 + 0x60) = 0xd000000000000012;
  *(undefined8 *)(lVar7 + 0x68) = 0x800000010f0fd9a0;
  *(undefined8 *)(lVar7 + 0x70) = 0x74536c6c6f726373;
  *(undefined8 *)(lVar7 + 0x78) = 0xeb00000000657461;
  *(undefined8 *)(lVar7 + 0x80) = 0x6e756f436d657469;
  *(undefined8 *)(lVar7 + 0x88) = 0xe900000000000074;
  *(undefined8 *)(lVar7 + 0x90) = 0x436e6f6974636573;
  *(undefined8 *)(lVar7 + 0x98) = 0xec000000746e756f;
  func_0x000107c61434(puVar25);
  lVar24 = 0;
  lStack_140 = lVar7;
  puStack_138 = puVar8;
  do {
    uVar27 = *(ulong *)(lVar7 + lVar24 + 0x20);
    uVar29 = *(ulong *)(lVar7 + lVar24 + 0x28);
    lVar26 = *(long *)(pbVar6 + 0x10);
    func_0x000107c61434(uVar29);
    if (lVar26 == 0) {
LAB_102bf87d8:
      if (*(long *)(puVar8 + 0x10) == 0) goto LAB_102bf8760;
      func_0x000107c61434(puVar8);
      uVar18 = uVar27;
      uVar17 = uVar29;
      func_0x000100029284();
      if ((uVar17 & 1) == 0) {
        func_0x000107c6142c(puVar8);
        goto LAB_102bf8760;
      }
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x38) + uVar18 * 0x10);
      uVar17 = *puVar1;
      uVar20 = puVar1[1];
      func_0x000107c61434(uVar20);
      func_0x000107c6142c(puVar8);
      uVar18 = uVar17 & 0xffffffffffff;
      if ((uVar20 & 0x2000000000000000) != 0) {
        uVar18 = uVar20 >> 0x38 & 0xf;
      }
      if (uVar18 == 0) {
        func_0x000107c6142c(uVar29);
        uVar29 = uVar20;
        goto LAB_102bf8760;
      }
      pbVar23 = pbVar6;
      func_0x000107c61558();
      uVar18 = uVar27;
      uVar15 = uVar29;
      pbStack_120 = pbVar6;
      func_0x000100029284();
      uVar21 = (ulong)~(uint)uVar15 & 1;
      lVar7 = *(long *)(pbVar6 + 0x10) + uVar21;
      if (SCARRY8(*(long *)(pbVar6 + 0x10),uVar21)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102bf8f00);
        (*pcVar4)();
      }
      if (*(long *)(pbVar6 + 0x18) < lVar7) {
        func_0x0001001833c8(lVar7,pbVar23);
        uVar18 = uVar27;
        uVar21 = uVar29;
        func_0x000100029284();
        if (((uint)uVar15 & 1) != ((uint)uVar21 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bf98e8);
          (*pcVar4)();
        }
      }
      else if (((ulong)pbVar23 & 1) == 0) {
        func_0x000100184498();
      }
      pbVar6 = pbStack_120;
      if ((uVar15 & 1) == 0) {
        *(ulong *)(pbStack_120 + (uVar18 >> 6) * 8 + 0x40) =
             *(ulong *)(pbStack_120 + (uVar18 >> 6) * 8 + 0x40) | 1L << (uVar18 & 0x3f);
        puVar1 = (ulong *)(*(long *)(pbStack_120 + 0x30) + uVar18 * 0x10);
        *puVar1 = uVar27;
        puVar1[1] = uVar29;
        puVar1 = (ulong *)(*(long *)(pbStack_120 + 0x38) + uVar18 * 0x10);
        *puVar1 = uVar17;
        puVar1[1] = uVar20;
        if (SCARRY8(*(long *)(pbStack_120 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bf8f04);
          (*pcVar4)();
        }
        *(long *)(pbStack_120 + 0x10) = *(long *)(pbStack_120 + 0x10) + 1;
        puVar8 = puStack_138;
        lVar7 = lStack_140;
      }
      else {
        puVar1 = (ulong *)(*(long *)(pbStack_120 + 0x38) + uVar18 * 0x10);
        uVar27 = puVar1[1];
        *puVar1 = uVar17;
        puVar1[1] = uVar20;
        func_0x000107c6142c(uVar29);
        func_0x000107c6142c(uVar27);
        puVar8 = puStack_138;
        lVar7 = lStack_140;
      }
    }
    else {
      func_0x000107c61434(pbVar6);
      uVar18 = uVar27;
      uVar17 = uVar29;
      func_0x000100029284();
      if ((uVar17 & 1) == 0) {
        func_0x000107c6142c(pbVar6);
        goto LAB_102bf87d8;
      }
      puVar1 = (ulong *)(*(long *)(pbVar6 + 0x38) + uVar18 * 0x10);
      uVar18 = *puVar1;
      uVar17 = puVar1[1];
      func_0x000107c6142c(pbVar6);
      uVar18 = uVar18 & 0xffffffffffff;
      if ((uVar17 & 0x2000000000000000) != 0) {
        uVar18 = uVar17 >> 0x38 & 0xf;
      }
      if (uVar18 == 0) goto LAB_102bf87d8;
LAB_102bf8760:
      func_0x000107c6142c(uVar29);
    }
    lVar24 = lVar24 + 0x10;
  } while (lVar24 != 0x80);
  func_0x000107c61588(lVar7);
  func_0x000107c61408(puStack_150,*(undefined8 *)(lVar7 + 0x10),PTR___sSSN_11034da80);
  func_0x000107c6145c(lVar7,0x20,7);
  puVar25 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(pbVar6 + 0x10) != 0) {
    func_0x000107c61434(pbVar6);
    uVar27 = 0;
    lVar7 = -0x2ffffffffffffff0;
    func_0x000100029284();
    pbVar23 = pbVar6;
    if ((uVar27 & 1) != 0) {
      puVar1 = (ulong *)(*(long *)(pbVar6 + 0x38) + lVar7 * 0x10);
      uVar29 = *puVar1;
      pbVar23 = (byte *)puVar1[1];
      func_0x000107c61434(pbVar23);
      func_0x000107c6142c(pbVar6);
      uVar27 = uVar29 & 0xffffffffffff;
      if (((ulong)pbVar23 & 0x2000000000000000) != 0) {
        uVar27 = (ulong)pbVar23 >> 0x38 & 0xf;
      }
      if (uVar27 != 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
        uVar27 = *(ulong *)(puVar8 + 0x10);
        puVar25 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar27) {
          puVar25 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          func_0x0001000d182c(puVar25,uVar27 + 1,1,puVar8);
        }
        *(ulong *)(puVar25 + 0x10) = uVar27 + 1;
        *(ulong *)(puVar25 + uVar27 * 0x10 + 0x20) = uVar29;
        *(byte **)(puVar25 + uVar27 * 0x10 + 0x28) = pbVar23;
        goto LAB_102bf8a44;
      }
    }
    func_0x000107c6142c(pbVar23);
  }
LAB_102bf8a44:
  uVar9 = *puStack_148;
  uVar13 = puStack_148[1];
  func_0x000107c61434(uVar13);
  puVar8 = puVar25;
  func_0x000107c61558();
  puVar11 = puVar25;
  if (((ulong)puVar8 & 1) == 0) {
    puVar11 = (undefined *)0x0;
    func_0x0001000d182c(0,*(long *)(puVar25 + 0x10) + 1,1,puVar25);
  }
  uVar27 = *(ulong *)(puVar11 + 0x10);
  puVar25 = puVar11;
  if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar27) {
    puVar25 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
    func_0x0001000d182c(puVar25,uVar27 + 1,1,puVar11);
  }
  puVar8 = puStack_138;
  *(ulong *)(puVar25 + 0x10) = uVar27 + 1;
  *(undefined8 *)(puVar25 + uVar27 * 0x10 + 0x20) = uVar9;
  *(undefined8 *)(puVar25 + uVar27 * 0x10 + 0x28) = uVar13;
  puStack_110 = puVar25;
  if (*(long *)(puStack_138 + 0x10) != 0) {
    func_0x000107c61434(puStack_138);
    uVar27 = 0;
    lVar7 = -0x2ffffffffffffff0;
    func_0x000100029284();
    puVar11 = puVar8;
    if ((uVar27 & 1) != 0) {
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x38) + lVar7 * 0x10);
      uVar29 = *puVar1;
      puVar11 = (undefined *)puVar1[1];
      func_0x000107c61434(puVar11);
      func_0x000107c6142c(puVar8);
      uVar27 = uVar29 & 0xffffffffffff;
      if (((ulong)puVar11 & 0x2000000000000000) != 0) {
        uVar27 = (ulong)puVar11 >> 0x38 & 0xf;
      }
      if (uVar27 != 0) {
        uVar27 = *(ulong *)(puVar25 + 0x10);
        puVar8 = puVar25;
        if (*(ulong *)(puVar25 + 0x18) >> 1 <= uVar27) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar25 + 0x18));
          puStack_110 = puVar25;
          func_0x0001000d182c(puVar8,uVar27 + 1,1,puVar25);
        }
        *(ulong *)(puVar8 + 0x10) = uVar27 + 1;
        *(ulong *)(puVar8 + uVar27 * 0x10 + 0x20) = uVar29;
        *(undefined **)(puVar8 + uVar27 * 0x10 + 0x28) = puVar11;
        puVar25 = puVar8;
        puStack_110 = puVar8;
        goto LAB_102bf8b1c;
      }
    }
    func_0x000107c6142c(puVar11);
  }
LAB_102bf8b1c:
  uVar29 = 0;
  lVar7 = 0x654464656772656d;
  uVar9 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar13 = uVar9;
  func_0x00010011d734();
  uVar27 = 0xe100000000000000;
  uVar10 = 0x2c;
  uVar16 = 0xe100000000000000;
  lStack_140 = uVar13;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar9);
  pbVar23 = pbVar6;
  func_0x000107c61558(pbVar6);
  pbStack_120 = pbVar6;
  func_0x00010018433c(uVar10,uVar16,0xd000000000000010,0x800000010f0fda00,pbVar23);
  pbVar6 = pbStack_120;
  if (*(long *)(pbStack_120 + 0x10) == 0) {
    pbVar23 = (byte *)0x30;
    puVar8 = puStack_138;
  }
  else {
    func_0x000107c61434(pbStack_120);
    uVar18 = uVar29;
    func_0x000100029284();
    if ((uVar18 & 1) == 0) {
      pbVar23 = (byte *)0x30;
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(pbVar6 + 0x38) + lVar7 * 0x10);
      pbVar23 = (byte *)*puVar2;
      uVar27 = puVar2[1];
      func_0x000107c61434(uVar27);
    }
    puVar8 = puStack_138;
    func_0x000107c61574(pbVar6);
  }
  uVar17 = (ulong)pbVar23 & 0xffffffffffff;
  uVar20 = uVar27 >> 0x38 & 0xf;
  uVar18 = uVar17;
  if ((uVar27 & 0x2000000000000000) != 0) {
    uVar18 = uVar20;
  }
  if (uVar18 == 0) {
    func_0x000107c6142c(uVar27);
    pbVar23 = (byte *)0x0;
    if (*(long *)(puVar8 + 0x10) != 0) goto LAB_102bf8ea8;
LAB_102bf8f58:
    uVar27 = 0xe100000000000000;
    pbVar28 = (byte *)0x30;
  }
  else {
    if ((uVar27 >> 0x3c & 1) == 0) {
      if ((uVar27 >> 0x3d & 1) == 0) {
        if (((ulong)pbVar23 >> 0x3c & 1) == 0) {
          uVar17 = uVar27;
          func_0x000107c60358();
        }
        else {
          pbVar23 = (byte *)((uVar27 & 0xfffffffffffffff) + 0x20);
        }
        if (*pbVar23 == 0x2b) {
          if ((long)uVar17 < 1) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bf982c);
            (*pcVar4)();
          }
          lVar7 = uVar17 - 1;
          if (lVar7 == 0) goto LAB_102bf8e74;
          pbVar28 = (byte *)0x0;
          do {
            pbVar23 = pbVar23 + 1;
            if (((9 < *pbVar23 - 0x30) ||
                (lVar24 = (long)pbVar28 * 10,
                SUB168(SEXT816((long)pbVar28) * SEXT816(10),8) != lVar24 >> 0x3f)) ||
               (uVar18 = (ulong)(byte)(*pbVar23 - 0x30), pbVar28 = (byte *)(lVar24 + uVar18),
               SCARRY8(lVar24,uVar18))) goto LAB_102bf8e74;
            uVar31 = 0;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        else if (*pbVar23 == 0x2d) {
          if ((long)uVar17 < 1) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bf9824);
            (*pcVar4)();
          }
          lVar7 = uVar17 - 1;
          if (lVar7 == 0) {
LAB_102bf8e74:
            uVar31 = 1;
            pbVar28 = (byte *)0x0;
          }
          else {
            pbVar28 = (byte *)0x0;
            do {
              pbVar23 = pbVar23 + 1;
              if (((9 < *pbVar23 - 0x30) ||
                  (lVar24 = (long)pbVar28 * 10,
                  SUB168(SEXT816((long)pbVar28) * SEXT816(10),8) != lVar24 >> 0x3f)) ||
                 (uVar18 = (ulong)(byte)(*pbVar23 - 0x30), pbVar28 = (byte *)(lVar24 - uVar18),
                 SBORROW8(lVar24,uVar18))) goto LAB_102bf8e74;
              uVar31 = 0;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
        }
        else {
          if (uVar17 == 0) goto LAB_102bf8e74;
          if (pbVar23 == (byte *)0x0) {
            uVar31 = 0;
            pbVar28 = (byte *)0x0;
          }
          else {
            pbVar28 = (byte *)0x0;
            do {
              if (((9 < *pbVar23 - 0x30) ||
                  (lVar7 = (long)pbVar28 * 10,
                  SUB168(SEXT816((long)pbVar28) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                 (uVar18 = (ulong)(byte)(*pbVar23 - 0x30), pbVar28 = (byte *)(lVar7 + uVar18),
                 SCARRY8(lVar7,uVar18))) goto LAB_102bf8e74;
              uVar31 = 0;
              uVar17 = uVar17 - 1;
              pbVar23 = pbVar23 + 1;
            } while (uVar17 != 0);
          }
        }
      }
      else {
        pbStack_120 = pbVar23;
        uStack_118 = uVar27 & 0xffffffffffffff;
        uVar31 = (uint)pbVar23 & 0xff;
        if (uVar31 == 0x2b) {
          if (uVar20 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bf9830);
            (*pcVar4)();
          }
          lVar7 = uVar20 - 1;
          if (lVar7 == 0) goto LAB_102bf8e74;
          pbVar28 = (byte *)0x0;
          pbVar23 = (byte *)((ulong)&pbStack_120 | 1);
          do {
            if (((9 < *pbVar23 - 0x30) ||
                (lVar24 = (long)pbVar28 * 10,
                SUB168(SEXT816((long)pbVar28) * SEXT816(10),8) != lVar24 >> 0x3f)) ||
               (uVar18 = (ulong)(byte)(*pbVar23 - 0x30), pbVar28 = (byte *)(lVar24 + uVar18),
               SCARRY8(lVar24,uVar18))) goto LAB_102bf8e74;
            uVar31 = 0;
            lVar7 = lVar7 + -1;
            pbVar23 = pbVar23 + 1;
          } while (lVar7 != 0);
        }
        else if (uVar31 == 0x2d) {
          if (uVar20 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bf9828);
            (*pcVar4)();
          }
          lVar7 = uVar20 - 1;
          if (lVar7 == 0) goto LAB_102bf8e74;
          pbVar28 = (byte *)0x0;
          pbVar23 = (byte *)((ulong)&pbStack_120 | 1);
          do {
            if (((9 < *pbVar23 - 0x30) ||
                (lVar24 = (long)pbVar28 * 10,
                SUB168(SEXT816((long)pbVar28) * SEXT816(10),8) != lVar24 >> 0x3f)) ||
               (uVar18 = (ulong)(byte)(*pbVar23 - 0x30), pbVar28 = (byte *)(lVar24 - uVar18),
               SBORROW8(lVar24,uVar18))) goto LAB_102bf8e74;
            uVar31 = 0;
            lVar7 = lVar7 + -1;
            pbVar23 = pbVar23 + 1;
          } while (lVar7 != 0);
        }
        else {
          if (uVar20 == 0) goto LAB_102bf8e74;
          pbVar28 = (byte *)0x0;
          ppbVar22 = &pbStack_120;
          do {
            if (((9 < *(byte *)ppbVar22 - 0x30) ||
                (lVar7 = (long)pbVar28 * 10,
                SUB168(SEXT816((long)pbVar28) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
               (uVar18 = (ulong)(byte)(*(byte *)ppbVar22 - 0x30), pbVar28 = (byte *)(lVar7 + uVar18)
               , SCARRY8(lVar7,uVar18))) goto LAB_102bf8e74;
            uVar31 = 0;
            uVar20 = uVar20 - 1;
            ppbVar22 = (byte **)((long)ppbVar22 + 1);
          } while (uVar20 != 0);
        }
      }
    }
    else {
      uVar18 = uVar27;
      func_0x000100edba6c(pbVar23,uVar27,10);
      uVar31 = (uint)uVar18;
      pbVar28 = pbVar23;
    }
    func_0x000107c6142c(uVar27);
    pbVar23 = (byte *)0x0;
    if ((uVar31 & 0xff) != 1) {
      pbVar23 = pbVar28;
    }
    if (*(long *)(puVar8 + 0x10) == 0) goto LAB_102bf8f58;
LAB_102bf8ea8:
    lVar7 = 0x654464656772656d;
    func_0x000107c61434(puVar8);
    func_0x000100029284();
    if ((uVar29 & 1) == 0) {
      uVar27 = 0xe100000000000000;
      pbVar28 = (byte *)0x30;
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + lVar7 * 0x10);
      pbVar28 = (byte *)*puVar2;
      uVar27 = puVar2[1];
      func_0x000107c61434(uVar27);
    }
    func_0x000107c6142c(puVar8);
  }
  uVar18 = (ulong)pbVar28 & 0xffffffffffff;
  uVar17 = uVar27 >> 0x38 & 0xf;
  uVar29 = uVar18;
  if ((uVar27 & 0x2000000000000000) != 0) {
    uVar29 = uVar17;
  }
  if (uVar29 == 0) {
    func_0x000107c6142c(uVar27);
    pbVar28 = (byte *)0x0;
    puVar11 = PTR___sSiN_11034deb0;
    puVar19 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    goto joined_r0x000102bf9734;
  }
  if ((uVar27 >> 0x3c & 1) == 0) {
    if ((uVar27 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar28 >> 0x3c & 1) == 0) {
        uVar18 = uVar27;
        func_0x000107c60358();
      }
      else {
        pbVar28 = (byte *)((uVar27 & 0xfffffffffffffff) + 0x20);
      }
      if (*pbVar28 == 0x2b) {
        if ((long)uVar18 < 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bf983c);
          (*pcVar4)();
        }
        lVar7 = uVar18 - 1;
        if (lVar7 == 0) goto LAB_102bf91bc;
        pbVar30 = (byte *)0x0;
        do {
          pbVar28 = pbVar28 + 1;
          if (((9 < *pbVar28 - 0x30) ||
              (lVar24 = (long)pbVar30 * 10,
              SUB168(SEXT816((long)pbVar30) * SEXT816(10),8) != lVar24 >> 0x3f)) ||
             (uVar29 = (ulong)(byte)(*pbVar28 - 0x30), pbVar30 = (byte *)(lVar24 + uVar29),
             SCARRY8(lVar24,uVar29))) goto LAB_102bf91bc;
          uVar31 = 0;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      else if (*pbVar28 == 0x2d) {
        if ((long)uVar18 < 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bf9834);
          (*pcVar4)();
        }
        lVar7 = uVar18 - 1;
        if (lVar7 == 0) {
LAB_102bf91bc:
          uVar31 = 1;
          pbVar30 = (byte *)0x0;
        }
        else {
          pbVar30 = (byte *)0x0;
          do {
            pbVar28 = pbVar28 + 1;
            if (((9 < *pbVar28 - 0x30) ||
                (lVar24 = (long)pbVar30 * 10,
                SUB168(SEXT816((long)pbVar30) * SEXT816(10),8) != lVar24 >> 0x3f)) ||
               (uVar29 = (ulong)(byte)(*pbVar28 - 0x30), pbVar30 = (byte *)(lVar24 - uVar29),
               SBORROW8(lVar24,uVar29))) goto LAB_102bf91bc;
            uVar31 = 0;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
      }
      else {
        if (uVar18 == 0) goto LAB_102bf91bc;
        if (pbVar28 == (byte *)0x0) {
          uVar31 = 0;
          pbVar30 = (byte *)0x0;
        }
        else {
          pbVar30 = (byte *)0x0;
          do {
            if (((9 < *pbVar28 - 0x30) ||
                (lVar7 = (long)pbVar30 * 10,
                SUB168(SEXT816((long)pbVar30) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
               (uVar29 = (ulong)(byte)(*pbVar28 - 0x30), pbVar30 = (byte *)(lVar7 + uVar29),
               SCARRY8(lVar7,uVar29))) goto LAB_102bf91bc;
            uVar31 = 0;
            uVar18 = uVar18 - 1;
            pbVar28 = pbVar28 + 1;
          } while (uVar18 != 0);
        }
      }
    }
    else {
      pbStack_120 = pbVar28;
      uStack_118 = uVar27 & 0xffffffffffffff;
      uVar31 = (uint)pbVar28 & 0xff;
      if (uVar31 == 0x2b) {
        if (uVar17 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bf9840);
          (*pcVar4)();
        }
        lVar7 = uVar17 - 1;
        if (lVar7 == 0) goto LAB_102bf91bc;
        pbVar30 = (byte *)0x0;
        pbVar28 = (byte *)((ulong)&pbStack_120 | 1);
        do {
          if (((9 < *pbVar28 - 0x30) ||
              (lVar24 = (long)pbVar30 * 10,
              SUB168(SEXT816((long)pbVar30) * SEXT816(10),8) != lVar24 >> 0x3f)) ||
             (uVar29 = (ulong)(byte)(*pbVar28 - 0x30), pbVar30 = (byte *)(lVar24 + uVar29),
             SCARRY8(lVar24,uVar29))) goto LAB_102bf91bc;
          uVar31 = 0;
          lVar7 = lVar7 + -1;
          pbVar28 = pbVar28 + 1;
        } while (lVar7 != 0);
      }
      else if (uVar31 == 0x2d) {
        if (uVar17 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bf9838);
          (*pcVar4)();
        }
        lVar7 = uVar17 - 1;
        if (lVar7 == 0) goto LAB_102bf91bc;
        pbVar30 = (byte *)0x0;
        pbVar28 = (byte *)((ulong)&pbStack_120 | 1);
        do {
          if (((9 < *pbVar28 - 0x30) ||
              (lVar24 = (long)pbVar30 * 10,
              SUB168(SEXT816((long)pbVar30) * SEXT816(10),8) != lVar24 >> 0x3f)) ||
             (uVar29 = (ulong)(byte)(*pbVar28 - 0x30), pbVar30 = (byte *)(lVar24 - uVar29),
             SBORROW8(lVar24,uVar29))) goto LAB_102bf91bc;
          uVar31 = 0;
          lVar7 = lVar7 + -1;
          pbVar28 = pbVar28 + 1;
        } while (lVar7 != 0);
      }
      else {
        if (uVar17 == 0) goto LAB_102bf91bc;
        pbVar30 = (byte *)0x0;
        ppbVar22 = &pbStack_120;
        do {
          if (((9 < *(byte *)ppbVar22 - 0x30) ||
              (lVar7 = (long)pbVar30 * 10,
              SUB168(SEXT816((long)pbVar30) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
             (uVar29 = (ulong)(byte)(*(byte *)ppbVar22 - 0x30), pbVar30 = (byte *)(lVar7 + uVar29),
             SCARRY8(lVar7,uVar29))) goto LAB_102bf91bc;
          uVar31 = 0;
          uVar17 = uVar17 - 1;
          ppbVar22 = (byte **)((long)ppbVar22 + 1);
        } while (uVar17 != 0);
      }
    }
  }
  else {
    uVar29 = uVar27;
    func_0x000100edba6c(pbVar28,uVar27,10);
    uVar31 = (uint)uVar29;
    pbVar30 = pbVar28;
  }
  func_0x000107c6142c(uVar27);
  pbVar28 = (byte *)0x0;
  puVar11 = PTR___sSiN_11034deb0;
  puVar19 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  if ((uVar31 & 0xff) != 1) {
    pbVar28 = pbVar30;
  }
joined_r0x000102bf9734:
  PTR___sSiN_11034deb0 = puVar11;
  PTR___sSis23CustomStringConvertiblesWP_11034df00 = puVar19;
  if (SCARRY8((long)pbVar23,1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102bf973c);
    (*pcVar4)();
  }
  if (!SCARRY8((long)(pbVar23 + 1),(long)pbVar28)) {
    pbStack_120 = pbVar23 + 1 + (long)pbVar28;
    func_0x000107c6057c(puVar11,puVar19);
    pbVar23 = pbVar6;
    func_0x000107c61558(pbVar6);
    pbStack_120 = pbVar6;
    func_0x00010018433c(puVar11,puVar19,0x654464656772656d,0xeb00000000687470,pbVar23);
    pbVar6 = pbStack_120;
    if (*(long *)(puVar8 + 0x10) != 0) {
      uVar29 = 0xef64497974696c69;
      pbVar28 = (byte *)0x6269737365636361;
      func_0x000107c61434(puVar8);
      pbVar23 = pbVar28;
      uVar27 = uVar29;
      func_0x000100029284();
      if ((uVar27 & 1) == 0) {
        func_0x000107c6142c(puVar8);
      }
      else {
        puVar1 = (ulong *)(*(long *)(puVar8 + 0x38) + (long)pbVar23 * 0x10);
        pbVar23 = (byte *)*puVar1;
        uVar18 = puVar1[1];
        func_0x000107c61434(uVar18);
        func_0x000107c6142c(puVar8);
        uVar27 = (ulong)pbVar23 & 0xffffffffffff;
        if ((uVar18 & 0x2000000000000000) != 0) {
          uVar27 = uVar18 >> 0x38 & 0xf;
        }
        if (uVar27 == 0) {
          func_0x000107c6142c(uVar18);
          puVar8 = puStack_138;
        }
        else {
          func_0x000101515f6c(0x6269737365636361,0xef64497974696c69,pbVar6);
          pbVar30 = (byte *)0x0;
          if (uVar29 != 0) {
            pbVar30 = pbVar28;
          }
          uVar27 = 0xe000000000000000;
          if (uVar29 != 0) {
            uVar27 = uVar29;
          }
          uVar29 = uVar27;
          func_0x000107c5fb1c();
          func_0x000107c6142c(uVar27);
          pbVar28 = pbVar23;
          uVar27 = uVar18;
          func_0x000107c5fb1c();
          lVar7 = 0;
          pbStack_130 = pbVar28;
          uStack_128 = uVar27;
          pbStack_120 = pbVar30;
          uStack_118 = uVar29;
          func_0x000107c5ef14();
          puVar3 = puStack_158;
          puVar12 = puStack_158;
          (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puStack_158,1,1,lVar7);
          func_0x000100e8b654();
          *(undefined1 **)((long)auStack_170 + lVar5) = puVar12;
          *(undefined1 **)((long)auStack_170 + lVar5 + 8) = puVar12;
          uVar31 = 0;
          func_0x000107c60218(&pbStack_130,0,0,0,1,puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80)
          ;
          FUN_102bf98e8(puVar3,0x112d483a8,&UNK_10d910f00);
          func_0x000107c6142c(uVar29);
          func_0x000107c6142c(uVar27);
          pbVar28 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if ((uVar31 & 0xff) == 1) {
            pbStack_120 = PTR___swiftEmptyArrayStorage_11034f1c8;
            uVar27 = 0x644964656772656d;
            uVar29 = 0xe900000000000073;
            func_0x000101515f6c(0x644964656772656d,0xe900000000000073,pbVar6);
            if (uVar29 != 0) {
              uVar17 = uVar27 & 0xffffffffffff;
              if ((uVar29 & 0x2000000000000000) != 0) {
                uVar17 = uVar29 >> 0x38 & 0xf;
              }
              if (uVar17 == 0) {
                func_0x000107c6142c(uVar29);
              }
              else {
                FUN_102bf7c10();
                uVar17 = *(ulong *)(pbStack_120 + 0x10);
                if (*(ulong *)(pbStack_120 + 0x18) >> 1 <= uVar17) {
                  pbVar28 = (byte *)(ulong)(1 < *(ulong *)(pbStack_120 + 0x18));
                  func_0x0001000d182c(pbVar28,uVar17 + 1,1,pbStack_120);
                  pbStack_120 = pbVar28;
                }
                *(ulong *)(pbStack_120 + 0x10) = uVar17 + 1;
                *(ulong *)(pbStack_120 + uVar17 * 0x10 + 0x20) = uVar27;
                *(ulong *)(pbStack_120 + uVar17 * 0x10 + 0x28) = uVar29;
                pbVar28 = pbStack_120;
              }
            }
            pbVar30 = pbVar28;
            func_0x000107c61558();
            puVar8 = puStack_138;
            pbVar14 = pbVar28;
            if (((ulong)pbVar30 & 1) == 0) {
              pbVar14 = (byte *)0x0;
              pbStack_120 = pbVar28;
              func_0x0001000d182c(0,*(long *)(pbVar28 + 0x10) + 1,1,pbVar28);
            }
            uVar27 = *(ulong *)(pbVar14 + 0x10);
            pbVar28 = pbVar14;
            if (*(ulong *)(pbVar14 + 0x18) >> 1 <= uVar27) {
              pbVar28 = (byte *)(ulong)(1 < *(ulong *)(pbVar14 + 0x18));
              pbStack_120 = pbVar14;
              func_0x0001000d182c(pbVar28,uVar27 + 1,1,pbVar14);
            }
            *(ulong *)(pbVar28 + 0x10) = uVar27 + 1;
            *(byte **)(pbVar28 + uVar27 * 0x10 + 0x20) = pbVar23;
            *(ulong *)(pbVar28 + uVar27 * 0x10 + 0x28) = uVar18;
            uVar13 = 0x2c;
            uVar10 = 0xe100000000000000;
            pbStack_120 = pbVar28;
            func_0x000107c5fa80(0x2c,0xe100000000000000,uVar9,lStack_140);
            pbVar23 = pbVar6;
            func_0x000107c61558(pbVar6);
            pbStack_130 = pbVar6;
            func_0x00010018433c(uVar13,uVar10,0x644964656772656d,0xe900000000000073,pbVar23);
            func_0x000107c6142c(pbVar28);
            pbVar6 = pbStack_130;
          }
          else {
            func_0x000107c6142c(uVar18);
            puVar8 = puStack_138;
          }
        }
      }
    }
    uVar29 = 0x644964656772656d;
    uVar18 = 0xe900000000000073;
    uVar27 = uVar29;
    func_0x000101515f6c(0x644964656772656d,0xe900000000000073,puVar8);
    func_0x000107c6142c(puVar8);
    if (uVar18 != 0) {
      uVar17 = uVar27 & 0xffffffffffff;
      if ((uVar18 & 0x2000000000000000) != 0) {
        uVar17 = uVar18 >> 0x38 & 0xf;
      }
      if (uVar17 != 0) {
        uVar17 = 0xe900000000000073;
        func_0x000101515f6c(0x644964656772656d,0xe900000000000073,pbVar6);
        pbVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar17 != 0) {
          uVar20 = uVar29 & 0xffffffffffff;
          if ((uVar17 & 0x2000000000000000) != 0) {
            uVar20 = uVar17 >> 0x38 & 0xf;
          }
          if (uVar20 == 0) {
            func_0x000107c6142c(uVar17);
            pbVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            pbVar28 = (byte *)0x0;
            func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
            uVar20 = *(ulong *)(pbVar28 + 0x10);
            pbVar23 = pbVar28;
            if (*(ulong *)(pbVar28 + 0x18) >> 1 <= uVar20) {
              pbVar23 = (byte *)(ulong)(1 < *(ulong *)(pbVar28 + 0x18));
              pbStack_120 = pbVar28;
              func_0x0001000d182c(pbVar23,uVar20 + 1,1,pbVar28);
            }
            *(ulong *)(pbVar23 + 0x10) = uVar20 + 1;
            *(ulong *)(pbVar23 + uVar20 * 0x10 + 0x20) = uVar29;
            *(ulong *)(pbVar23 + uVar20 * 0x10 + 0x28) = uVar17;
            pbStack_120 = pbVar23;
          }
        }
        pbVar28 = pbVar23;
        func_0x000107c61558();
        pbVar30 = pbVar23;
        if (((ulong)pbVar28 & 1) == 0) {
          pbVar30 = (byte *)0x0;
          pbStack_120 = pbVar23;
          func_0x0001000d182c(0,*(long *)(pbVar23 + 0x10) + 1,1,pbVar23);
        }
        uVar29 = *(ulong *)(pbVar30 + 0x10);
        pbVar23 = pbVar30;
        if (*(ulong *)(pbVar30 + 0x18) >> 1 <= uVar29) {
          pbVar23 = (byte *)(ulong)(1 < *(ulong *)(pbVar30 + 0x18));
          pbStack_120 = pbVar30;
          func_0x0001000d182c(pbVar23,uVar29 + 1,1,pbVar30);
        }
        *(ulong *)(pbVar23 + 0x10) = uVar29 + 1;
        *(ulong *)(pbVar23 + uVar29 * 0x10 + 0x20) = uVar27;
        *(ulong *)(pbVar23 + uVar29 * 0x10 + 0x28) = uVar18;
        uVar13 = 0x2c;
        uVar10 = 0xe100000000000000;
        pbStack_120 = pbVar23;
        func_0x000107c5fa80(0x2c,0xe100000000000000,uVar9,lStack_140);
        pbVar28 = pbVar6;
        func_0x000107c61558(pbVar6);
        pbStack_130 = pbVar6;
        func_0x00010018433c(uVar13,uVar10,0x644964656772656d,0xe900000000000073,pbVar28);
        func_0x000107c6142c(puVar25);
        func_0x000107c6142c(pbVar23);
        return pbStack_130;
      }
      func_0x000107c6142c(uVar18);
    }
    func_0x000107c6142c(puVar25);
    return pbVar6;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102bf9778);
  (*pcVar4)();
}



/* Entry: 102bf98e8; end: 102bf9927;  */

undefined8 FUN_102bf98e8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102bf9928; end: 102bf9c2b;  */

undefined * FUN_102bf9928(undefined *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar13 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = ~uVar13;
    uVar13 = -uVar13;
    uVar9 = 0xffffffffffffffff;
    if (uVar13 < 0x40) {
      uVar9 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar9 = uVar9 & *puVar12;
    puVar10 = param_1;
    func_0x000107c61434();
    lStack_70 = 0;
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar10 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x000107c60288();
    uVar4 = 0;
    FUN_102bfdd1c(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar5 = uVar4;
    func_0x000100deaee4();
    func_0x000107c5fe30(&puStack_88,puVar10,uVar4,uVar5);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    uVar9 = uStack_68;
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = lStack_70;
  do {
    uVar13 = uVar9;
    lVar2 = lVar14;
    if ((long)param_1 < 0) {
      func_0x000107c602ac();
      if (puVar10 == (undefined *)0x0) {
LAB_102bf9be8:
        puStack_58 = (undefined *)0x0;
LAB_102bf9bec:
        func_0x000100deaf38(param_1,puVar12,uVar11,lVar14,uVar9);
        return puStack_98;
      }
      uVar5 = 0;
      puStack_90 = puVar10;
      FUN_102bfdd1c(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      func_0x000107c6147c(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
      puVar10 = puStack_58;
    }
    else {
      while (uVar13 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102bf9c2c);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar9 = 0;
          goto LAB_102bf9be8;
        }
        lVar2 = lVar1;
        uVar13 = puVar12[lVar1];
      }
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      puVar10 = *(undefined **)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 8 +
                 lVar2 * 0x200);
      puStack_58 = puVar10;
      func_0x000107c61174(puVar10);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar7;
    if (puVar10 == (undefined *)0x0) goto LAB_102bf9bec;
    func_0x000107c61168(puVar7);
    puVar6 = puVar10;
    func_0x000107c6148c(puVar10,puVar7);
    uVar9 = uVar13;
    lVar14 = lVar2;
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170();
    }
    else {
      puVar10 = puStack_98;
      func_0x000107c61550();
      if ((((int)puVar10 == 0) || ((long)puStack_98 < 0)) || (((ulong)puStack_98 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_98 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puStack_98 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_98) {
            puVar7 = puStack_98;
          }
          func_0x000107c60480(puVar7);
        }
        puVar10 = (undefined *)0x0;
        FUN_102bfb7f8(0,puVar7 + 1,1,puStack_98,0x112d59528,
                      &PTR__OBJC_CLASS___UIWindowScene_1126b6b80,0x112d59520,&UNK_10d9314f0);
        puStack_98 = puVar10;
      }
      uVar8 = (ulong)puStack_98 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar8 + 0x10);
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar13) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_102bfb7f8(puVar10,uVar13 + 1,1,puStack_98,0x112d59528,
                      &PTR__OBJC_CLASS___UIWindowScene_1126b6b80,0x112d59520,&UNK_10d9314f0);
        uVar8 = (ulong)puVar10 & 0xffffffffffffff8;
        puStack_98 = puVar10;
      }
      *(ulong *)(uVar8 + 0x10) = uVar13 + 1;
      *(undefined **)(uVar8 + uVar13 * 8 + 0x20) = puVar6;
    }
  } while( true );
}



/* Entry: 102bf9c2c; end: 102bf9dd3;  */

void FUN_102bf9c2c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0x6b72616d;
  if (cVar4 != '\x01') {
    uVar5 = 0x66666f;
  }
  uVar1 = 0xe400000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe300000000000000;
  }
  uVar2 = 0x656e757270;
  if (cVar4 != '\0') {
    uVar2 = (ulong)uVar5;
  }
  uVar3 = 0xe500000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 102bf9dd4; end: 102bf9e1f;  */

void FUN_102bf9dd4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar5 = 0x6b72616d;
  if (cVar4 != '\x01') {
    uVar5 = 0x66666f;
  }
  uVar1 = 0xe400000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe300000000000000;
  }
  uVar2 = 0x656e757270;
  if (cVar4 != '\0') {
    uVar2 = (ulong)uVar5;
  }
  uVar3 = 0xe500000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 102bf9e20; end: 102bfa057;  */

void FUN_102bf9e20(void)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0xeb00000000736e69;
  uVar4 = 0x616843656772656d;
  if (bVar2 != 2) {
    uVar5 = 0xea00000000006576;
    uVar4 = 0x6973736572676761;
  }
  uVar3 = 0x66666f;
  if (bVar2 != 0) {
    uVar3 = 0x65666173;
  }
  uVar1 = 0xe300000000000000;
  if (bVar2 != 0) {
    uVar1 = 0xe400000000000000;
  }
  if (bVar2 < 2) {
    uVar5 = uVar1;
    uVar4 = (ulong)uVar3;
  }
  func_0x000107c5fb58(auStack_68,uVar4,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c606a8();
  return;
}



/* Entry: 102bfa058; end: 102bfa0d3;  */

void FUN_102bfa058(ulong *param_1)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  uVar5 = 0xeb00000000736e69;
  uVar4 = 0x616843656772656d;
  if (bVar2 != 2) {
    uVar5 = 0xea00000000006576;
    uVar4 = 0x6973736572676761;
  }
  uVar3 = 0x66666f;
  if (bVar2 != 0) {
    uVar3 = 0x65666173;
  }
  uVar1 = 0xe300000000000000;
  if (bVar2 != 0) {
    uVar1 = 0xe400000000000000;
  }
  if (bVar2 < 2) {
    uVar5 = uVar1;
    uVar4 = (ulong)uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = uVar5;
  return;
}



/* Entry: 102bfa0d4; end: 102bfa79b;  */

undefined1  [16]
FUN_102bfa0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long extraout_x8;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined8 auStack_180 [2];
  undefined1 auStack_170 [4];
  undefined4 uStack_16c;
  undefined *puStack_168;
  double dStack_160;
  undefined8 uStack_158;
  undefined *puStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined *puStack_130;
  undefined1 *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined4 uStack_e4;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *apuStack_a0 [2];
  
  uStack_16c = SUB84(param_6,0);
  lVar4 = 0;
  uStack_e4 = param_5;
  uStack_d8 = param_10;
  uStack_c8 = param_7;
  uStack_c0 = param_8;
  uStack_b8 = param_9;
  func_0x000107c5eec8();
  lStack_120 = *(long *)(lVar4 + -8);
  lStack_118 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_120 + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_128 = auStack_170 + lVar4;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000102bf02e8();
  puVar5 = puVar6;
  apuStack_a0[0] = puVar6;
  FUN_102bfcb0c();
  puStack_168 = puVar5;
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar15 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar15 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar15 = puVar5;
    }
    func_0x000107c60480();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar5;
  if (puVar15 != (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
    uVar17 = (ulong)puStack_168 & 0xc000000000000001;
    uVar18 = (ulong)puStack_168 & 0xffffffffffffff8;
    puVar8 = puStack_168 + 0x20;
    dVar19 = 4.94065645841247e-324;
    uStack_158 = 2;
    dStack_160 = 4.94065645841247e-324;
    puStack_148 = puVar8;
    uStack_140 = uVar18;
    uStack_138 = uVar17;
    puStack_130 = puVar15;
    do {
      if (uVar17 == 0) {
        if (*(undefined **)(uVar18 + 0x10) <= puVar16) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102bfa6fc);
          (*pcVar3)();
        }
        puVar6 = *(undefined **)(puVar8 + (long)puVar16 * 8);
        func_0x000107c61174();
        uVar21 = param_2;
        uVar22 = param_3;
        uVar23 = param_4;
      }
      else {
        puVar6 = puVar16;
        param_6 = puStack_168;
        func_0x000102bfbcc8(puVar16,puStack_168,&PTR__OBJC_CLASS___UIWindow_1126c3e70,0x112d36e50);
        uVar21 = param_2;
        uVar22 = param_3;
        uVar23 = param_4;
      }
      if (SCARRY8((long)puVar16,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102bfa6f8);
        (*pcVar3)();
      }
      puVar7 = puVar6;
      func_0x000107c49eac();
      param_2 = uVar21;
      param_3 = uVar22;
      param_4 = uVar23;
      if (((int)puVar7 != 0) ||
         (puVar7 = puVar6, func_0x000107c3dc40(), puVar2 = puStack_128, param_2 = uVar21,
         param_3 = uVar22, param_4 = uVar23, dVar19 < 0.01)) {
        func_0x000107c61170(puVar6);
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar16 = puVar16 + 1;
        puVar7 = puVar5;
      }
      else {
        func_0x000107c5eec4(puStack_128);
        func_0x000107c5eeac();
        (**(code **)(lStack_120 + 8))(puVar2,lStack_118);
        puStack_d0 = puVar6;
        func_0x000107c61174();
        puVar15 = apuStack_a0[0];
        puVar8 = apuStack_a0[0];
        func_0x000107c61558(apuStack_a0[0]);
        puStack_a8 = puVar15;
        puStack_108 = param_6;
        puStack_100 = puVar7;
        FUN_102bfb5b8(puVar6,puVar7,param_6,puVar8);
        apuStack_a0[0] = puStack_a8;
        puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001001830b8();
        puStack_a8 = puVar15;
        FUN_102bf12a4(puVar6,&puStack_a8);
        func_0x000107c61174();
        puVar15 = puVar6;
        FUN_102bf23b0();
        if (((ulong)puVar15 & 1) != 0) {
          FUN_102bf2b04(puVar6,puVar6,uStack_c0,uStack_b8,uStack_d8,&puStack_a8);
        }
        func_0x000107c61170(puVar6);
        puStack_110 = puVar6;
        func_0x000107c5c3b0();
        func_0x000107c61180();
        uVar9 = 0;
        FUN_102bfdd1c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
        puVar15 = puVar6;
        func_0x000107c5fc54(puVar6,uVar9);
        func_0x000107c61170(puVar6);
        if ((ulong)puVar15 >> 0x3e == 0) {
          puVar6 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar6 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar15) {
            puVar6 = puVar15;
          }
          func_0x000107c60480();
        }
        puStack_f8 = puVar5;
        puStack_f0 = puVar16 + 1;
        func_0x000107c61434(puVar15);
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar6 != (undefined *)0x0) {
          uVar17 = 0;
          uStack_e0 = (ulong)puVar15 & 0xc000000000000001;
          puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
          do {
            if (uStack_e0 == 0) {
              if (*(ulong *)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102bfa6e4);
                (*pcVar3)();
              }
              uVar18 = *(ulong *)(puVar15 + uVar17 * 8 + 0x20);
              func_0x000107c61174(uVar18);
            }
            else {
              uVar18 = uVar17;
              func_0x000102bfbcc8(uVar17,puVar15,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
            }
            puVar16 = (undefined *)(uVar17 + 1);
            if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102bfa6e0);
              (*pcVar3)();
            }
            *(undefined ***)((long)auStack_180 + lVar4) = apuStack_a0;
            *(undefined **)((long)auStack_180 + lVar4 + 8) = puVar15;
            uVar13 = uVar17;
            FUN_102bfa79c(uVar17,uVar18,uStack_e4,puStack_d0,uStack_c8,uStack_c0,uStack_b8,uStack_d8
                         );
            func_0x000107c61170(uVar18);
            uVar18 = *(ulong *)(uVar13 + 0x10);
            lVar12 = *(long *)(puVar8 + 0x10);
            if (SCARRY8(lVar12,uVar18)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102bfa6e8);
              (*pcVar3)();
            }
            puVar5 = puVar8;
            func_0x000107c61558();
            if (((int)puVar5 == 0) ||
               (uVar11 = *(ulong *)(puVar8 + 0x18) >> 1, (long)uVar11 < (long)(lVar12 + uVar18))) {
              FUN_102bfb6d4();
              uVar11 = *(ulong *)(puVar5 + 0x18) >> 1;
              puVar8 = puVar5;
              if (*(long *)(uVar13 + 0x10) == 0) goto LAB_102bfa3b4;
LAB_102bfa494:
              if (uVar11 - *(long *)(puVar5 + 0x10) < uVar18) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102bfa6f0);
                (*pcVar3)();
              }
              func_0x000107c6140c(puVar5 + *(long *)(puVar5 + 0x10) * 0x58 + 0x20,uVar13 + 0x20,
                                  uVar18,&UNK_1105afeb0);
              func_0x000107c6142c(uVar13);
              if (uVar18 != 0) {
                if (SCARRY8(*(long *)(puVar5 + 0x10),uVar18)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102bfa6f4);
                  (*pcVar3)();
                }
                *(ulong *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + uVar18;
              }
            }
            else {
              puVar5 = puVar8;
              if (*(long *)(uVar13 + 0x10) != 0) goto LAB_102bfa494;
LAB_102bfa3b4:
              func_0x000107c6142c(uVar13);
              puVar5 = puVar8;
              if (uVar18 != 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102bfa6ec);
                (*pcVar3)();
              }
            }
            uVar17 = uVar17 + 1;
            puVar8 = puVar5;
          } while (puVar16 != puVar6);
        }
        func_0x000107c61430(puVar15,2);
        puVar6 = (undefined *)0x112efe128;
        func_0x0001000285a8(0x112efe128,&UNK_10db30988);
        func_0x000107c613fc();
        puVar8 = puStack_110;
        *(undefined8 *)(puVar6 + 0x18) = uStack_158;
        *(double *)(puVar6 + 0x10) = dStack_160;
        puVar16 = puStack_110;
        dVar20 = dStack_160;
        func_0x000107c614f0();
        puVar15 = (undefined *)0x112dab9f8;
        puStack_b0 = puVar16;
        func_0x0001000285a8(0x112dab9f8,&UNK_10db30990);
        ppuVar10 = &puStack_b0;
        func_0x000107c5fb18();
        param_6 = puVar15;
        FUN_102bfdd88();
        dVar19 = dVar20;
        param_2 = uVar21;
        param_3 = uVar22;
        param_4 = uVar23;
        func_0x000107c61170(puVar8);
        *(undefined ***)(puVar6 + 0x20) = ppuVar10;
        *(undefined **)(puVar6 + 0x28) = puVar15;
        *(undefined **)(puVar6 + 0x30) = puVar5;
        *(undefined **)(puVar6 + 0x38) = puStack_100;
        *(undefined **)(puVar6 + 0x40) = puStack_108;
        *(double *)(puVar6 + 0x48) = dVar20;
        *(undefined8 *)(puVar6 + 0x50) = uVar21;
        *(undefined8 *)(puVar6 + 0x58) = uVar22;
        *(undefined8 *)(puVar6 + 0x60) = uVar23;
        puVar6[0x68] = 0;
        *(undefined **)(puVar6 + 0x70) = puStack_a8;
        puVar15 = puStack_130;
        puVar16 = puStack_f0;
        uVar17 = uStack_138;
        puVar7 = puStack_f8;
        uVar18 = uStack_140;
        puVar8 = puStack_148;
      }
      uVar13 = *(ulong *)(puVar6 + 0x10);
      puVar14 = *(undefined **)(puVar7 + 0x10);
      puVar1 = puVar14 + uVar13;
      if (SCARRY8((long)puVar14,uVar13)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102bfa700);
        (*pcVar3)();
      }
      puVar5 = puVar7;
      func_0x000107c61558();
      if (((int)puVar5 == 0) ||
         (uVar11 = *(ulong *)(puVar7 + 0x18) >> 1, (long)uVar11 < (long)puVar1)) {
        param_6 = puVar14;
        if ((long)puVar14 <= (long)puVar1) {
          param_6 = puVar1;
        }
        FUN_102bfb6d4();
        uVar11 = *(ulong *)(puVar5 + 0x18) >> 1;
        puVar7 = puVar5;
        if (*(long *)(puVar6 + 0x10) == 0) goto LAB_102bfa1f4;
LAB_102bfa648:
        if (uVar11 - *(long *)(puVar5 + 0x10) < uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102bfa708);
          (*pcVar3)();
        }
        param_6 = puVar6 + 0x20;
        func_0x000107c6140c(puVar5 + *(long *)(puVar5 + 0x10) * 0x58 + 0x20,param_6,uVar13,
                            &UNK_1105afeb0);
        func_0x000107c6142c(puVar6);
        if (uVar13 != 0) {
          if (SCARRY8(*(long *)(puVar5 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102bfa70c);
            (*pcVar3)();
          }
          *(ulong *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + uVar13;
        }
      }
      else {
        puVar5 = puVar7;
        if (*(long *)(puVar6 + 0x10) != 0) goto LAB_102bfa648;
LAB_102bfa1f4:
        func_0x000107c6142c(puVar6);
        puVar5 = puVar7;
        if (uVar13 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102bfa704);
          (*pcVar3)();
        }
      }
      puVar6 = apuStack_a0[0];
    } while (puVar16 != puVar15);
  }
  func_0x000107c6142c(puStack_168);
  func_0x000107c61434(puVar6);
  puVar15 = puVar5;
  FUN_102bf3ae0(puVar5,uStack_16c,puVar6);
  func_0x000107c6142c(puVar6);
  func_0x000107c6142c(puVar5);
  auVar24._8_8_ = puVar6;
  auVar24._0_8_ = puVar15;
  return auVar24;
}



/* Entry: 102bfa79c; end: 102bfb30f;  */

undefined *
FUN_102bfa79c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,ulong param_6,char param_7,long param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 *param_13,
             ulong param_14)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong *puVar13;
  long extraout_x8;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong auStack_130 [2];
  undefined1 auStack_120 [8];
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  ulong uStack_c8;
  undefined *puStack_c0;
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
  
  puStack_d0 = param_13;
  lVar5 = 0;
  uVar15 = param_6;
  uStack_f8 = param_12;
  uStack_f0 = param_9;
  uStack_e8 = param_10;
  uStack_e0 = param_11;
  lStack_d8 = param_8;
  func_0x000107c5eec8();
  lVar17 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar16 = auStack_120 + lVar2;
  if (param_7 == '\0') {
    FUN_102bfd8d8();
    if (param_5 != (undefined *)0x0) {
      func_0x000107c61170();
      return PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    uVar15 = param_6;
    func_0x000107c49eac();
    if ((uVar15 & 1) != 0) {
      return PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    uVar15 = param_6;
    func_0x000107c3dc40();
    uVar20 = 0x3f847ae147ae147b;
    if (param_1 < 0.01) {
      return PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    func_0x000107c5eec4(puVar16);
    func_0x000107c5eeac();
    (**(code **)(lVar17 + 8))(puVar16,lVar5);
    func_0x000107c61174();
    func_0x000107c61434(param_14);
    puVar3 = puStack_d0;
    uVar7 = *puStack_d0;
    func_0x000107c61558(uVar7);
    puStack_c0 = (undefined *)*puVar3;
    *puVar3 = 0x8000000000000000;
    uStack_108 = uVar15;
    FUN_102bfb5b8(param_6,uVar15,param_14,uVar7);
    uStack_110 = param_14;
    func_0x000107c6142c(param_14);
    *puVar3 = puStack_c0;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8();
    puStack_c0 = puVar9;
    FUN_102bf12a4(param_6,&puStack_c0);
    if (lStack_d8 != 0) {
      lVar5 = lStack_d8;
      func_0x000107c61174(lStack_d8);
      uVar15 = param_6;
      FUN_102bf23b0(param_6,uStack_f0,uStack_e8,uStack_e0);
      if ((uVar15 & 1) != 0) {
        FUN_102bf2b04(param_6,lVar5,uStack_e8,uStack_e0,uStack_f8,&puStack_c0);
      }
      func_0x000107c61170(lVar5);
    }
    uVar15 = param_6;
    func_0x000107c5c3b0();
    func_0x000107c61180();
    uVar7 = 0;
    FUN_102bfdd1c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    uVar10 = uVar15;
    func_0x000107c5fc54(uVar15,uVar7);
    func_0x000107c61170(uVar15);
    if (uVar10 >> 0x3e == 0) {
      uVar15 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar15 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar15 = uVar10;
      }
      func_0x000107c60480();
    }
    uStack_118 = param_6;
    func_0x000107c61434(uVar10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar15 != 0) {
      uVar18 = 0;
      uStack_100 = uVar10 & 0xc000000000000001;
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        if (uStack_100 == 0) {
          if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfb2a8);
            (*pcVar4)();
          }
          uVar8 = *(ulong *)(uVar10 + uVar18 * 8 + 0x20);
          func_0x000107c61174(uVar8);
        }
        else {
          uVar8 = uVar18;
          func_0x000102bfbcc8(uVar18,uVar10,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
        }
        uVar1 = uVar18 + 1;
        if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfb2a0);
          (*pcVar4)();
        }
        *(ulong *)((long)auStack_130 + lVar2 + 8) = uVar10;
        *(undefined8 **)((long)auStack_130 + lVar2) = puStack_d0;
        uVar11 = uVar18;
        FUN_102bfa79c(uVar18,uVar8,0,lStack_d8,uStack_f0,uStack_e8,uStack_e0,uStack_f8);
        func_0x000107c61170(uVar8);
        uVar8 = *(ulong *)(uVar11 + 0x10);
        lVar5 = *(long *)(puVar12 + 0x10);
        if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfb2b0);
          (*pcVar4)();
        }
        puVar9 = puVar12;
        func_0x000107c61558();
        if (((int)puVar9 == 0) ||
           (uVar14 = *(ulong *)(puVar12 + 0x18) >> 1, (long)uVar14 < (long)(lVar5 + uVar8))) {
          FUN_102bfb6d4();
          uVar14 = *(ulong *)(puVar9 + 0x18) >> 1;
          puVar12 = puVar9;
          if (*(long *)(uVar11 + 0x10) == 0) goto LAB_102bfb080;
LAB_102bfb160:
          if (uVar14 - *(long *)(puVar9 + 0x10) < uVar8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfb2c0);
            (*pcVar4)();
          }
          func_0x000107c6140c(puVar9 + *(long *)(puVar9 + 0x10) * 0x58 + 0x20,uVar11 + 0x20,uVar8,
                              &UNK_1105afeb0);
          func_0x000107c6142c(uVar11);
          if (uVar8 != 0) {
            if (SCARRY8(*(long *)(puVar9 + 0x10),uVar8)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfb2c8);
              (*pcVar4)();
            }
            *(ulong *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + uVar8;
          }
        }
        else {
          puVar9 = puVar12;
          if (*(long *)(uVar11 + 0x10) != 0) goto LAB_102bfb160;
LAB_102bfb080:
          func_0x000107c6142c(uVar11);
          puVar9 = puVar12;
          if (uVar8 != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfb2b8);
            (*pcVar4)();
          }
        }
        uVar18 = uVar18 + 1;
        puVar12 = puVar9;
      } while (uVar1 != uVar15);
    }
  }
  else if (param_7 == '\x01') {
    FUN_102bfd8d8();
    if (param_5 != (undefined *)0x0) {
      puVar9 = (undefined *)0x112efe128;
      func_0x0001000285a8(0x112efe128,&UNK_10db30988);
      func_0x000107c613fc();
      *(undefined8 *)(puVar9 + 0x18) = 2;
      *(undefined8 *)(puVar9 + 0x10) = 1;
      puVar12 = param_5;
      func_0x000107c614f0();
      uVar20 = 0x112dab9f8;
      puStack_c0 = puVar12;
      func_0x0001000285a8(0x112dab9f8,&UNK_10db30990);
      ppuVar6 = &puStack_c0;
      func_0x000107c5fb18(ppuVar6,uVar20);
      FUN_102bfdb1c(&puStack_c0,param_6,ppuVar6,uVar20,puStack_d0);
      func_0x000107c6142c(uVar20);
      func_0x000107c61170(param_5);
      *(undefined8 *)(puVar9 + 0x48) = uStack_98;
      *(undefined8 *)(puVar9 + 0x40) = uStack_a0;
      *(undefined8 *)(puVar9 + 0x58) = uStack_88;
      *(undefined8 *)(puVar9 + 0x50) = uStack_90;
      *(undefined8 *)(puVar9 + 0x68) = uStack_78;
      *(undefined8 *)(puVar9 + 0x60) = uStack_80;
      *(undefined8 *)(puVar9 + 0x70) = uStack_70;
      *(undefined8 *)(puVar9 + 0x28) = uStack_b8;
      *(undefined **)(puVar9 + 0x20) = puStack_c0;
      *(undefined8 *)(puVar9 + 0x38) = uStack_a8;
      *(undefined8 *)(puVar9 + 0x30) = uStack_b0;
      return puVar9;
    }
    uVar15 = param_6;
    func_0x000107c49eac();
    if ((uVar15 & 1) != 0) {
      return PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    uVar15 = param_6;
    func_0x000107c3dc40();
    uVar20 = 0x3f847ae147ae147b;
    if (param_1 < 0.01) {
      return PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    func_0x000107c5eec4(puVar16);
    func_0x000107c5eeac();
    (**(code **)(lVar17 + 8))(puVar16,lVar5);
    func_0x000107c61174();
    func_0x000107c61434(param_14);
    puVar3 = puStack_d0;
    uVar7 = *puStack_d0;
    func_0x000107c61558(uVar7);
    puStack_c0 = (undefined *)*puVar3;
    *puVar3 = 0x8000000000000000;
    uStack_108 = uVar15;
    FUN_102bfb5b8(param_6,uVar15,param_14,uVar7);
    uStack_110 = param_14;
    func_0x000107c6142c(param_14);
    *puVar3 = puStack_c0;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8();
    puStack_c0 = puVar9;
    FUN_102bf12a4(param_6,&puStack_c0);
    if (lStack_d8 != 0) {
      lVar5 = lStack_d8;
      func_0x000107c61174(lStack_d8);
      uVar15 = param_6;
      FUN_102bf23b0(param_6,uStack_f0,uStack_e8,uStack_e0);
      if ((uVar15 & 1) != 0) {
        FUN_102bf2b04(param_6,lVar5,uStack_e8,uStack_e0,uStack_f8,&puStack_c0);
      }
      func_0x000107c61170(lVar5);
    }
    uVar15 = param_6;
    func_0x000107c5c3b0();
    func_0x000107c61180();
    uVar7 = 0;
    FUN_102bfdd1c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    uVar10 = uVar15;
    func_0x000107c5fc54(uVar15,uVar7);
    func_0x000107c61170(uVar15);
    if (uVar10 >> 0x3e == 0) {
      uVar15 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar15 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar15 = uVar10;
      }
      func_0x000107c60480();
    }
    uStack_118 = param_6;
    func_0x000107c61434(uVar10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar15 != 0) {
      uVar18 = 0;
      uStack_100 = uVar10 & 0xc000000000000001;
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        if (uStack_100 == 0) {
          if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfb2a4);
            (*pcVar4)();
          }
          uVar8 = *(ulong *)(uVar10 + uVar18 * 8 + 0x20);
          func_0x000107c61174(uVar8);
        }
        else {
          uVar8 = uVar18;
          func_0x000102bfbcc8(uVar18,uVar10,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
        }
        uVar1 = uVar18 + 1;
        if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfb29c);
          (*pcVar4)();
        }
        *(ulong *)((long)auStack_130 + lVar2 + 8) = uVar10;
        *(undefined8 **)((long)auStack_130 + lVar2) = puStack_d0;
        uVar11 = uVar18;
        FUN_102bfa79c(uVar18,uVar8,1,lStack_d8,uStack_f0,uStack_e8,uStack_e0,uStack_f8);
        func_0x000107c61170(uVar8);
        uVar8 = *(ulong *)(uVar11 + 0x10);
        lVar5 = *(long *)(puVar12 + 0x10);
        if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfb2ac);
          (*pcVar4)();
        }
        puVar9 = puVar12;
        func_0x000107c61558();
        if (((int)puVar9 == 0) ||
           (uVar14 = *(ulong *)(puVar12 + 0x18) >> 1, (long)uVar14 < (long)(lVar5 + uVar8))) {
          FUN_102bfb6d4();
          uVar14 = *(ulong *)(puVar9 + 0x18) >> 1;
          puVar12 = puVar9;
          if (*(long *)(uVar11 + 0x10) == 0) goto LAB_102bfad78;
LAB_102bfae58:
          if (uVar14 - *(long *)(puVar9 + 0x10) < uVar8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfb2bc);
            (*pcVar4)();
          }
          func_0x000107c6140c(puVar9 + *(long *)(puVar9 + 0x10) * 0x58 + 0x20,uVar11 + 0x20,uVar8,
                              &UNK_1105afeb0);
          func_0x000107c6142c(uVar11);
          if (uVar8 != 0) {
            if (SCARRY8(*(long *)(puVar9 + 0x10),uVar8)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfb2c4);
              (*pcVar4)();
            }
            *(ulong *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + uVar8;
          }
        }
        else {
          puVar9 = puVar12;
          if (*(long *)(uVar11 + 0x10) != 0) goto LAB_102bfae58;
LAB_102bfad78:
          func_0x000107c6142c(uVar11);
          puVar9 = puVar12;
          if (uVar8 != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfb2b4);
            (*pcVar4)();
          }
        }
        uVar18 = uVar18 + 1;
        puVar12 = puVar9;
      } while (uVar1 != uVar15);
    }
  }
  else {
    uVar10 = param_6;
    func_0x000107c49eac();
    if ((uVar10 & 1) != 0) {
      return PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    uVar10 = param_6;
    func_0x000107c3dc40();
    uVar20 = 0x3f847ae147ae147b;
    if (param_1 < 0.01) {
      return PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    func_0x000107c5eec4(puVar16);
    func_0x000107c5eeac();
    (**(code **)(lVar17 + 8))(puVar16,lVar5);
    func_0x000107c61434(uVar15);
    func_0x000107c61174();
    puVar3 = puStack_d0;
    uVar7 = *puStack_d0;
    func_0x000107c61558(uVar7);
    puStack_c0 = (undefined *)*puVar3;
    *puVar3 = 0x8000000000000000;
    uStack_108 = uVar10;
    FUN_102bfb5b8(param_6,uVar10,uVar15,uVar7);
    uStack_110 = uVar15;
    func_0x000107c6142c(uVar15);
    *puVar3 = puStack_c0;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8();
    puStack_c0 = puVar9;
    FUN_102bf12a4(param_6,&puStack_c0);
    if (lStack_d8 != 0) {
      lVar5 = lStack_d8;
      func_0x000107c61174(lStack_d8);
      uVar15 = param_6;
      FUN_102bf23b0(param_6,uStack_f0,uStack_e8,uStack_e0);
      if ((uVar15 & 1) != 0) {
        FUN_102bf2b04(param_6,lVar5,uStack_e8,uStack_e0,uStack_f8,&puStack_c0);
      }
      func_0x000107c61170(lVar5);
    }
    uVar15 = param_6;
    func_0x000107c5c3b0();
    func_0x000107c61180();
    uVar7 = 0;
    FUN_102bfdd1c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    uVar10 = uVar15;
    func_0x000107c5fc54(uVar15,uVar7);
    func_0x000107c61170(uVar15);
    if (uVar10 >> 0x3e == 0) {
      uVar15 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar15 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar15 = uVar10;
      }
      func_0x000107c60480();
    }
    uStack_118 = param_6;
    func_0x000107c61434(uVar10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar15 != 0) {
      uVar18 = 0;
      uStack_100 = uVar10 & 0xc000000000000001;
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        if (uStack_100 == 0) {
          if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfb288);
            (*pcVar4)();
          }
          uVar8 = *(ulong *)(uVar10 + uVar18 * 8 + 0x20);
          func_0x000107c61174(uVar8);
        }
        else {
          uVar8 = uVar18;
          func_0x000102bfbcc8(uVar18,uVar10,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
        }
        uVar1 = uVar18 + 1;
        if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfb284);
          (*pcVar4)();
        }
        *(ulong *)((long)auStack_130 + lVar2 + 8) = uVar10;
        *(undefined8 **)((long)auStack_130 + lVar2) = puStack_d0;
        uVar11 = uVar18;
        FUN_102bfa79c(uVar18,uVar8,2,lStack_d8,uStack_f0,uStack_e8,uStack_e0,uStack_f8);
        func_0x000107c61170(uVar8);
        uVar8 = *(ulong *)(uVar11 + 0x10);
        lVar5 = *(long *)(puVar12 + 0x10);
        if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfb28c);
          (*pcVar4)();
        }
        puVar9 = puVar12;
        func_0x000107c61558();
        if (((int)puVar9 == 0) ||
           (uVar14 = *(ulong *)(puVar12 + 0x18) >> 1, (long)uVar14 < (long)(lVar5 + uVar8))) {
          FUN_102bfb6d4();
          uVar14 = *(ulong *)(puVar9 + 0x18) >> 1;
          puVar12 = puVar9;
          if (*(long *)(uVar11 + 0x10) == 0) goto LAB_102bfaa94;
LAB_102bfab74:
          if (uVar14 - *(long *)(puVar9 + 0x10) < uVar8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfb294);
            (*pcVar4)();
          }
          func_0x000107c6140c(puVar9 + *(long *)(puVar9 + 0x10) * 0x58 + 0x20,uVar11 + 0x20,uVar8,
                              &UNK_1105afeb0);
          func_0x000107c6142c(uVar11);
          if (uVar8 != 0) {
            if (SCARRY8(*(long *)(puVar9 + 0x10),uVar8)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfb298);
              (*pcVar4)();
            }
            *(ulong *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + uVar8;
          }
        }
        else {
          puVar9 = puVar12;
          if (*(long *)(uVar11 + 0x10) != 0) goto LAB_102bfab74;
LAB_102bfaa94:
          func_0x000107c6142c(uVar11);
          puVar9 = puVar12;
          if (uVar8 != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102bfb290);
            (*pcVar4)();
          }
        }
        uVar18 = uVar18 + 1;
        puVar12 = puVar9;
      } while (uVar1 != uVar15);
    }
  }
  func_0x000107c61430(uVar10,2);
  puVar12 = (undefined *)0x112efe128;
  func_0x0001000285a8(0x112efe128,&UNK_10db30988);
  func_0x000107c613fc();
  uVar19 = 1;
  *(undefined8 *)(puVar12 + 0x18) = 2;
  *(undefined8 *)(puVar12 + 0x10) = 1;
  uVar15 = uStack_118;
  func_0x000107c614f0();
  uVar7 = 0x112dab9f8;
  uStack_c8 = uVar15;
  func_0x0001000285a8(0x112dab9f8,&UNK_10db30990);
  puVar13 = &uStack_c8;
  func_0x000107c5fb18();
  FUN_102bfdd88();
  *(ulong **)(puVar12 + 0x20) = puVar13;
  *(undefined8 *)(puVar12 + 0x28) = uVar7;
  *(undefined **)(puVar12 + 0x30) = puVar9;
  *(ulong *)(puVar12 + 0x38) = uStack_108;
  *(ulong *)(puVar12 + 0x40) = uStack_110;
  *(undefined8 *)(puVar12 + 0x48) = uVar19;
  *(undefined8 *)(puVar12 + 0x50) = uVar20;
  *(undefined8 *)(puVar12 + 0x58) = param_3;
  *(undefined8 *)(puVar12 + 0x60) = param_4;
  puVar12[0x68] = 0;
  *(undefined **)(puVar12 + 0x70) = puStack_c0;
  return puVar12;
}



/* Entry: 102bfb310; end: 102bfb47f;  */

void FUN_102bfb310(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x74696b6975;
  if (cVar3 != '\x01') {
    uVar1 = 0x6269737365636361;
  }
  uVar2 = 0xe500000000000000;
  if (cVar3 != '\x01') {
    uVar2 = 0xed00007974696c69;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102bfb480; end: 102bfb4f7;  */

void FUN_102bfb480(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102bfb4f8; end: 102bfb53f;  */

void FUN_102bfb4f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x74696b6975;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6269737365636361;
  }
  uVar2 = 0xe500000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xed00007974696c69;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102bfb540; end: 102bfb5b7;  */

void FUN_102bfb540(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102bfdd1c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102bfb5b8; end: 102bfb6d3;  */

void FUN_102bfb5b8(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfb690);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar4) {
    FUN_102bef680(lVar4,param_4 & 1);
    uVar7 = param_3;
    func_0x000100029284();
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bfb658);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102bef1d0();
    lVar4 = *unaff_x20;
    goto joined_r0x000102bfb6a4;
  }
  lVar4 = *unaff_x20;
joined_r0x000102bfb6a4:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8);
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  FUN_102bf7bc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102bfb6d4; end: 102bfb7f7;  */

undefined * FUN_102bfb6d4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102bfb7f8);
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
    puVar3 = (undefined *)0x112efe128;
    func_0x0001000285a8(0x112efe128,&UNK_10db30988);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x58) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1105afeb0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x58 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x58);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}


