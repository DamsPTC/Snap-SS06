/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10192b4a0; end: 10192b4e7;  */

void FUN_10192b4a0(void)

{
  long unaff_x20;
  
  FUN_10192ba58();
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10192b4e8; end: 10192b96f;  */

void FUN_10192b4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  long extraout_x8;
  long lVar12;
  long lVar13;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 uVar15;
  long extraout_x12;
  code *pcVar16;
  long unaff_x20;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long alStack_130 [4];
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = 0;
  uStack_100 = param_3;
  func_0x000107c5f7fc();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = (long)alStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar14 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f7f0();
  lStack_110 = *(long *)(lVar4 + -8);
  lStack_108 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_110 + 0x40));
  puVar18 = (undefined8 *)(lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  func_0x000107c5f83c();
  alStack_130[2] = *(long *)(lVar4 + -8);
  alStack_130[3] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_130[2] + 0x40));
  lVar17 = (long)puVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar17 - extraout_x12;
  lVar4 = 0;
  func_0x000107c5fffc();
  puVar1 = PTR___sSo18OS_dispatch_sourceC8DispatchE10TimerFlagsVMa_11034f9a8;
  alStack_130[1] = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_130[1] + 0x40));
  lVar20 = lVar19 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  FUN_10192b970(param_1,param_2);
  lVar5 = 0;
  FUN_10192cd68(0,0x112d60c68,&PTR__OBJC_CLASS___OS_dispatch_source_1126a6458);
  uVar6 = 0;
  alStack_130[0] = lVar5;
  FUN_10192cd68(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar10 = 0x112d60c70;
  FUN_10192cdc4(0x112d60c70,puVar1,
                PTR___sSo18OS_dispatch_sourceC8DispatchE10TimerFlagsVs10SetAlgebraACMc_11034f9b8);
  uVar15 = 0x112d60c78;
  func_0x0001000285a8(0x112d60c78,&UNK_10db286c0);
  uVar7 = 0x112d60c80;
  func_0x00010192ce04(0x112d60c80,0x112d60c78,&UNK_10db286c0);
  func_0x000107c60264(lVar20,&puStack_98,uVar15,uVar7,lVar4,uVar10);
  lVar8 = lVar20;
  func_0x000107c60000(lVar20,uVar6);
  func_0x000107c61170(uVar6);
  (**(code **)(alStack_130[1] + 8))(lVar20,lVar4);
  lVar20 = lVar8;
  func_0x000107c614f0(lVar8);
  func_0x000107c5f830(lVar17);
  func_0x000107c5f858(lVar19,lVar17,uStack_100);
  lVar4 = alStack_130[3];
  pcVar16 = *(code **)(alStack_130[2] + 8);
  (*pcVar16)(lVar17,alStack_130[3]);
  *puVar18 = 0;
  lVar17 = lStack_108;
  lVar5 = lStack_110;
  (**(code **)(lStack_110 + 0x68))
            (puVar18,*(undefined4 *)
                      PTR___s8Dispatch0A12TimeIntervalO11nanosecondsyACSicACmFWC_11034f768,
             lStack_108);
  func_0x000107c60080(0x7ff0000000000000,lVar19,puVar18,lVar20);
  (**(code **)(lVar5 + 8))(puVar18,lVar17);
  (*pcVar16)(lVar19,lVar4);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_110413670;
  ppuVar9 = &puStack_98;
  uStack_78 = param_4;
  uStack_70 = param_5;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c6157c(param_5);
  func_0x000107c5f808(lVar14);
  func_0x0001002661b0(lVar12,lVar20);
  func_0x000107c60018(lVar14,lVar12,ppuVar9,lVar20);
  func_0x000107c60bd0(ppuVar9);
  (**(code **)(lVar11 + 8))(lVar12,lVar2);
  (**(code **)(lVar13 + 8))(lVar14,lVar3);
  func_0x000107c61574(uStack_70);
  func_0x000107c60020(lVar20);
  func_0x000107c61428(unaff_x20 + 0x10,&puStack_98,0x21,0);
  func_0x000107c61434(param_2);
  func_0x000107c615f0(lVar8);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61558(uVar10);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0x8000000000000000;
  FUN_10192bdc0(lVar8,param_1,param_2,uVar10);
  func_0x000107c6142c(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar15;
  func_0x000107c614a8(&puStack_98);
  func_0x000107c615e8(lVar8);
  return;
}



/* Entry: 10192b970; end: 10192ba57;  */

void FUN_10192b970(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar3 + 0x10) != 0) {
    func_0x000107c61434(lVar3);
    lVar1 = param_1;
    uVar2 = param_2;
    func_0x000100029284();
    if ((uVar2 & 1) == 0) {
      func_0x000107c6142c(lVar3);
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + lVar1 * 8);
      func_0x000107c615f0(uVar4);
      func_0x000107c6142c(lVar3);
      func_0x000107c614f0(uVar4);
      func_0x000107c6001c();
      func_0x000107c61428(unaff_x20 + 0x10,auStack_70,0x21,0);
      FUN_10192bc3c(param_1,param_2);
      func_0x000107c614a8(auStack_70);
      func_0x000107c615e8(uVar4);
      func_0x000107c615e8(param_1);
    }
  }
  return;
}



/* Entry: 10192ba58; end: 10192bbc3;  */

void FUN_10192ba58(void)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,1,0);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  puVar8 = (ulong *)(lVar7 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar12 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar12 = uVar12 & *puVar8;
  func_0x000107c61438(lVar7,2);
  lVar9 = 0;
  lVar1 = lVar9;
  while( true ) {
    for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar1 << 6;
      uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0x30) + uVar5 * 0x10 + 8);
      uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar5 * 8);
      uVar4 = uVar6;
      func_0x000107c614f0(uVar6);
      func_0x000107c61434(uVar10);
      func_0x000107c615f0(uVar6);
      func_0x000107c6001c(uVar4);
      func_0x000107c615e8(uVar6);
      func_0x000107c6142c(uVar10);
      lVar9 = lVar1;
    }
    bVar3 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar3) break;
    if ((long)(0x3f - uVar11 >> 6) <= lVar1) {
      func_0x000107c6142c(lVar7);
      FUN_10192ce48(lVar7,puVar8,~uVar11,lVar9,0);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
      *(undefined **)(unaff_x20 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      func_0x000107c6142c(uVar4);
      return;
    }
    uVar12 = puVar8[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10192bbc4);
  (*pcVar2)();
}



/* Entry: 10192bbc4; end: 10192bc3b;  */

void FUN_10192bbc4(ulong param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar3 = (undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 0x28);
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  puVar3[1] = param_2[1];
  *puVar3 = uVar4;
  puVar3[3] = uVar6;
  puVar3[2] = uVar5;
  puVar3[4] = param_2[4];
  func_0x000100102924(param_3,*(long *)(param_4 + 0x38) + param_1 * 0x20);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10192bc3c);
  (*pcVar2)();
}



/* Entry: 10192bc3c; end: 10192bcf7;  */

undefined8 FUN_10192bc3c(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_10192c1bc();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    FUN_10192ca14(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 10192bcf8; end: 10192bdbf;  */

void FUN_10192bcf8(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100df95d0(param_2);
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
      func_0x000101228228();
    }
    func_0x0001007bbff0(*(long *)(lVar2 + 0x30) + param_2 * 0x28);
    func_0x000100102924(*(long *)(lVar2 + 0x38) + param_2 * 0x20,param_1);
    func_0x00010192cbc4(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Entry: 10192bdc0; end: 10192bf0f;  */

void FUN_10192bdc0(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10192be98);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_10192c4b4(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10192be60);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_10192c1bc();
    lVar6 = *unaff_x20;
    goto joined_r0x00010192beac;
  }
  lVar6 = *unaff_x20;
joined_r0x00010192beac:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10192bf10);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10192bf10; end: 10192c093;  */

void FUN_10192bf10(undefined8 param_1,byte param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  uint param_6)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_4;
  uVar4 = param_5;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10192c004);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_10192c750(lVar6,param_6 & 1);
    uVar3 = param_4;
    uVar8 = param_5;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10192bfbc);
      (*pcVar2)();
    }
  }
  else if ((param_6 & 1) == 0) {
    func_0x00010192c32c();
    lVar6 = *unaff_x20;
    goto joined_r0x00010192c018;
  }
  lVar6 = *unaff_x20;
joined_r0x00010192c018:
  if ((uVar4 & 1) != 0) {
    puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 0x18);
    *puVar7 = param_1;
    *(byte *)(puVar7 + 1) = param_2 & 1;
    puVar7[2] = param_3;
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 0x18);
  *puVar7 = param_1;
  *(byte *)(puVar7 + 1) = param_2 & 1;
  puVar7[2] = param_3;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10192c094);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_5);
  return;
}



/* Entry: 10192c094; end: 10192c1bb;  */

undefined8 * FUN_10192c094(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_68 [40];
  
  lVar6 = *unaff_x20;
  puVar2 = param_2;
  puVar3 = param_2;
  func_0x000100df95d0();
  lVar4 = *(long *)(lVar6 + 0x10);
  uVar5 = (ulong)~(uint)puVar3 & 1;
  lVar7 = lVar4 + uVar5;
  if (SCARRY8(lVar4,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10192c168);
    (*pcVar1)();
  }
  if (*(long *)(lVar6 + 0x18) < lVar7) {
    param_3 = param_3 & 1;
    func_0x0001012283cc(lVar7);
    puVar2 = param_2;
    func_0x000100df95d0();
    if (((uint)puVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___ss11AnyHashableVN_11034e448);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10192c128);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000101228228();
    lVar7 = *unaff_x20;
    goto joined_r0x00010192c17c;
  }
  lVar7 = *unaff_x20;
joined_r0x00010192c17c:
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + (long)puVar2 * 0x20);
    func_0x000100183ab8(puVar2);
    uVar8 = *param_1;
    uVar10 = param_1[3];
    uVar9 = param_1[2];
    puVar2[1] = param_1[1];
    *puVar2 = uVar8;
    puVar2[3] = uVar10;
    puVar2[2] = uVar9;
    return puVar2;
  }
  func_0x0001007bbd18(param_2,auStack_68);
  FUN_10192bbc4(puVar2,auStack_68,param_1,lVar7);
  return puVar2;
}



/* Entry: 10192c1bc; end: 10192c4b3;  */

void FUN_10192c1bc(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112dd52b8,&UNK_10d997790);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_10192c298;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c615f0(uVar12);
        if (uVar8 != 0) break;
LAB_10192c298:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10192c32c);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10192c304;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_10192c304:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10192c4b4; end: 10192c74f;  */

void FUN_10192c4b4(long param_1,ulong param_2)

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
  uVar6 = 0x112dd52b8;
  func_0x0001000285a8(0x112dd52b8,&UNK_10d997790);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10192c71c:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10192c74c);
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
          goto LAB_10192c71c;
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
      func_0x000107c615f0(uVar18);
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10192c750);
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



/* Entry: 10192c750; end: 10192ca13;  */

void FUN_10192c750(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x20;
  long lVar17;
  ulong uVar18;
  ulong *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auStack_b8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112dd52c0;
  func_0x0001000285a8(0x112dd52c0,&UNK_10d9977a0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10192c9dc:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar19 = (ulong *)(lVar17 + 0x40);
  uVar14 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar18 = uVar18 & *puVar19;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar20 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10192ca10);
          (*pcVar5)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar20) {
          if ((param_2 & 1) != 0) {
            uVar18 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar19 = -1L << (uVar18 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar19,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_10192c9dc;
        }
        uVar18 = puVar19[lVar20];
        lVar10 = lVar10 + 1;
      } while (uVar18 == 0);
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar20 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar20 << 6;
    puVar11 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar11;
    uVar2 = puVar11[1];
    puVar11 = (undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 0x18);
    uVar21 = *puVar11;
    uVar3 = *(undefined1 *)(puVar11 + 1);
    uVar12 = puVar11[2];
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar2);
    }
    func_0x000107c6068c(auStack_b8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_b8;
    func_0x000107c5fb58(puVar8,uVar6,uVar2);
    func_0x000107c606a8();
    uVar16 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar15 = (ulong)puVar8 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar15 >> 6;
    uVar9 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar1 + uVar13 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar16 >> 6;
      do {
        uVar15 = uVar13 + 1;
        if ((uVar15 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10192ca14);
          (*pcVar5)();
        }
        uVar13 = 0;
        if (uVar15 != uVar9) {
          uVar13 = uVar15;
        }
        bVar4 = (bool)(uVar15 == uVar9 | bVar4);
        uVar15 = *(ulong *)(lVar1 + uVar13 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar13 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar13) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar13);
    puVar11 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar11 = uVar6;
    puVar11[1] = uVar2;
    puVar11 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 0x18);
    *puVar11 = uVar21;
    *(undefined1 *)(puVar11 + 1) = uVar3;
    puVar11[2] = uVar12;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar20;
  } while( true );
}



/* Entry: 10192ca14; end: 10192cd67;  */

void FUN_10192ca14(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_10192cb08:
          if ((long)param_1 < (long)uVar8) goto LAB_10192ca90;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 8);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar9)) {
          *puVar2 = *puVar3;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_10192cb08;
LAB_10192ca90:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10192cbc4);
  (*pcVar5)();
}



/* Entry: 10192cd68; end: 10192cda7;  */

void FUN_10192cd68(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10192cda8; end: 10192cdc3;  */

void FUN_10192cda8(long param_1,long param_2)

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



/* Entry: 10192cdc4; end: 10192ce47;  */

void FUN_10192cdc4(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10192ce48; end: 10192ce4f;  */

void FUN_10192ce48(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10192ce50; end: 10192ce93;  */

void FUN_10192ce50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10192ce94; end: 10192cee3;  */

void FUN_10192ce94(undefined8 param_1,undefined8 param_2)

{
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 != 0) {
    func_0x000107c5ce20(lStack_28,param_2,param_1);
    func_0x000107c615e8(lStack_28);
  }
  return;
}



/* Entry: 10192cee4; end: 10192d0fb;  */

void FUN_10192cee4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong *extraout_x8;
  ulong uVar4;
  undefined1 auStack_4588 [6096];
  undefined1 auStack_2db8 [2744];
  undefined1 auStack_2300 [2936];
  undefined8 uStack_1788;
  undefined8 uStack_1780;
  undefined8 uStack_1778;
  undefined8 uStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  undefined8 uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  undefined8 uStack_1740;
  undefined8 uStack_1738;
  undefined8 uStack_1730;
  undefined8 uStack_1728;
  undefined8 uStack_1720;
  undefined8 uStack_1718;
  undefined8 uStack_1710;
  undefined8 uStack_1708;
  undefined8 uStack_1700;
  undefined8 uStack_16f8;
  undefined8 uStack_16f0;
  undefined8 uStack_16e8;
  undefined8 uStack_16e0;
  undefined8 uStack_16d8;
  undefined8 uStack_16d0;
  undefined8 uStack_16c8;
  undefined8 uStack_16c0;
  undefined8 uStack_16b0;
  undefined8 uStack_16a8;
  undefined8 uStack_16a0;
  undefined8 uStack_1698;
  undefined8 uStack_1690;
  undefined8 uStack_1688;
  undefined1 auStack_1680 [2744];
  undefined1 auStack_bc8 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  func_0x0001018a91f0(auStack_1680);
  func_0x000107c610b4(auStack_2db8,auStack_1680,0xab2);
  FUN_10189b438(auStack_bc8);
  func_0x000107c610b4(auStack_2300,auStack_bc8,0xb78);
  uStack_1780 = 0;
  uStack_1788 = 0;
  uStack_1778 = 1;
  uStack_1768 = 0;
  uStack_1770 = 0;
  uStack_1758 = 0;
  uStack_1760 = 0;
  uStack_1748 = 0;
  uStack_1750 = 0;
  uStack_1738 = 0;
  uStack_1740 = 0;
  uStack_1730 = 0;
  uStack_1728 = 1;
  uStack_1718 = 0;
  uStack_1720 = 0;
  uStack_1708 = 0;
  uStack_1710 = 0;
  uStack_16f8 = 0;
  uStack_1700 = 0;
  uStack_16e8 = 0;
  uStack_16f0 = 0;
  uStack_16d8 = 0;
  uStack_16e0 = 0;
  uStack_16c8 = 0;
  uStack_16d0 = 0;
  uStack_16c0 = 1;
  uStack_16a8 = 0;
  uStack_16b0 = 0;
  uStack_16a0 = 0;
  uStack_1698 = 1;
  uStack_1688 = 0;
  uStack_1690 = 0;
  func_0x000107c61434(uVar2);
  func_0x00010422af04(auStack_4588,0,0,0,0,0,0x17,10,0,0,auStack_2db8,auStack_2300,&uStack_1788,2,0,
                      &uStack_1760,0,0,0,1,0);
  lVar3 = 0;
  func_0x00010423cab0();
  func_0x000101681be8(param_1,(long)extraout_x8 + (long)*(int *)(lVar3 + 0x30));
  func_0x00010420cd10();
  uVar4 = *param_1;
  func_0x00010420cd1c();
  *(ulong *)((long)extraout_x8 + (long)*(int *)(lVar3 + 0x38)) = *param_1 | uVar4;
  *extraout_x8 = uVar1;
  extraout_x8[1] = uVar2;
  *(undefined1 *)(extraout_x8 + 2) = 0;
  func_0x000107c610b4(extraout_x8 + 3,auStack_4588,0x17d0);
  extraout_x8[0x2fe] = 0;
  extraout_x8[0x2fd] = 0;
  extraout_x8[0x300] = 0;
  extraout_x8[0x2ff] = 0;
  extraout_x8[0x301] = 0;
  *(undefined1 *)(extraout_x8 + 0x302) = 1;
  *(undefined8 *)((long)extraout_x8 + (long)*(int *)(lVar3 + 0x34)) = 0;
  return;
}



/* Entry: 10192d0fc; end: 10192d10b;  */

void FUN_10192d0fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10192d10c; end: 10192d13f;  */

void FUN_10192d10c(void)

{
  func_0x000107c61168(&PTR_PTR_112dd53b0);
  return;
}



/* Entry: 10192d140; end: 10192d293;  */

void FUN_10192d140(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x00010192ce74();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar7;
  lVar3 = 0;
  FUN_10192eb70();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(long *)(lVar4 + 0x40) = lVar1;
  *(undefined ***)(lVar4 + 0x48) = &PTR_DAT_110413698;
  *(long *)(lVar4 + 0x28) = lVar2;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar4 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(param_2);
  puVar5 = puVar6;
  FUN_10192d3d4();
  *(undefined **)(lVar4 + 0x18) = puVar5;
  lVar1 = 0;
  func_0x00010192b4c8();
  func_0x000107c613fc();
  FUN_10192d2d8();
  *(undefined **)(lVar1 + 0x10) = puVar6;
  *(long *)(lVar4 + 0x20) = lVar1;
  uVar7 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar4 + 0x88) = uVar7;
  *(undefined8 *)(lVar4 + 0x50) = param_2;
  FUN_10192d510(param_3,lVar4 + 0x58,0x112dd5410,&UNK_10d997830);
  *(undefined8 *)(lVar4 + 0x80) = param_4;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1104136e0;
  func_0x000107c61574(lVar2);
  *param_1 = lVar4;
  return;
}



/* Entry: 10192d294; end: 10192d2b7;  */

void FUN_10192d294(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10192d2b8; end: 10192d2d7;  */

void FUN_10192d2b8(void)

{
  FUN_10192d140();
  return;
}



/* Entry: 10192d2d8; end: 10192d3d3;  */

undefined * FUN_10192d2d8(long param_1)

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
    func_0x0001000285a8(0x112dd52b8,&UNK_10d997790);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10192d3d0);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10192d3d4);
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



/* Entry: 10192d3d4; end: 10192d4ef;  */

undefined * FUN_10192d3d4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112dd52c0,&UNK_10d9977a0);
    puVar6 = puVar10;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar11 = (undefined8 *)(param_1 + 0x40);
    do {
      uVar2 = puVar11[-4];
      uVar3 = puVar11[-3];
      uVar13 = puVar11[-2];
      uVar4 = *(undefined1 *)(puVar11 + -1);
      uVar12 = *puVar11;
      func_0x000107c61434(uVar3);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10192d4ec);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar9 = (undefined8 *)(*(long *)(puVar6 + 0x38) + uVar7 * 0x18);
      *puVar9 = uVar13;
      *(undefined1 *)(puVar9 + 1) = uVar4;
      puVar9[2] = uVar12;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10192d4f0);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      puVar10 = puVar10 + -1;
      puVar11 = puVar11 + 5;
    } while (puVar10 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 10192d4f0; end: 10192d50f;  */

void FUN_10192d4f0(void)

{
  func_0x000107c61168(&PTR_PTR_112dd5458);
  return;
}



/* Entry: 10192d510; end: 10192d557;  */

undefined8 FUN_10192d510(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10192d558; end: 10192d5cf;  */

long FUN_10192d558(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001000c6518(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10192ea64();
  func_0x0001000834e4(param_1);
  return lVar1;
}



/* Entry: 10192d5d0; end: 10192d7ef;  */

void FUN_10192d5d0(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [24];
  long lStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar9 = *(long *)(lVar3 + 0x10);
  if (lVar9 != 0) {
    lVar8 = lVar3 + 0x20;
    func_0x000107c61434();
    do {
      FUN_10192eb2c(lVar8,auStack_a0);
      uVar5 = uStack_80;
      lVar4 = lStack_88;
      func_0x0001000a8868(auStack_a0,lStack_88);
      (**(code **)(uVar5 + 8))();
      func_0x000107c61428(unaff_x20 + 0x18,auStack_c8,0x20,0);
      uVar7 = *(ulong *)(unaff_x20 + 0x18);
      if (*(long *)(uVar7 + 0x10) == 0) {
LAB_10192d63c:
        func_0x000107c6142c(uVar5);
        func_0x000107c614a8(auStack_c8);
      }
      else {
        func_0x000107c61434(uVar7);
        uVar6 = uVar5;
        func_0x000100029284();
        if ((uVar6 & 1) == 0) {
          func_0x000107c6142c(uVar5);
          uVar5 = uVar7;
          goto LAB_10192d63c;
        }
        bVar1 = *(byte *)(*(long *)(uVar7 + 0x38) + lVar4 * 0x18 + 8);
        func_0x000107c614a8(auStack_c8);
        func_0x000107c6142c(uVar7);
        func_0x000107c6142c(uVar5);
        if ((bVar1 & 1) == 0) {
          FUN_10192da88(0,auStack_a0,1,0xd);
          FUN_10192ebec(unaff_x20 + 0x58,auStack_c8,0x112dd5410,&UNK_10d997830);
          lVar4 = lStack_a8;
          if (lStack_b0 == 0) {
            func_0x00010192ec70(auStack_c8,0x112dd5410,&UNK_10d997830);
          }
          else {
            func_0x0001000a8868(auStack_c8,lStack_b0);
            uVar5 = uStack_80;
            lVar2 = lStack_88;
            func_0x0001000a8868(auStack_a0,lStack_88);
            (**(code **)(uVar5 + 8))(lVar2,uVar5);
            (**(code **)(lVar4 + 8))();
            func_0x000107c6142c(uVar5);
            func_0x0001000834e4(auStack_c8);
          }
        }
      }
      func_0x0001000834e4(auStack_a0);
      lVar8 = lVar8 + 0x28;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    func_0x000107c6142c(lVar3);
  }
  return;
}



/* Entry: 10192d7f0; end: 10192d897;  */

void FUN_10192d7f0(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6157c(uVar1);
  FUN_10192ba58();
  func_0x000107c61574(uVar1);
  FUN_10192d5d0();
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x00010192ec70(unaff_x20 + 0x28,0x112dd54b8,&UNK_10d997870);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x00010192ec70(unaff_x20 + 0x58,0x112dd5410,&UNK_10d997830);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10192d898; end: 10192da87;  */

void FUN_10192d898(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [40];
  
  FUN_10192eb2c(param_1,auStack_68);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_80,0x21,0);
  uVar3 = *(ulong *)(unaff_x20 + 0x10);
  uVar1 = uVar3;
  func_0x000107c61558();
  *(ulong *)(unaff_x20 + 0x10) = uVar3;
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_10192e830(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    *(ulong *)(unaff_x20 + 0x10) = uVar2;
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_10192e830(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  func_0x000100cbee18(auStack_68,uVar3 + uVar1 * 0x28 + 0x20);
  *(ulong *)(unaff_x20 + 0x10) = uVar3;
  func_0x000107c614a8(auStack_80);
  func_0x00010192d97c(param_1);
  return;
}



/* Entry: 10192da88; end: 10192e46b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10192da88(undefined8 param_1,long param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar8;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined2 auStack_b6d0 [4];
  long alStack_b6c8 [4];
  undefined1 auStack_b6a8 [8];
  undefined8 auStack_b6a0 [5];
  undefined2 auStack_b678 [4];
  undefined *puStack_b670;
  long lStack_b668;
  long lStack_b660;
  uint uStack_b654;
  long lStack_b650;
  long lStack_b648;
  undefined *apuStack_b628 [3];
  long lStack_b610;
  long lStack_b608;
  undefined8 uStack_9e58;
  undefined8 uStack_9e50;
  undefined1 auStack_8688 [6096];
  undefined1 auStack_6eb8 [24];
  undefined *puStack_6ea0;
  undefined1 auStack_6e98 [5928];
  byte bStack_5770;
  undefined1 auStack_56e8 [2744];
  undefined1 auStack_4c30 [2720];
  long lStack_4190;
  undefined1 auStack_4178 [1448];
  undefined8 uStack_3bd0;
  undefined8 uStack_3bc8;
  undefined8 uStack_3bc0;
  undefined8 uStack_3bb8;
  undefined8 uStack_3bb0;
  undefined8 uStack_3ba8;
  undefined8 uStack_3ba0;
  undefined8 uStack_3b98;
  undefined8 uStack_3b90;
  undefined8 uStack_3b88;
  undefined8 uStack_3b80;
  undefined8 uStack_3b78;
  undefined8 uStack_3b70;
  undefined1 uStack_3b68;
  undefined1 auStack_3b58 [776];
  undefined8 uStack_3850;
  undefined8 uStack_3848;
  undefined8 uStack_3840;
  undefined8 uStack_3838;
  undefined8 uStack_3830;
  undefined8 uStack_3828;
  undefined8 uStack_3820;
  undefined8 uStack_3818;
  undefined8 uStack_3810;
  undefined8 uStack_3808;
  undefined8 uStack_3800;
  undefined8 uStack_37f8;
  undefined8 uStack_37f0;
  undefined8 uStack_37e8;
  undefined8 uStack_37e0;
  undefined8 uStack_37d8;
  undefined8 uStack_37d0;
  undefined8 uStack_37c8;
  undefined8 uStack_37c0;
  undefined8 uStack_37b8;
  undefined8 uStack_37b0;
  undefined8 uStack_37a8;
  undefined8 uStack_37a0;
  undefined8 uStack_3798;
  undefined8 uStack_3790;
  undefined8 uStack_3788;
  undefined8 uStack_3780;
  undefined8 uStack_3778;
  undefined8 uStack_3770;
  undefined8 uStack_3768;
  undefined8 uStack_3760;
  undefined8 uStack_3758;
  undefined8 uStack_3750;
  undefined8 uStack_373f;
  undefined1 auStack_3730 [24];
  undefined8 uStack_3718;
  long lStack_3710;
  undefined1 auStack_1f60 [1448];
  undefined1 auStack_19b8 [776];
  undefined8 uStack_16b0;
  undefined8 uStack_16a8;
  undefined8 uStack_16a0;
  undefined8 uStack_1698;
  undefined8 uStack_1690;
  undefined8 uStack_1688;
  undefined8 uStack_1680;
  undefined8 uStack_1678;
  undefined8 uStack_1670;
  undefined8 uStack_1668;
  undefined8 uStack_1660;
  undefined8 uStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined8 uStack_1640;
  undefined8 uStack_1638;
  undefined8 uStack_1630;
  undefined8 uStack_1628;
  undefined8 uStack_1620;
  undefined8 uStack_1618;
  undefined8 uStack_1610;
  undefined8 uStack_15ff;
  undefined1 auStack_15f0 [2744];
  undefined1 auStack_b38 [2760];
  
  uStack_b654 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = 0;
  uVar11 = param_1;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar10 = (long)&puStack_b670 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x00010423cab0();
  lStack_b660 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar9 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_b650 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12;
  lStack_b668 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_00;
  puVar4 = PTR_PTR_1126afec0;
  func_0x000107c61168();
  puStack_b670 = puVar4;
  func_0x000107c41018();
  func_0x0001000d224c(auStack_3730);
  uVar7 = uStack_3718;
  func_0x0001000a8868(auStack_3730,uStack_3718);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar5);
  (**(code **)(lVar3 + 0x18))(lVar10,uVar5,lVar3);
  lVar1 = lStack_b668;
  (**(code **)(lStack_3710 + 8))(lVar9,lVar10,uVar7,lStack_3710);
  func_0x00010192ec34(lVar10,&SUB_100b91d00);
  func_0x0001000834e4(auStack_3730);
  lStack_b648 = lVar9;
  func_0x00010188dcdc(lVar9,lVar1);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar5);
  (**(code **)(lVar3 + 0x10))();
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x17f0));
  *(undefined8 *)(lVar1 + 0x17e8) = uVar5;
  *(long *)(lVar1 + 0x17f0) = lVar3;
  *(undefined8 *)(lVar1 + *(int *)(lStack_b660 + 0x34)) = param_4;
  func_0x000107c610b4(auStack_3730,lVar1 + 0x18,0x17d0);
  func_0x000107c610b4(auStack_6eb8,lVar1 + 0x18,0x17d0);
  FUN_10178ed8c(auStack_1f60);
  func_0x000107c610b4(auStack_4178,auStack_1f60,0x5a8);
  uStack_3bc8 = 0;
  uStack_3bd0 = 0;
  uStack_3bb8 = 0;
  uStack_3bc0 = 0;
  uStack_3bb0 = 1;
  uStack_3ba0 = 0;
  uStack_3ba8 = 0;
  uStack_3b90 = 0;
  uStack_3b98 = 0;
  uStack_3b80 = 0;
  uStack_3b88 = 0;
  uStack_3b70 = 0;
  uStack_3b78 = 0;
  uStack_3b68 = 0;
  func_0x00010178e4b4(auStack_19b8);
  func_0x000107c610b4(auStack_3b58,auStack_19b8,0x301);
  uStack_3840 = 0;
  uStack_3848 = 0;
  uStack_3830 = 0;
  uStack_3838 = 0;
  uStack_3820 = 0;
  uStack_3828 = 0;
  uStack_3810 = 0;
  uStack_3818 = 0;
  uStack_3800 = 0;
  uStack_3808 = 0;
  uStack_3850 = 1;
  uStack_37f8 = 0;
  func_0x00010178e4d4(&uStack_16b0);
  uStack_3768 = uStack_1628;
  uStack_3770 = uStack_1630;
  uStack_3758 = uStack_1618;
  uStack_3760 = uStack_1620;
  uStack_3750 = uStack_1610;
  uStack_373f = uStack_15ff;
  uStack_37a8 = uStack_1668;
  uStack_37b0 = uStack_1670;
  uStack_3798 = uStack_1658;
  uStack_37a0 = uStack_1660;
  uStack_3788 = uStack_1648;
  uStack_3790 = uStack_1650;
  uStack_3778 = uStack_1638;
  uStack_3780 = uStack_1640;
  uStack_37e8 = uStack_16a8;
  uStack_37f0 = uStack_16b0;
  uStack_37d8 = uStack_1698;
  uStack_37e0 = uStack_16a0;
  uStack_37c8 = uStack_1688;
  uStack_37d0 = uStack_1690;
  uStack_37b8 = uStack_1678;
  uStack_37c0 = uStack_1680;
  FUN_101897da8(auStack_3730,auStack_8688);
  *(undefined8 *)(lVar9 + -0x30) = 0;
  *(undefined8 *)(lVar9 + -0x28) = 0;
  *(undefined2 *)(lVar9 + -8) = 0;
  *(undefined8 *)(lVar9 + -0x18) = 0;
  *(undefined8 *)(lVar9 + -0x10) = 3;
  *(undefined8 *)(lVar9 + -0x20) = 1;
  *(undefined1 *)(lVar9 + -0x38) = 0;
  *(undefined8 *)(lVar9 + -0x48) = 1;
  *(undefined8 *)(lVar9 + -0x40) = 0;
  *(undefined8 **)(lVar9 + -0x58) = &uStack_3850;
  *(undefined8 **)(lVar9 + -0x50) = &uStack_37f0;
  *(undefined2 *)(lVar9 + -0x60) = 0x202;
  func_0x000104220e6c(auStack_56e8,0x17,auStack_4178,&uStack_3bd0,auStack_3b58,1,0,1,0);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar5);
  (**(code **)(lVar3 + 0x28))(auStack_4c30,auStack_56e8,uVar5,lVar3);
  func_0x000107c610b4(auStack_15f0,auStack_4c30,0xab2);
  uVar2 = uStack_b654;
  bStack_5770 = (byte)uStack_b654 ^ 1;
  func_0x00010178e4a0(auStack_15f0);
  func_0x000107c610b4(auStack_b38,auStack_6e98,0xab2);
  func_0x000107c610b4(auStack_6e98,auStack_15f0,0xab2);
  FUN_101795250(auStack_4c30,auStack_8688);
  func_0x00010192ec70(auStack_b38,0x112dcbc88,&UNK_10d98e360);
  func_0x00010179528c(auStack_4c30);
  if (lStack_4190 != 0) {
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
    uStack_9e58 = 0xd000000000000013;
    uStack_9e50 = 0x800000010efbc8f0;
    func_0x000107c602d4(auStack_8688,&uStack_9e58,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    puVar6 = (undefined *)0x21;
    func_0x0001046c0f18();
    lVar3 = 0;
    func_0x0001002ed07c();
    apuStack_b628[0] = puVar6;
    lStack_b610 = lVar3;
    if (lVar3 == 0) {
      func_0x00010192ec70(apuStack_b628,0x112d387f8,&UNK_10d902650);
      FUN_10192bcf8(&uStack_9e58,auStack_8688);
      func_0x0001007bbff0(auStack_8688);
      func_0x00010192ec70(&uStack_9e58,0x112d387f8,&UNK_10d902650);
    }
    else {
      func_0x000100102924(apuStack_b628,&uStack_9e58);
      puVar6 = puVar4;
      func_0x000107c61558(puVar4);
      apuStack_b628[0] = puVar4;
      FUN_10192c094(&uStack_9e58,auStack_8688,puVar6);
      func_0x0001007bbff0(auStack_8688);
      puVar4 = apuStack_b628[0];
    }
    puVar6 = puVar4;
    func_0x000107c5f9dc(puVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(puVar4);
    func_0x000107c61170(uStack_3718);
    puStack_6ea0 = puVar6;
  }
  func_0x000107c610b4(&uStack_9e58,auStack_6eb8,0x17d0);
  func_0x000107c610b4(auStack_8688,lVar1 + 0x18,0x17d0);
  FUN_101897da8(&uStack_9e58,apuStack_b628);
  func_0x000101897de4(auStack_8688);
  func_0x000107c610b4(lVar1 + 0x18,&uStack_9e58,0x17d0);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar5);
  (**(code **)(lVar3 + 0x10))(uVar5,lVar3);
  func_0x000107c6142c(lVar3);
  lVar3 = lStack_b650;
  func_0x00010188dcdc(lVar1,lStack_b650);
  func_0x0001042b18d4(0);
  func_0x000107c610f8();
  func_0x0001042b0f38();
  func_0x00010192ebec(unaff_x20 + 0x28,apuStack_b628,0x112dd54b8,&UNK_10d997870);
  lVar10 = lStack_b608;
  lVar9 = lStack_b610;
  if (lStack_b610 == 0) {
    func_0x00010192ec70(apuStack_b628,0x112dd54b8,&UNK_10d997870);
  }
  else {
    func_0x0001000a8868(apuStack_b628,lStack_b610);
    (**(code **)(lVar10 + 8))(lVar3,lVar9,lVar10);
    func_0x0001000834e4(apuStack_b628);
  }
  func_0x00010192ebec(unaff_x20 + 0x58,apuStack_b628,0x112dd5410,&UNK_10d997830);
  lVar10 = lStack_b608;
  lVar9 = lStack_b610;
  if (lStack_b610 == 0) {
    func_0x00010192ec70(apuStack_b628,0x112dd5410,&UNK_10d997830);
  }
  else {
    func_0x0001000a8868(apuStack_b628,lStack_b610);
    (**(code **)(lVar10 + 0x10))(param_4,1,lVar9,lVar10);
    func_0x0001000834e4(apuStack_b628);
  }
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  lVar9 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar5);
  (**(code **)(lVar9 + 8))(uVar5,lVar9);
  func_0x000107c61428(unaff_x20 + 0x18,apuStack_b628,0x21,0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61558(uVar7);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = 0x8000000000000000;
  FUN_10192bf10(param_1,uVar2 & 1,param_4,uVar5,lVar9,uVar7);
  func_0x000107c6142c(lVar9);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar8;
  func_0x000107c614a8(apuStack_b628);
  if ((uVar2 & 1) != 0) {
    func_0x00010192ebec(unaff_x20 + 0x58,apuStack_b628,0x112dd5410,&UNK_10d997830);
    if (lStack_b610 == 0) {
      func_0x00010192ec70(apuStack_b628,0x112dd5410,&UNK_10d997830);
      lVar9 = *(long *)(unaff_x20 + 0x80);
    }
    else {
      func_0x0001000a8868(apuStack_b628,lStack_b610);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      lVar9 = *(long *)(param_2 + 0x20);
      func_0x0001000a8868(param_2,uVar5);
      (**(code **)(lVar9 + 8))(uVar5,lVar9);
      (**(code **)(lStack_b608 + 8))();
      func_0x000107c6142c(lVar9);
      func_0x0001000834e4(apuStack_b628);
      lVar9 = *(long *)(unaff_x20 + 0x80);
    }
    if ((lVar9 != 0) &&
       (func_0x0001000d224c(apuStack_b628), puVar4 = apuStack_b628[0],
       apuStack_b628[0] != (undefined *)0x0)) {
      func_0x000107c41018(puStack_b670);
      func_0x000107c4b9d0(uVar11,param_1,puVar4);
      func_0x00010179528c(auStack_56e8);
      func_0x000107c615e8(puVar4);
      func_0x00010192ec34(lStack_b648,&SUB_10423cab0);
      goto LAB_10192e424;
    }
  }
  func_0x00010192ec34(lStack_b648,&SUB_10423cab0);
  func_0x00010179528c(auStack_56e8);
LAB_10192e424:
  func_0x000107c61170(lVar3);
  func_0x000101897de4(auStack_6eb8);
  func_0x00010192ec34(lVar1,&SUB_10423cab0);
  return;
}



/* Entry: 10192e46c; end: 10192e4f3;  */

void FUN_10192e46c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  uVar3 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  uVar2 = param_1[2];
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10192e4f4(uVar3,param_3,uVar1,uVar2);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10192e4f4; end: 10192e747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10192e4f4(double param_1,long param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  code *pcVar11;
  long *plVar12;
  undefined8 uVar13;
  double dVar14;
  undefined2 auStack_b6d0 [4];
  long alStack_b6c8 [4];
  undefined1 auStack_b6a8 [8];
  undefined8 auStack_b6a0 [5];
  undefined2 auStack_b678 [4];
  undefined *puStack_b670;
  long lStack_b668;
  long lStack_b660;
  uint uStack_b654;
  long lStack_b650;
  long lStack_b648;
  long lStack_b640;
  undefined8 uStack_b638;
  undefined *puStack_b630;
  undefined *apuStack_b628 [3];
  long lStack_b610;
  long lStack_b608;
  undefined8 uStack_9e58;
  undefined8 uStack_9e50;
  undefined1 auStack_8688 [6096];
  undefined1 auStack_6eb8 [24];
  undefined *puStack_6ea0;
  undefined1 auStack_6e98 [5928];
  byte bStack_5770;
  undefined1 auStack_56e8 [2744];
  undefined1 auStack_4c30 [2720];
  long lStack_4190;
  undefined1 auStack_4178 [1448];
  undefined8 uStack_3bd0;
  undefined8 uStack_3bc8;
  undefined8 uStack_3bc0;
  undefined8 uStack_3bb8;
  undefined8 uStack_3bb0;
  undefined8 uStack_3ba8;
  undefined8 uStack_3ba0;
  undefined8 uStack_3b98;
  undefined8 uStack_3b90;
  undefined8 uStack_3b88;
  undefined8 uStack_3b80;
  undefined8 uStack_3b78;
  undefined8 uStack_3b70;
  undefined1 uStack_3b68;
  undefined1 auStack_3b58 [776];
  undefined8 uStack_3850;
  undefined8 uStack_3848;
  undefined8 uStack_3840;
  undefined8 uStack_3838;
  undefined8 uStack_3830;
  undefined8 uStack_3828;
  undefined8 uStack_3820;
  undefined8 uStack_3818;
  undefined8 uStack_3810;
  undefined8 uStack_3808;
  undefined8 uStack_3800;
  undefined8 uStack_37f8;
  undefined8 uStack_37f0;
  undefined8 uStack_37e8;
  undefined8 uStack_37e0;
  undefined8 uStack_37d8;
  undefined8 uStack_37d0;
  undefined8 uStack_37c8;
  undefined8 uStack_37c0;
  undefined8 uStack_37b8;
  undefined8 uStack_37b0;
  undefined8 uStack_37a8;
  undefined8 uStack_37a0;
  undefined8 uStack_3798;
  undefined8 uStack_3790;
  undefined8 uStack_3788;
  undefined8 uStack_3780;
  undefined8 uStack_3778;
  undefined8 uStack_3770;
  undefined8 uStack_3768;
  undefined8 uStack_3760;
  undefined8 uStack_3758;
  undefined8 uStack_3750;
  undefined8 uStack_373f;
  undefined1 auStack_3730 [24];
  undefined8 uStack_3718;
  long lStack_3710;
  undefined1 auStack_1f60 [1448];
  undefined1 auStack_19b8 [776];
  undefined8 uStack_16b0;
  undefined8 uStack_16a8;
  undefined8 uStack_16a0;
  undefined8 uStack_1698;
  undefined8 uStack_1690;
  undefined8 uStack_1688;
  undefined8 uStack_1680;
  undefined8 uStack_1678;
  undefined8 uStack_1670;
  undefined8 uStack_1668;
  undefined8 uStack_1660;
  undefined8 uStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined8 uStack_1640;
  undefined8 uStack_1638;
  undefined8 uStack_1630;
  undefined8 uStack_1628;
  undefined8 uStack_1620;
  undefined8 uStack_1618;
  undefined8 uStack_1610;
  undefined8 uStack_15ff;
  undefined1 auStack_15f0 [2744];
  undefined1 auStack_b38 [2696];
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [40];
  
  lVar7 = 0;
  func_0x000107c5f7f0();
  lStack_a8 = *(long *)(lVar7 + -8);
  lStack_a0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  plVar12 = (long *)((long)&uStack_b0 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar8);
  pcVar11 = *(code **)(lVar7 + 8);
  func_0x000107c6157c(uVar13);
  (*pcVar11)(uVar8,lVar7);
  if (0.0 < param_1) {
    uStack_b0._4_4_ = param_3;
    if (0x7fe < (ulong)param_1 >> 0x34) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10192e740);
      (*pcVar11)();
    }
    if (-9.223372036854778e+18 < param_1) {
      if (param_1 < 9.223372036854776e+18) {
        *plVar12 = (long)param_1;
        lVar10 = lStack_a0;
        lVar1 = lStack_a8;
        (**(code **)(lStack_a8 + 0x68))
                  (plVar12,*(undefined4 *)
                            PTR___s8Dispatch0A12TimeIntervalO12millisecondsyACSicACmFWC_11034f778,
                   lStack_a0);
        puVar4 = &UNK_110413708;
        func_0x000107c613fc(&UNK_110413708,0x18,7);
        func_0x000107c61644(puVar4 + 0x10);
        FUN_10192eb2c(param_2,auStack_98);
        puVar5 = &UNK_110413758;
        func_0x000107c613fc(&UNK_110413758,0x58,7);
        *(undefined **)(puVar5 + 0x10) = puVar4;
        func_0x000100cbee18(auStack_98,puVar5 + 0x18);
        *(double *)(puVar5 + 0x40) = param_1;
        puVar5[0x48] = (byte)uStack_b0._4_4_ & 1;
        *(undefined8 *)(puVar5 + 0x50) = param_4;
        func_0x000107c6157c(puVar4);
        FUN_10192b4e8(uVar8,lVar7,plVar12,FUN_10192ebd4,puVar5);
        func_0x000107c61574(uVar13);
        func_0x000107c6142c(lVar7);
        func_0x000107c61574(puVar5);
        (**(code **)(lVar1 + 8))(plVar12,lVar10);
        func_0x000107c61574(puVar4);
        return;
      }
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10192e748);
      (*pcVar11)();
    }
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10192e744);
    (*pcVar11)();
  }
  FUN_10192b970();
  func_0x000107c61574(uVar13);
  func_0x000107c6142c(lVar7);
  uStack_b654 = param_3 & 1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(param_1);
  lVar7 = 0;
  dVar14 = param_1;
  uStack_b638 = param_4;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar9 = (long)&puStack_b670 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  func_0x00010423cab0();
  lStack_b660 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar10 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_b650 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12;
  lStack_b668 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_00;
  puVar4 = PTR_PTR_1126afec0;
  func_0x000107c61168();
  puStack_b670 = puVar4;
  func_0x000107c41018();
  lStack_b640 = unaff_x20;
  func_0x0001000d224c(auStack_3730);
  uVar13 = uStack_3718;
  func_0x0001000a8868(auStack_3730,uStack_3718);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar8);
  (**(code **)(lVar7 + 0x18))(lVar9,uVar8,lVar7);
  lVar1 = lStack_b668;
  (**(code **)(lStack_3710 + 8))(lVar10,lVar9,uVar13,lStack_3710);
  func_0x00010192ec34(lVar9,&SUB_100b91d00);
  func_0x0001000834e4(auStack_3730);
  lStack_b648 = lVar10;
  func_0x00010188dcdc(lVar10,lVar1);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar8);
  (**(code **)(lVar7 + 0x10))();
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x17f0));
  *(undefined8 *)(lVar1 + 0x17e8) = uVar8;
  *(long *)(lVar1 + 0x17f0) = lVar7;
  *(undefined8 *)(lVar1 + *(int *)(lStack_b660 + 0x34)) = uStack_b638;
  func_0x000107c610b4(auStack_3730,lVar1 + 0x18,0x17d0);
  func_0x000107c610b4(auStack_6eb8,lVar1 + 0x18,0x17d0);
  FUN_10178ed8c(auStack_1f60);
  func_0x000107c610b4(auStack_4178,auStack_1f60,0x5a8);
  uStack_3bc8 = 0;
  uStack_3bd0 = 0;
  uStack_3bb8 = 0;
  uStack_3bc0 = 0;
  uStack_3bb0 = 1;
  uStack_3ba0 = 0;
  uStack_3ba8 = 0;
  uStack_3b90 = 0;
  uStack_3b98 = 0;
  uStack_3b80 = 0;
  uStack_3b88 = 0;
  uStack_3b70 = 0;
  uStack_3b78 = 0;
  uStack_3b68 = 0;
  func_0x00010178e4b4(auStack_19b8);
  func_0x000107c610b4(auStack_3b58,auStack_19b8,0x301);
  uStack_3840 = 0;
  uStack_3848 = 0;
  uStack_3830 = 0;
  uStack_3838 = 0;
  uStack_3820 = 0;
  uStack_3828 = 0;
  uStack_3810 = 0;
  uStack_3818 = 0;
  uStack_3800 = 0;
  uStack_3808 = 0;
  uStack_3850 = 1;
  uStack_37f8 = 0;
  func_0x00010178e4d4(&uStack_16b0);
  uStack_3768 = uStack_1628;
  uStack_3770 = uStack_1630;
  uStack_3758 = uStack_1618;
  uStack_3760 = uStack_1620;
  uStack_3750 = uStack_1610;
  uStack_373f = uStack_15ff;
  uStack_37a8 = uStack_1668;
  uStack_37b0 = uStack_1670;
  uStack_3798 = uStack_1658;
  uStack_37a0 = uStack_1660;
  uStack_3788 = uStack_1648;
  uStack_3790 = uStack_1650;
  uStack_3778 = uStack_1638;
  uStack_3780 = uStack_1640;
  uStack_37e8 = uStack_16a8;
  uStack_37f0 = uStack_16b0;
  uStack_37d8 = uStack_1698;
  uStack_37e0 = uStack_16a0;
  uStack_37c8 = uStack_1688;
  uStack_37d0 = uStack_1690;
  uStack_37b8 = uStack_1678;
  uStack_37c0 = uStack_1680;
  FUN_101897da8(auStack_3730,auStack_8688);
  *(undefined8 *)(lVar10 + -0x30) = 0;
  *(undefined8 *)(lVar10 + -0x28) = 0;
  *(undefined2 *)(lVar10 + -8) = 0;
  *(undefined8 *)(lVar10 + -0x18) = 0;
  *(undefined8 *)(lVar10 + -0x10) = 3;
  *(undefined8 *)(lVar10 + -0x20) = 1;
  *(undefined1 *)(lVar10 + -0x38) = 0;
  *(undefined8 *)(lVar10 + -0x48) = 1;
  *(undefined8 *)(lVar10 + -0x40) = 0;
  *(undefined8 **)(lVar10 + -0x58) = &uStack_3850;
  *(undefined8 **)(lVar10 + -0x50) = &uStack_37f0;
  *(undefined2 *)(lVar10 + -0x60) = 0x202;
  func_0x000104220e6c(auStack_56e8,0x17,auStack_4178,&uStack_3bd0,auStack_3b58,1,0,1,0);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar8);
  (**(code **)(lVar7 + 0x28))(auStack_4c30,auStack_56e8,uVar8,lVar7);
  func_0x000107c610b4(auStack_15f0,auStack_4c30,0xab2);
  uVar2 = uStack_b654;
  bStack_5770 = (byte)uStack_b654 ^ 1;
  func_0x00010178e4a0(auStack_15f0);
  func_0x000107c610b4(auStack_b38,auStack_6e98,0xab2);
  func_0x000107c610b4(auStack_6e98,auStack_15f0,0xab2);
  FUN_101795250(auStack_4c30,auStack_8688);
  func_0x00010192ec70(auStack_b38,0x112dcbc88,&UNK_10d98e360);
  func_0x00010179528c(auStack_4c30);
  if (lStack_4190 != 0) {
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
    uStack_9e58 = 0xd000000000000013;
    uStack_9e50 = 0x800000010efbc8f0;
    puStack_b630 = puVar4;
    func_0x000107c602d4(auStack_8688,&uStack_9e58,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    puVar5 = (undefined *)0x21;
    func_0x0001046c0f18();
    lVar7 = 0;
    func_0x0001002ed07c();
    apuStack_b628[0] = puVar5;
    lStack_b610 = lVar7;
    if (lVar7 == 0) {
      func_0x00010192ec70(apuStack_b628,0x112d387f8,&UNK_10d902650);
      FUN_10192bcf8(&uStack_9e58,auStack_8688);
      func_0x0001007bbff0(auStack_8688);
      func_0x00010192ec70(&uStack_9e58,0x112d387f8,&UNK_10d902650);
      puVar4 = puStack_b630;
    }
    else {
      func_0x000100102924(apuStack_b628,&uStack_9e58);
      puVar5 = puVar4;
      func_0x000107c61558(puVar4);
      apuStack_b628[0] = puVar4;
      FUN_10192c094(&uStack_9e58,auStack_8688,puVar5);
      func_0x0001007bbff0(auStack_8688);
      puVar4 = apuStack_b628[0];
    }
    puVar5 = puVar4;
    func_0x000107c5f9dc(puVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(puVar4);
    func_0x000107c61170(uStack_3718);
    puStack_6ea0 = puVar5;
  }
  func_0x000107c610b4(&uStack_9e58,auStack_6eb8,0x17d0);
  func_0x000107c610b4(auStack_8688,lVar1 + 0x18,0x17d0);
  FUN_101897da8(&uStack_9e58,apuStack_b628);
  func_0x000101897de4(auStack_8688);
  func_0x000107c610b4(lVar1 + 0x18,&uStack_9e58,0x17d0);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar8);
  (**(code **)(lVar7 + 0x10))(uVar8,lVar7);
  func_0x000107c6142c(lVar7);
  lVar7 = lStack_b650;
  func_0x00010188dcdc(lVar1,lStack_b650);
  func_0x0001042b18d4(0);
  func_0x000107c610f8();
  func_0x0001042b0f38();
  lVar10 = lStack_b640;
  func_0x00010192ebec(lStack_b640 + 0x28,apuStack_b628,0x112dd54b8,&UNK_10d997870);
  lVar3 = lStack_b608;
  lVar9 = lStack_b610;
  if (lStack_b610 == 0) {
    func_0x00010192ec70(apuStack_b628,0x112dd54b8,&UNK_10d997870);
  }
  else {
    func_0x0001000a8868(apuStack_b628,lStack_b610);
    (**(code **)(lVar3 + 8))(lVar7,lVar9,lVar3);
    func_0x0001000834e4(apuStack_b628);
  }
  uVar8 = uStack_b638;
  func_0x00010192ebec(lVar10 + 0x58,apuStack_b628,0x112dd5410,&UNK_10d997830);
  lVar3 = lStack_b608;
  lVar9 = lStack_b610;
  if (lStack_b610 == 0) {
    func_0x00010192ec70(apuStack_b628,0x112dd5410,&UNK_10d997830);
  }
  else {
    func_0x0001000a8868(apuStack_b628,lStack_b610);
    (**(code **)(lVar3 + 0x10))(uVar8,1,lVar9,lVar3);
    func_0x0001000834e4(apuStack_b628);
  }
  uVar13 = *(undefined8 *)(param_2 + 0x18);
  lVar9 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar13);
  (**(code **)(lVar9 + 8))(uVar13,lVar9);
  func_0x000107c61428(lVar10 + 0x18,apuStack_b628,0x21,0);
  uVar6 = *(undefined8 *)(lVar10 + 0x18);
  func_0x000107c61558(uVar6);
  puStack_b630 = *(undefined **)(lVar10 + 0x18);
  *(undefined8 *)(lVar10 + 0x18) = 0x8000000000000000;
  FUN_10192bf10(param_1,uVar2 & 1,uVar8,uVar13,lVar9,uVar6);
  func_0x000107c6142c(lVar9);
  *(undefined **)(lVar10 + 0x18) = puStack_b630;
  func_0x000107c614a8(apuStack_b628);
  if ((uVar2 & 1) != 0) {
    func_0x00010192ebec(lVar10 + 0x58,apuStack_b628,0x112dd5410,&UNK_10d997830);
    if (lStack_b610 == 0) {
      func_0x00010192ec70(apuStack_b628,0x112dd5410,&UNK_10d997830);
      lVar10 = *(long *)(lVar10 + 0x80);
    }
    else {
      func_0x0001000a8868(apuStack_b628,lStack_b610);
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      lVar10 = *(long *)(param_2 + 0x20);
      func_0x0001000a8868(param_2,uVar8);
      (**(code **)(lVar10 + 8))(uVar8,lVar10);
      (**(code **)(lStack_b608 + 8))();
      func_0x000107c6142c(lVar10);
      func_0x0001000834e4(apuStack_b628);
      lVar10 = *(long *)(lStack_b640 + 0x80);
    }
    if ((lVar10 != 0) &&
       (func_0x0001000d224c(apuStack_b628), puVar4 = apuStack_b628[0],
       apuStack_b628[0] != (undefined *)0x0)) {
      func_0x000107c41018(puStack_b670);
      func_0x000107c4b9d0(dVar14,param_1,puVar4);
      func_0x00010179528c(auStack_56e8);
      func_0x000107c615e8(puVar4);
      func_0x00010192ec34(lStack_b648,&SUB_10423cab0);
      goto LAB_10192e424;
    }
  }
  func_0x00010192ec34(lStack_b648,&SUB_10423cab0);
  func_0x00010179528c(auStack_56e8);
LAB_10192e424:
  func_0x000107c61170(lVar7);
  func_0x000101897de4(auStack_6eb8);
  func_0x00010192ec34(lVar1,&SUB_10423cab0);
  return;
}



/* Entry: 10192e748; end: 10192e7cf;  */

void FUN_10192e748(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10192da88(param_1,param_3,param_4 & 1,param_5);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10192e7d0; end: 10192e82f;  */

void FUN_10192e7d0(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  func_0x000107c61434(*(undefined8 *)(lVar1 + 0x10));
  return;
}



/* Entry: 10192e830; end: 10192ea63;  */

undefined * FUN_10192e830(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10192e974);
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
    puVar3 = (undefined *)0x112dd5598;
    func_0x0001000285a8(0x112dd5598,&UNK_10d997900);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112dd55a0;
    func_0x0001000285a8(0x112dd55a0,&UNK_10d997908);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 10192ea64; end: 10192eb2b;  */

void FUN_10192ea64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  func_0x000107c613fc(param_5,0x90,7);
  (**(code **)(lVar1 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,param_6);
  func_0x00010192e974(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,
                      param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 10192eb2c; end: 10192eb6f;  */

long FUN_10192eb2c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10192eb70; end: 10192eb8f;  */

void FUN_10192eb70(void)

{
  func_0x000107c61168(&PTR_PTR_112dd5500);
  return;
}



/* Entry: 10192eb90; end: 10192eb9b;  */

void FUN_10192eb90(undefined8 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  uVar3 = param_1[2];
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_10192e4f4(uVar4,unaff_x20 + 0x18,uVar1,uVar3);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 10192eb9c; end: 10192ebd3;  */

void FUN_10192eb9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10192ebd4; end: 10192ebeb;  */

void FUN_10192ebd4(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  bVar1 = *(byte *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_10192da88(uVar4,unaff_x20 + 0x18,bVar1 & 1,uVar3);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 10192ebec; end: 10192ecaf;  */

undefined8 FUN_10192ebec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10192ecb0; end: 10192edfb;  */

long FUN_10192ecb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x0001004892ac(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100489328();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000100489498();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 10192edfc; end: 10192ee47;  */

void FUN_10192edfc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10192ee48; end: 10192ee8b;  */

undefined1  [16] FUN_10192ee48(void)

{
  return ZEXT816(0x110413898);
}



/* Entry: 10192ee8c; end: 10192eedf;  */

void FUN_10192ee8c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10192eee0; end: 10192efa3;  */

long FUN_10192eee0(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x00010099d270(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_1;
  func_0x00010099d3e0();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    *(undefined **)(unaff_x20 + 0x20) = puVar2;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10192efa4);
  (*pcVar1)();
}



/* Entry: 10192efa4; end: 10192efd7;  */

void FUN_10192efa4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10192efd8; end: 10192f01b;  */

undefined1  [16] FUN_10192efd8(void)

{
  return ZEXT816(0x110413938);
}



/* Entry: 10192f01c; end: 10192f047;  */

undefined8 FUN_10192f01c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 10192f048; end: 10192f0cf;  */

undefined8
FUN_10192f048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x0001007de93c(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 10192f0d0; end: 10192f11b;  */

void FUN_10192f0d0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10192f11c; end: 10192f16b;  */

undefined8 FUN_10192f11c(void)

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



/* Entry: 10192f16c; end: 10192f1af;  */

undefined1  [16] FUN_10192f16c(void)

{
  return ZEXT816(0x110413a00);
}



/* Entry: 10192f1b0; end: 10192f1d7;  */

void FUN_10192f1b0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10192f1d8; end: 10192f1df;  */

undefined8 FUN_10192f1d8(void)

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



/* Entry: 10192f1e0; end: 10192f273;  */

void FUN_10192f1e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001001c9e78();
  func_0x000107c613fc();
  FUN_10192f2d4(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 10192f274; end: 10192f27f;  */

void FUN_10192f274(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001001c9e78();
  func_0x000107c613fc();
  FUN_10192f2d4(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10192f280; end: 10192f2d3;  */

undefined8 FUN_10192f280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10192f2d4(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 10192f2d4; end: 10192f4b3;  */

void FUN_10192f2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a7e00;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc12b0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 10192f4b4; end: 10192f4ef;  */

void FUN_10192f4b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10192f4f0; end: 10192f543;  */

void FUN_10192f4f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10192f544; end: 10192f54b;  */

void FUN_10192f544(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10192f54c; end: 10192f59b;  */

undefined8 FUN_10192f54c(void)

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



/* Entry: 10192f59c; end: 10192f5df;  */

undefined1  [16] FUN_10192f59c(void)

{
  return ZEXT816(0x110413ac8);
}



/* Entry: 10192f5e0; end: 10192f607;  */

void FUN_10192f5e0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10192f608; end: 10192f60f;  */

undefined8 FUN_10192f608(void)

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



/* Entry: 10192f610; end: 10192f97b;  */

long FUN_10192f610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  puVar1 = PTR_PTR_1126a7e08;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c970);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0x53656761726f7473;
  func_0x000107c5fadc(0x53656761726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef19d20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  *(undefined **)(unaff_x20 + 0x40) = puVar3;
  return unaff_x20;
}



/* Entry: 10192f97c; end: 10192f9e7;  */

void FUN_10192f97c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 10192f9e8; end: 10192fa37;  */

undefined8 FUN_10192f9e8(void)

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



/* Entry: 10192fa38; end: 10192fa7b;  */

undefined1  [16] FUN_10192fa38(void)

{
  return ZEXT816(0x110413b90);
}



/* Entry: 10192fa7c; end: 10192faa3;  */

void FUN_10192fa7c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10192faa4; end: 10192faab;  */

undefined8 FUN_10192faa4(void)

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



/* Entry: 10192faac; end: 1019301a3;  */

void FUN_10192faac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  puVar1 = PTR_PTR_1126a7e10;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc12d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc12f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar2 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000035;
  func_0x000107c5fadc(0xd000000000000035,0x800000010efc1310);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1a250);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef9e320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  *(undefined **)(unaff_x20 + 0x78) = puVar3;
  return;
}



/* Entry: 1019301a4; end: 101930247;  */

void FUN_1019301a4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 101930248; end: 101930297;  */

undefined8 FUN_101930248(void)

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



/* Entry: 101930298; end: 1019302db;  */

undefined1  [16] FUN_101930298(void)

{
  return ZEXT816(0x110413c58);
}



/* Entry: 1019302dc; end: 101930303;  */

void FUN_1019302dc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101930304; end: 10193030b;  */

undefined8 FUN_101930304(void)

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



/* Entry: 10193030c; end: 10193035f;  */

undefined8 FUN_10193030c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001009369b0(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101930360; end: 10193039b;  */

void FUN_101930360(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10193039c; end: 1019303eb;  */

undefined8 FUN_10193039c(void)

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



/* Entry: 1019303ec; end: 10193042f;  */

undefined1  [16] FUN_1019303ec(void)

{
  return ZEXT816(0x110413d20);
}



/* Entry: 101930430; end: 101930457;  */

void FUN_101930430(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101930458; end: 10193045f;  */

undefined8 FUN_101930458(void)

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



/* Entry: 101930460; end: 1019308bb;  */

long FUN_101930460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a7e20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar3);
  uVar4 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef19df0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc1350);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef16f90);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc1370);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_7);
    *(undefined **)(unaff_x20 + 0x50) = puVar2;
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019308bc);
  (*pcVar1)();
}



/* Entry: 1019308bc; end: 101930937;  */

void FUN_1019308bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101930938; end: 101930987;  */

undefined8 FUN_101930938(void)

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



/* Entry: 101930988; end: 1019309cb;  */

undefined1  [16] FUN_101930988(void)

{
  return ZEXT816(0x110413de8);
}



/* Entry: 1019309cc; end: 1019309f3;  */

void FUN_1019309cc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019309f4; end: 101930a0f;  */

undefined8 FUN_1019309f4(void)

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



/* Entry: 101930a10; end: 101930abb;  */

void FUN_101930a10(void)

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



/* Entry: 101930abc; end: 101930b0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101930abc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  
  func_0x000107c614f0();
  func_0x000107c610f8();
  ppuVar2 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  func_0x000107c614f0();
  lVar5 = _DAT_112dd5de0;
  puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
  func_0x0001000285a8(0x112dd5dd0,&UNK_10d998790);
  func_0x000107c613fc();
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar5) = ppuVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112dd5df8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dd5dd8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dd5de8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112dd5df0) = param_4;
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  puVar3 = auStack_70;
  func_0x000107c61154(puVar3,puVar4);
  puVar4 = &UNK_110413f88;
  func_0x000107c613fc(&UNK_110413f88,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,puVar3);
  func_0x000107c61174();
  lVar5 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c615e8(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    lVar8 = 0;
  }
  else {
    pcStack_80 = FUN_101931a14;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101930dd0;
    puStack_88 = &UNK_110413fa0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(&puStack_a0);
    puVar1 = puStack_78;
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar1);
    lVar8 = lVar5;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar5);
  }
  uVar7 = *(undefined8 *)(puVar3 + _DAT_112dd5df8);
  *(long *)(puVar3 + _DAT_112dd5df8) = lVar8;
  func_0x000107c61170(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61170(uVar7);
  return puVar3;
}



/* Entry: 101930b10; end: 101930d4f;  */

void FUN_101930b10(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar2 = &UNK_110413fd8;
    func_0x000107c613fc(&UNK_110413fd8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_2;
    puVar3 = &UNK_110414000;
    func_0x000107c613fc(&UNK_110414000,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_101931a24;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_101931a44;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_10006eb60;
    puStack_88 = &UNK_110414018;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    puVar3 = puStack_78;
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_110414050;
    func_0x000107c613fc(&UNK_110414050,0x18,7);
    *(long *)(puVar3 + 0x10) = param_2;
    puVar5 = &UNK_110414078;
    func_0x000107c613fc(&UNK_110414078,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_101931a64;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    pcStack_80 = (code *)0x101931abc;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_10006eb60;
    puStack_88 = &UNK_110414090;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    puVar5 = puStack_78;
    func_0x000107c61174();
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_1104140c8;
    func_0x000107c613fc(&UNK_1104140c8,0x18,7);
    *(long *)(puVar5 + 0x10) = param_2;
    puVar7 = &UNK_1104140f0;
    func_0x000107c613fc(&UNK_1104140f0,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x101931a84;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    pcStack_80 = (code *)0x101931ac0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_10006eb60;
    puStack_88 = &UNK_110414108;
    puStack_78 = puVar7;
    func_0x000107c60bc4(&puStack_a0);
    puVar7 = puStack_78;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar7);
    func_0x000107c4c6c0(param_1);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101930d50; end: 101930d63;  */

void FUN_101930d50(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}


