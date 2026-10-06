/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100010000; end: 10001018f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100010000(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  code *pcVar10;
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + 0x10,0);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  lVar3 = _DAT_1000295a8;
  lVar5 = 0;
  __s8Dispatch0A4TimeVMa();
  pcVar10 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  (*pcVar10)(unaff_x20 + lVar3,1,1,lVar5);
  (*pcVar10)(unaff_x20 + _DAT_1000295b0,1,1,lVar5);
  uVar9 = 1;
  (*pcVar10)(unaff_x20 + _DAT_1000295b8,1,1,lVar5);
  *(undefined1 *)(unaff_x20 + _DAT_1000295c0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1000295c8) = 0;
  bVar4 = param_1 == '\0';
  ppuVar6 = &PTR____CFConstantStringClassReference_1000251e0;
  if (!bVar4) {
    ppuVar6 = &PTR____CFConstantStringClassReference_1000251c0;
  }
  uVar1 = 3;
  if (!bVar4) {
    uVar1 = 0x32;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar2 = 0x6f69647561;
  if (param_1 != '\x01') {
    uVar2 = 0x6f65646976;
  }
  uVar7 = 0;
  func_0x00010001bbb0(0);
  _swift_allocObject();
  FUN_100019ce0(ppuVar6,uVar9,uVar2,0xe500000000000000,uVar1,bVar4,uVar7);
  puVar8 = (undefined *)0x0;
  *(undefined ***)(unaff_x20 + 0x20) = ppuVar6;
  if (param_1 == '\0') {
    puVar8 = PTR_PTR_100028fc8;
    _objc_allocWithZone();
    func_0x00010001d820();
  }
  *(undefined **)(unaff_x20 + 0x28) = puVar8;
  *(char *)(unaff_x20 + 0x30) = param_1;
  func_0x000100011930();
  return;
}



/* Entry: 100010190; end: 1000102f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100010190(ulong param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long unaff_x20;
  code *pcVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x1000297c0;
  FUN_100012244(0x1000297c0,&UNK_10001e600);
  (*(code *)PTR____chkstk_darwin_100024068)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_60 + -extraout_x8;
  if ((param_1 & 1) != 0) {
    lVar2 = 0;
    __s8Dispatch0A4TimeVMa();
    pcVar4 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    (*pcVar4)(puVar3,1,1,lVar2);
    lVar1 = _DAT_1000295a8;
    _swift_beginAccess(unaff_x20 + _DAT_1000295a8,auStack_58,0x21,0);
    func_0x000100012294(puVar3,unaff_x20 + lVar1);
    _swift_endAccess(auStack_58);
    (*pcVar4)(puVar3,1,1,lVar2);
    lVar1 = _DAT_1000295b0;
    _swift_beginAccess(unaff_x20 + _DAT_1000295b0,auStack_58,0x21,0);
    func_0x000100012294(puVar3,unaff_x20 + lVar1);
    _swift_endAccess(auStack_58);
    (*pcVar4)(puVar3,1,1,lVar2);
    lVar1 = _DAT_1000295b8;
    _swift_beginAccess(unaff_x20 + _DAT_1000295b8,auStack_58,0x21,0);
    func_0x000100012294(puVar3,unaff_x20 + lVar1);
    _swift_endAccess(auStack_58);
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
  }
  (**(code **)(**(long **)(unaff_x20 + 0x20) + 0x250))();
  return;
}



/* Entry: 1000102f8; end: 10001072f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000102f8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long lVar16;
  code *pcVar17;
  double dVar18;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = 0x1000297c0;
  FUN_100012244(0x1000297c0,&UNK_10001e600);
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar14 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100024068)();
  puVar15 = puVar14 + -extraout_x12;
  lVar4 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar16 = *(long *)(lVar4 + -8);
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(lVar16 + 0x40));
  uVar13 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100024068)();
  lVar12 = uVar13 - extraout_x12_00;
  (**(code **)(**(long **)(unaff_x20 + 0x20) + 600))();
  lVar3 = _DAT_1000295b8;
  _swift_beginAccess(unaff_x20 + _DAT_1000295b8,auStack_88,0,0);
  FUN_100012340(unaff_x20 + lVar3,puVar15);
  pcVar11 = *(code **)(lVar16 + 0x30);
  puVar6 = puVar15;
  (*pcVar11)(puVar15,1,lVar4);
  lStack_a0 = lVar5;
  if ((int)puVar6 != 1) {
    pcVar17 = *(code **)(lVar16 + 0x20);
    (*pcVar17)(lVar12,puVar15,lVar4);
    lVar3 = _DAT_1000295b0;
    _swift_beginAccess(unaff_x20 + _DAT_1000295b0,auStack_b8,0,0);
    FUN_100012340(unaff_x20 + lVar3,puVar14);
    puVar6 = puVar14;
    (*pcVar11)(puVar14,1,lVar4);
    if ((int)puVar6 != 1) {
      uVar7 = uVar13;
      (*pcVar17)(uVar13,puVar14,lVar4);
      __s8Dispatch0A4TimeV17uptimeNanosecondss6UInt64Vvg();
      uVar8 = uVar7;
      __s8Dispatch0A4TimeV17uptimeNanosecondss6UInt64Vvg();
      if (uVar8 <= uVar7) {
        dVar18 = (double)(uVar7 - uVar8) / 1000000000.0;
        uStack_98 = 0;
        uStack_90 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x3f);
        __sSS6appendyySSF(0x5b,0xe100000000000000);
        puVar1 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000243d0;
        puVar9 = PTR___ss26DefaultStringInterpolationVN_1000243c8;
        __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                  (unaff_x20 + 0x30,&uStack_98,&UNK_1000249d0,
                   PTR___ss26DefaultStringInterpolationVN_1000243c8,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000243d0);
        __sSS6appendyySSF(0xd00000000000001e,0x80000001000203f0);
        puVar10 = PTR___sSis23CustomStringConvertiblesWP_100024358;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___sSiN_100024348,PTR___sSis23CustomStringConvertiblesWP_100024358);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar10);
        __sSS6appendyySSF(0x2073656d61726620,0xed0000207265766f);
        __sSd5write2toyxz_ts16TextOutputStreamRzlF(dVar18,&uStack_98,puVar9,puVar1);
        __sSS6appendyySSF(0x282063657320,0xe600000000000000);
        __sSd5write2toyxz_ts16TextOutputStreamRzlF((double)lVar5 / dVar18,&uStack_98,puVar9,puVar1);
        __sSS6appendyySSF(0x2973706620,0xe500000000000000);
        uVar2 = uStack_90;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_98,uStack_90);
        _objc_release();
        _swift_bridgeObjectRelease(uVar2);
        pcVar11 = *(code **)(lVar16 + 8);
        (*pcVar11)(uVar13,lVar4);
        (*pcVar11)(lVar12,lVar4);
        return;
      }
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100010730);
      (*pcVar11)();
    }
    (**(code **)(lVar16 + 8))(lVar12,lVar4);
    puVar15 = puVar14;
  }
  func_0x000100012390(puVar15,0x1000297c0,&UNK_10001e600);
  uStack_98 = 0;
  uStack_90 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x2a);
  __sSS6appendyySSF(0x5b,0xe100000000000000);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (unaff_x20 + 0x30,&uStack_98,&UNK_1000249d0,
             PTR___ss26DefaultStringInterpolationVN_1000243c8,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000243d0);
  __sSS6appendyySSF(0xd00000000000001e,0x80000001000203f0);
  puVar9 = PTR___sSis23CustomStringConvertiblesWP_100024358;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100024348,PTR___sSis23CustomStringConvertiblesWP_100024358);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0x73656d61726620,0xe700000000000000);
  uVar2 = uStack_90;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_98,uStack_90);
  _objc_release();
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 100010730; end: 100010947;  */

void FUN_100010730(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x12;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  double dStack_70;
  
  lVar2 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar10 = *(long *)(lVar2 + -8);
  lVar7 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_100024068)();
  puVar6 = auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100024068)();
  lVar5 = (long)puVar6 - extraout_x12;
  _CMSampleBufferGetPresentationTimeStamp(auStack_78,param_1);
  _CMTimeGetSeconds(auStack_78);
  dStack_70 = dStack_70 * 1000000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dStack_70)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100010940);
    (*pcVar1)();
  }
  if (-1.0 < dStack_70) {
    if (dStack_70 < 1.8446744073709552e+19) {
      uVar9 = *(ulong *)(unaff_x20 + 0x28);
      if ((uVar9 == 0) || (uVar8 = uVar9, func_0x00010001d980(), (uVar8 & 1) == 0)) {
        (**(code **)(**(long **)(unaff_x20 + 0x20) + 0x260))();
        __s8Dispatch0A4TimeV3nowACyFZ(lVar5);
        if (((uint)param_1 & 0xff) == 4) {
          func_0x00010001d880(uVar9);
        }
        puVar3 = &UNK_100024898;
        _swift_allocObject(&UNK_100024898,0x18,7);
        _swift_weakInit(puVar3 + 0x10);
        (**(code **)(lVar10 + 0x10))(puVar6,lVar5,lVar2);
        uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
        uVar8 = uVar9 + 0x19 & (uVar9 ^ 0xffffffffffffffff);
        puVar4 = &UNK_100024938;
        _swift_allocObject(&UNK_100024938,uVar8 + lVar7,uVar9 | 7);
        *(undefined **)(puVar4 + 0x10) = puVar3;
        puVar4[0x18] = (char)param_1;
        (**(code **)(lVar10 + 0x20))(puVar4 + uVar8,puVar6,lVar2);
        _swift_retain(puVar3);
        FUN_100012d1c(FUN_100012480,puVar4);
        _swift_release(puVar4);
        (**(code **)(lVar10 + 8))(lVar5,lVar2);
        _swift_release(puVar3);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100010948);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100010944);
  (*pcVar1)();
}



/* Entry: 100010948; end: 100010abb;  */

void FUN_100010948(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_100010abc(param_2,param_3);
    _swift_release(param_1);
  }
  return;
}



/* Entry: 100010abc; end: 1000113b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100010abc(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long unaff_x20;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  code *pcVar18;
  long lVar19;
  undefined1 auStack_130 [4];
  uint uStack_12c;
  code *pcStack_128;
  code *pcStack_120;
  long lStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  pcStack_c8 = (code *)CONCAT44(pcStack_c8._4_4_,param_1);
  lVar2 = 0;
  uStack_b8 = param_2;
  __s8Dispatch0A4TimeVMa();
  lVar16 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(lVar16 + 0x40));
  puStack_f0 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100024068)();
  lVar7 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar13 = 0x1000297c8;
  lStack_f8 = lVar7;
  FUN_100012244(0x1000297c8,&UNK_10001e608);
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar7 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_d8 = lVar7;
  (*(code *)PTR____chkstk_darwin_100024068)();
  lVar7 = lVar7 - extraout_x12_00;
  lVar8 = 0x1000297c0;
  FUN_100012244(0x1000297c0,&UNK_10001e600);
  (*(code *)PTR____chkstk_darwin_100024068)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_118 = lVar8;
  (*(code *)PTR____chkstk_darwin_100024068)();
  puVar9 = (undefined1 *)(lVar8 - extraout_x12_01);
  puStack_e8 = puVar9;
  (*(code *)PTR____chkstk_darwin_100024068)();
  uVar10 = (long)puVar9 - extraout_x12_02;
  uStack_108 = uVar10;
  (*(code *)PTR____chkstk_darwin_100024068)();
  uVar10 = uVar10 - extraout_x12_03;
  uStack_100 = uVar10;
  (*(code *)PTR____chkstk_darwin_100024068)();
  uVar10 = uVar10 - extraout_x12_04;
  uStack_110 = uVar10;
  (*(code *)PTR____chkstk_darwin_100024068)();
  lVar11 = uVar10 - extraout_x12_05;
  lStack_d0 = lVar11;
  (*(code *)PTR____chkstk_darwin_100024068)();
  lVar11 = lVar11 - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_100024068)();
  lVar19 = lVar11 - extraout_x12_07;
  (*(code *)PTR____chkstk_darwin_100024068)();
  lVar1 = _DAT_1000295a8;
  lVar14 = lVar19 - extraout_x12_08;
  _swift_beginAccess(unaff_x20 + _DAT_1000295a8,auStack_80,0,0);
  pcVar18 = *(code **)(lVar16 + 0x38);
  (*pcVar18)(lVar14,1,1,lVar2);
  lVar8 = (long)*(int *)(lVar13 + 0x30);
  lStack_e0 = lVar13;
  FUN_100012340(unaff_x20 + lVar1,lVar7);
  FUN_100012340(lVar14,lVar7 + lVar8);
  pcVar17 = *(code **)(lVar16 + 0x30);
  lVar13 = lVar7;
  lStack_c0 = lVar16;
  (*pcVar17)(lVar7,1,lVar2);
  if ((int)lVar13 == 1) {
    func_0x000100012390(lVar14,0x1000297c0,&UNK_10001e600);
    lVar8 = lVar7 + lVar8;
    (*pcVar17)(lVar8,1,lVar2);
    lVar15 = lStack_c0;
    if ((int)lVar8 == 1) {
      func_0x000100012390(lVar7,0x1000297c0,&UNK_10001e600);
      uVar10 = (ulong)pcStack_c8 & 0xffffffff;
LAB_100010edc:
      (**(code **)(lVar15 + 0x10))(lVar11,uStack_b8,lVar2);
      (*pcVar18)(lVar11,0,1,lVar2);
      _swift_beginAccess(unaff_x20 + lVar1,auStack_98,0x21,0);
      func_0x000100012294(lVar11,unaff_x20 + lVar1);
      _swift_endAccess(auStack_98);
    }
    else {
LAB_100010dfc:
      func_0x000100012390(lVar7,0x1000297c8,&UNK_10001e608);
      uVar10 = (ulong)pcStack_c8 & 0xffffffff;
    }
  }
  else {
    FUN_100012340(lVar7,lVar19);
    lVar13 = lVar7 + lVar8;
    (*pcVar17)(lVar13,1,lVar2);
    lVar15 = lStack_c0;
    lVar16 = lStack_f8;
    if ((int)lVar13 == 1) {
      func_0x000100012390(lVar14,0x1000297c0,&UNK_10001e600);
      lVar15 = lStack_c0;
      (**(code **)(lStack_c0 + 8))(lVar19,lVar2);
      goto LAB_100010dfc;
    }
    lVar13 = lStack_f8;
    pcStack_128 = pcVar17;
    pcStack_120 = pcVar18;
    (**(code **)(lStack_c0 + 0x20))(lStack_f8,lVar7 + lVar8,lVar2);
    FUN_1000123d0();
    lVar8 = lVar19;
    __sSQ2eeoiySbx_xtFZTj(lVar19,lVar16,lVar2,lVar13);
    pcVar17 = pcStack_128;
    uStack_12c = (uint)lVar8;
    pcVar12 = *(code **)(lVar15 + 8);
    (*pcVar12)(lVar16,lVar2);
    pcVar18 = pcStack_120;
    func_0x000100012390(lVar14,0x1000297c0,&UNK_10001e600);
    (*pcVar12)(lVar19,lVar2);
    func_0x000100012390(lVar7,0x1000297c0,&UNK_10001e600);
    uVar10 = (ulong)pcStack_c8 & 0xffffffff;
    if ((uStack_12c & 1) != 0) goto LAB_100010edc;
  }
  lVar13 = _DAT_1000295b8;
  if (((uint)uVar10 & 0xff) != 4) {
    _swift_beginAccess(unaff_x20 + _DAT_1000295b8,auStack_98,0,0);
    puVar4 = puStack_e8;
    FUN_100012340(unaff_x20 + lVar13,puStack_e8);
    puVar3 = puVar4;
    (*pcVar17)(puVar4,1,lVar2);
    puVar9 = puStack_f0;
    lVar13 = lStack_118;
    if ((int)puVar3 == 1) {
      FUN_100012340(unaff_x20 + lVar1,lStack_118);
      lVar8 = lVar13;
      (*pcVar17)(lVar13,1,lVar2);
      puVar9 = puStack_f0;
      if ((int)lVar8 == 1) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1000113b4);
        (*pcVar17)();
      }
      (**(code **)(lVar15 + 0x20))(puStack_f0,lVar13,lVar2);
      puVar3 = puVar4;
      (*pcVar17)(puVar4,1,lVar2);
      if ((int)puVar3 != 1) {
        func_0x000100012390(puVar4,0x1000297c0,&UNK_10001e600);
        puVar3 = puVar4;
      }
    }
    else {
      puVar3 = puStack_f0;
      (**(code **)(lVar15 + 0x20))(puStack_f0,puVar4,lVar2);
    }
    __s8Dispatch0A4TimeV17uptimeNanosecondss6UInt64Vvg();
    puVar4 = puVar3;
    __s8Dispatch0A4TimeV17uptimeNanosecondss6UInt64Vvg();
    if (puVar4 <= puVar3) {
      if (2000000000 < (ulong)((long)puVar3 - (long)puVar4)) {
        FUN_1000113b4(uVar10);
      }
      (**(code **)(lVar15 + 8))(puVar9,lVar2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x1000113a4);
    (*pcVar17)();
  }
  pcStack_c8 = *(code **)(lVar15 + 0x10);
  (*pcStack_c8)(lVar11,uStack_b8,lVar2);
  (*pcVar18)(lVar11,0,1,lVar2);
  lVar1 = _DAT_1000295b8;
  _swift_beginAccess(unaff_x20 + _DAT_1000295b8,auStack_98,0x21,0);
  func_0x000100012294(lVar11,unaff_x20 + lVar1);
  _swift_endAccess(auStack_98);
  lVar8 = _DAT_1000295b0;
  _swift_beginAccess(unaff_x20 + _DAT_1000295b0,auStack_98,0,0);
  lVar14 = lStack_d0;
  pcStack_120 = pcVar18;
  (*pcVar18)(lStack_d0,1,1,lVar2);
  lVar7 = lStack_d8;
  lVar13 = (long)*(int *)(lStack_e0 + 0x30);
  FUN_100012340(unaff_x20 + lVar8,lStack_d8);
  FUN_100012340(lVar14,lVar7 + lVar13);
  lVar16 = lVar7;
  (*pcVar17)(lVar7,1,lVar2);
  uVar10 = uStack_110;
  if ((int)lVar16 == 1) {
    func_0x000100012390(lVar14,0x1000297c0,&UNK_10001e600);
    lVar13 = lVar7 + lVar13;
    (*pcVar17)(lVar13,1,lVar2);
    if ((int)lVar13 != 1) {
LAB_100011164:
      func_0x000100012390(lVar7,0x1000297c8,&UNK_10001e608);
      goto LAB_1000112d4;
    }
    func_0x000100012390(lVar7,0x1000297c0,&UNK_10001e600);
  }
  else {
    FUN_100012340(lVar7,uStack_110);
    lVar14 = lVar7 + lVar13;
    (*pcVar17)(lVar14,1,lVar2);
    lVar16 = lStack_f8;
    if ((int)lVar14 == 1) {
      func_0x000100012390(lStack_d0,0x1000297c0,&UNK_10001e600);
      (**(code **)(lVar15 + 8))(uVar10,lVar2);
      goto LAB_100011164;
    }
    lVar14 = lStack_f8;
    pcStack_128 = pcVar17;
    (**(code **)(lVar15 + 0x20))(lStack_f8,lVar7 + lVar13,lVar2);
    FUN_1000123d0();
    uVar5 = uVar10;
    __sSQ2eeoiySbx_xtFZTj(uVar10,lVar16,lVar2,lVar14);
    pcVar17 = pcStack_128;
    pcVar18 = *(code **)(lVar15 + 8);
    (*pcVar18)(lVar16,lVar2);
    func_0x000100012390(lStack_d0,0x1000297c0,&UNK_10001e600);
    (*pcVar18)(uVar10,lVar2);
    func_0x000100012390(lVar7,0x1000297c0,&UNK_10001e600);
    if ((uVar5 & 1) == 0) goto LAB_1000112d4;
  }
  (*pcStack_c8)(lVar11,uStack_b8,lVar2);
  (*pcStack_120)(lVar11,0,1,lVar2);
  _swift_beginAccess(unaff_x20 + lVar8,auStack_b0,0x21,0);
  func_0x000100012294(lVar11,unaff_x20 + lVar8);
  _swift_endAccess(auStack_b0);
LAB_1000112d4:
  uVar10 = uStack_100;
  if (0 < *(long *)(unaff_x20 + 0x38)) {
    FUN_100012340(unaff_x20 + lVar1,uStack_100);
    uVar5 = uVar10;
    (*pcVar17)(uVar10,1,lVar2);
    if ((int)uVar5 == 1) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1000113ac);
      (*pcVar17)();
    }
    __s8Dispatch0A4TimeV17uptimeNanosecondss6UInt64Vvg();
    pcVar18 = *(code **)(lStack_c0 + 8);
    (*pcVar18)(uVar10,lVar2);
    uVar10 = uStack_108;
    FUN_100012340(unaff_x20 + lVar8,uStack_108);
    uVar6 = uVar10;
    (*pcVar17)(uVar10,1,lVar2);
    if ((int)uVar6 == 1) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1000113b0);
      (*pcVar17)();
    }
    __s8Dispatch0A4TimeV17uptimeNanosecondss6UInt64Vvg();
    (*pcVar18)(uVar10,lVar2);
    if (uVar5 < uVar6) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1000113a8);
      (*pcVar17)();
    }
    if (2000000000 < uVar5 - uVar6) {
      *(undefined8 *)(unaff_x20 + 0x38) = 0;
    }
  }
  return;
}



/* Entry: 1000113b4; end: 100011a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000113b4(byte param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  code *pcVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar2 = 0x1000297c0;
  FUN_100012244(0x1000297c0,&UNK_10001e600);
  (*(code *)PTR____chkstk_darwin_100024068)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = (long)&uStack_60 - extraout_x8;
  if (SCARRY8(*(long *)(unaff_x20 + 0x38),1)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100011930);
    (*pcVar9)();
  }
  *(long *)(unaff_x20 + 0x38) = *(long *)(unaff_x20 + 0x38) + 1;
  lVar3 = 0;
  __s8Dispatch0A4TimeVMa();
  pcVar9 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar9)(lVar2,1,1,lVar3);
  lVar7 = _DAT_1000295a8;
  _swift_beginAccess(unaff_x20 + _DAT_1000295a8,&uStack_58,0x21,0);
  func_0x000100012294(lVar2,unaff_x20 + lVar7);
  _swift_endAccess(&uStack_58);
  (*pcVar9)(lVar2,1,1,lVar3);
  lVar7 = _DAT_1000295b0;
  _swift_beginAccess(unaff_x20 + _DAT_1000295b0,&uStack_58,0x21,0);
  func_0x000100012294(lVar2,unaff_x20 + lVar7);
  _swift_endAccess(&uStack_58);
  (*pcVar9)(lVar2,1,1,lVar3);
  lVar7 = _DAT_1000295b8;
  _swift_beginAccess(unaff_x20 + _DAT_1000295b8,&uStack_58,0x21,0);
  lVar7 = unaff_x20 + lVar7;
  func_0x000100012294(lVar2,lVar7);
  _swift_endAccess(&uStack_58);
  lVar2 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
              (&PTR____CFConstantStringClassReference_100025240);
    FUN_100013688();
    _swift_unknownObjectRelease(lVar2);
    _swift_bridgeObjectRelease(lVar7);
  }
  if (param_1 < 2) {
    if (param_1 == 0) {
      uStack_58 = 0;
      uStack_50 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x21);
      __sSS6appendyySSF(0x5b,0xe100000000000000);
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (unaff_x20 + 0x30,&uStack_58,&UNK_1000249d0,
                 PTR___ss26DefaultStringInterpolationVN_1000243c8,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000243d0);
      __sSS6appendyySSF(0x756f656d6954205d,0xea00000000002074);
      uStack_60 = *(undefined8 *)(unaff_x20 + 0x38);
      puVar5 = PTR___sSis23CustomStringConvertiblesWP_100024358;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100024348,PTR___sSis23CustomStringConvertiblesWP_100024358);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar5);
      uVar8 = 0x80000001000203b0;
      uVar4 = 0xd000000000000012;
    }
    else {
      uStack_58 = 0;
      uStack_50 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x1b);
      __sSS6appendyySSF(0x5b,0xe100000000000000);
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (unaff_x20 + 0x30,&uStack_58,&UNK_1000249d0,
                 PTR___ss26DefaultStringInterpolationVN_1000243c8,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000243d0);
      __sSS6appendyySSF(0x756f656d6954205d,0xea00000000002074);
      uStack_60 = *(undefined8 *)(unaff_x20 + 0x38);
      puVar5 = PTR___sSis23CustomStringConvertiblesWP_100024358;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100024348,PTR___sSis23CustomStringConvertiblesWP_100024358);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar5);
      uVar4 = 0x7720656d61726620;
      uVar8 = 0xec00000065746972;
    }
  }
  else if (param_1 == 2) {
    uStack_58 = 0;
    uStack_50 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x1d);
    __sSS6appendyySSF(0x5b,0xe100000000000000);
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (unaff_x20 + 0x30,&uStack_58,&UNK_1000249d0,
               PTR___ss26DefaultStringInterpolationVN_1000243c8,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000243d0);
    __sSS6appendyySSF(0x756f656d6954205d,0xea00000000002074);
    uStack_60 = *(undefined8 *)(unaff_x20 + 0x38);
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_100024358;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100024348,PTR___sSis23CustomStringConvertiblesWP_100024358);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar5);
    uVar4 = 0x6c20656d61726620;
    uVar8 = 0xee00646574696d69;
  }
  else {
    if (param_1 != 3) goto LAB_100011864;
    uStack_58 = 0;
    uStack_50 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x1e);
    __sSS6appendyySSF(0x5b,0xe100000000000000);
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (unaff_x20 + 0x30,&uStack_58,&UNK_1000249d0,
               PTR___ss26DefaultStringInterpolationVN_1000243c8,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000243d0);
    __sSS6appendyySSF(0x756f656d6954205d,0xea00000000002074);
    uStack_60 = *(undefined8 *)(unaff_x20 + 0x38);
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_100024358;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100024348,PTR___sSis23CustomStringConvertiblesWP_100024358);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar5);
    uVar4 = 0x2065646f636e6520;
    uVar8 = 0xef6572756c696166;
  }
  __sSS6appendyySSF(uVar4,uVar8);
  uVar4 = uStack_50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_58,uStack_50);
  _objc_release();
  _swift_bridgeObjectRelease(uVar4);
LAB_100011864:
  if (*(long *)(unaff_x20 + 0x38) < 3) {
    func_0x0001000109b8();
  }
  else {
    lVar2 = unaff_x20 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 != 0) {
      uVar1 = *(undefined1 *)(unaff_x20 + _DAT_1000295c8);
      puVar5 = &UNK_1000248e8;
      _swift_allocObject(&UNK_1000248e8,0x18,7);
      _swift_unknownObjectWeakInit(puVar5 + 0x10,lVar2);
      puVar6 = &UNK_100024910;
      _swift_allocObject(&UNK_100024910,0x28,7);
      puVar6[0x10] = uVar1;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      *(long *)(puVar6 + 0x20) = unaff_x20;
      _swift_retain(puVar5);
      _swift_retain();
      func_0x000100012e0c(FUN_100012334,puVar6);
      _swift_unknownObjectRelease(lVar2);
      _swift_release(puVar5);
      _swift_release(puVar6);
    }
  }
  return;
}



/* Entry: 100011a3c; end: 100011cab;  */

void FUN_100011a3c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_48 [24];
  
  puVar1 = &UNK_100024898;
  _swift_allocObject(&UNK_100024898,0x18,7);
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong(param_2);
  _swift_weakInit(puVar1 + 0x10,param_2);
  _swift_release(param_2);
  puVar2 = &UNK_1000248c0;
  _swift_allocObject(&UNK_1000248c0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  _swift_retain(puVar1);
  _swift_errorRetain(param_1);
  FUN_100012d1c(FUN_10001223c,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Entry: 100011cac; end: 100011d3f;  */

void FUN_100011cac(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_38 [24];
  
  puVar1 = &UNK_100024898;
  _swift_allocObject(&UNK_100024898,0x18,7);
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong(param_1);
  _swift_weakInit(puVar1 + 0x10,param_1);
  _swift_release(param_1);
  _swift_retain(puVar1);
  FUN_100012d1c(0x100012208,puVar1);
  _swift_release_n(puVar1,2);
  return;
}



/* Entry: 100011d40; end: 100011e93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100011d40(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    lVar2 = param_1 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 == 0) {
      _swift_release(param_1);
    }
    else {
      if (*(char *)(lVar2 + _DAT_1000298a0) == '\0') {
        uStack_58 = 0;
        uStack_50 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x23);
        __sSS6appendyySSF(0x5b,0xe100000000000000);
        __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                  (param_1 + 0x30,&uStack_58,&UNK_1000249d0,
                   PTR___ss26DefaultStringInterpolationVN_1000243c8,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000243d0);
        __sSS6appendyySSF(0xd000000000000020,0x80000001000202c0);
        uVar1 = uStack_50;
        uVar4 = uStack_50;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_58,uStack_50);
        _objc_release();
        _swift_bridgeObjectRelease(uVar1);
        lVar3 = param_1 + 0x10;
        _swift_unknownObjectWeakLoadStrong();
        if (lVar3 != 0) {
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                    (&PTR____CFConstantStringClassReference_100025200);
          FUN_100013688();
          _swift_unknownObjectRelease(lVar3);
          _swift_bridgeObjectRelease(uVar4);
        }
        func_0x0001000109b8();
      }
      _swift_release(param_1);
      _swift_unknownObjectRelease(lVar2);
    }
  }
  return;
}



/* Entry: 100011e94; end: 100011f8f;  */

void FUN_100011e94(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auStack_38 [24];
  
  if ((param_1 & 1) != 0) {
    puVar1 = &UNK_100024898;
    _swift_allocObject(&UNK_100024898,0x18,7);
    _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    _swift_weakLoadStrong(param_2);
    _swift_weakInit(puVar1 + 0x10,param_2);
    _swift_release(param_2);
    _swift_retain(puVar1);
    FUN_100012d1c(0x100012200,puVar1);
    _swift_release_n(puVar1,2);
  }
  return;
}



/* Entry: 100011f90; end: 10001202f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100011f90(void)

{
  long unaff_x20;
  
  FUN_1000124b4(unaff_x20 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100012390(unaff_x20 + _DAT_1000295a8,0x1000297c0,&UNK_10001e600);
  func_0x000100012390(unaff_x20 + _DAT_1000295b0,0x1000297c0,&UNK_10001e600);
  func_0x000100012390(unaff_x20 + _DAT_1000295b8,0x1000297c0,&UNK_10001e600);
                    /* WARNING: Could not recover jumptable at 0x00010001d4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000244a0)();
  return;
}



/* Entry: 100012030; end: 100012037;  */

void FUN_100012030(void)

{
  if (lRam00000001000295f8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10001ec58);
  return;
}



/* Entry: 100012038; end: 10001206f;  */

void FUN_100012038(undefined8 param_1)

{
  if (lRam00000001000295f8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10001ec58);
  return;
}



/* Entry: 100012070; end: 100012173;  */

void FUN_100012070(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_68 = PTR___sBoWV_1000242a0 + 0x40;
  puStack_70 = &UNK_10001e570;
  puStack_60 = &UNK_10001e588;
  puStack_58 = &UNK_10001e5a0;
  puStack_50 = PTR___sBi64_WV_100024298 + 0x40;
  lVar1 = 0x13f;
  func_0x000100012120();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10001e5a0;
    puStack_28 = &UNK_10001e5a0;
    lStack_40 = lStack_48;
    lStack_38 = lStack_48;
    _swift_updateClassMetadata2(param_1,0x100,10,&puStack_70,param_1 + 0x50);
  }
  return;
}



/* Entry: 100012174; end: 1000121e7;  */

void FUN_100012174(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam00000001000297b0 != 0) {
    return;
  }
  puVar1 = &UNK_100024868;
  _swift_getForeignTypeMetadata();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam00000001000297b0 = param_1;
  return;
}



/* Entry: 1000121e8; end: 10001220f;  */

void FUN_1000121e8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = &UNK_100024898;
  _swift_allocObject(&UNK_100024898,0x18,7);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  _swift_weakLoadStrong(lVar2);
  _swift_weakInit(puVar1 + 0x10,lVar2);
  _swift_release(lVar2);
  puVar3 = &UNK_1000248c0;
  _swift_allocObject(&UNK_1000248c0,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  _swift_retain(puVar1);
  _swift_errorRetain(param_1);
  FUN_100012d1c(FUN_10001223c,puVar3);
  _swift_release(puVar1);
  _swift_release(puVar3);
  return;
}



/* Entry: 100012210; end: 10001223b;  */

void FUN_100012210(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010001d4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000244a8)();
  return;
}



/* Entry: 10001223c; end: 100012243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001223c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 == 0) {
      _swift_release(lVar1);
    }
    else {
      if (*(char *)(lVar2 + _DAT_1000298a0) == '\0') {
        uStack_58 = 0;
        uStack_50 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x2c);
        __sSS6appendyySSF(0x5b,0xe100000000000000);
        __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                  (lVar1 + 0x30,&uStack_58,&UNK_1000249d0,
                   PTR___ss26DefaultStringInterpolationVN_1000243c8,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000243d0);
        __sSS6appendyySSF(0xd000000000000027,0x8000000100020320);
        uStack_60 = uVar3;
        _swift_errorRetain(uVar3);
        uVar3 = 0x1000297b8;
        FUN_100012244(0x1000297b8,&UNK_10001e5f8);
        __sSS10describingSSx_tclufC(&uStack_60,uVar3);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(uVar3);
        uVar3 = uStack_50;
        uVar5 = uStack_50;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_58,uStack_50);
        _objc_release();
        _swift_bridgeObjectRelease(uVar3);
        if ((*(byte *)(lVar1 + _DAT_1000295c0) & 1) == 0) {
          *(undefined1 *)(lVar1 + _DAT_1000295c0) = 1;
          lVar4 = lVar1 + 0x10;
          _swift_unknownObjectWeakLoadStrong();
          if (lVar4 != 0) {
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                      (&PTR____CFConstantStringClassReference_100025220);
            FUN_100013688();
            _swift_unknownObjectRelease(lVar4);
            _swift_bridgeObjectRelease(uVar5);
          }
        }
      }
      _swift_release(lVar1);
      _swift_unknownObjectRelease(lVar2);
    }
  }
  return;
}



/* Entry: 100012244; end: 1000122e3;  */

void FUN_100012244(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 == 0 || (*param_1 & 1) != 0) {
    uVar1 = (long)param_2 + (long)(int)*param_2;
    _swift_getTypeByMangledNameInContext(uVar1,*param_2 >> 0x20,0,0);
    *param_1 = uVar1;
  }
  return;
}



/* Entry: 1000122e4; end: 100012333;  */

void FUN_1000122e4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010001d4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000244a8)();
  return;
}



/* Entry: 100012334; end: 10001233f;  */

void FUN_100012334(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined **ppuVar7;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar5 = lVar4;
  if ((*(byte *)(unaff_x20 + 0x10) & 1) == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_1000253a0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    ppuVar3 = ppuVar2;
    lVar6 = lVar5;
    func_0x00010001be70();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_1000253c0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    ppuVar3 = ppuVar2;
    lVar6 = lVar5;
    func_0x00010001be88();
    _objc_retainAutoreleasedReturnValue();
  }
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar7 = (undefined **)0x0;
    lVar6 = 0;
  }
  else {
    ppuVar7 = ppuVar3;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(ppuVar3);
  }
  _swift_beginAccess(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 == 0) {
    _swift_bridgeObjectRelease(lVar5);
  }
  else {
    FUN_100013fdc(ppuVar2,lVar5,ppuVar7,lVar6,uVar1);
    _swift_bridgeObjectRelease(lVar5);
    _objc_release(lVar4);
  }
  _swift_bridgeObjectRelease(lVar6);
  return;
}



/* Entry: 100012340; end: 1000123cf;  */

undefined8 FUN_100012340(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1000297c0;
  FUN_100012244(0x1000297c0,&UNK_10001e600);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1000123d0; end: 100012413;  */

void FUN_1000123d0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000297d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __s8Dispatch0A4TimeVMa(0xff);
  puVar2 = PTR___s8Dispatch0A4TimeVSQAAMc_100024630;
  _swift_getWitnessTable(PTR___s8Dispatch0A4TimeVSQAAMc_100024630,uVar1);
  puRam00000001000297d0 = puVar2;
  return;
}



/* Entry: 100012414; end: 10001247f;  */

void FUN_100012414(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x19 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001d4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000244a8)();
  return;
}



/* Entry: 100012480; end: 1000124b3;  */

void FUN_100012480(void)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = 0;
  __s8Dispatch0A4TimeVMa();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_weakLoadStrong();
  if (lVar2 != 0) {
    FUN_100010abc(uVar1,unaff_x20 + (uVar3 + 0x19 & (uVar3 ^ 0xffffffffffffffff)));
    _swift_release(lVar2);
  }
  return;
}



/* Entry: 1000124b4; end: 1000124d7;  */

undefined8 FUN_1000124b4(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1000124d8; end: 10001265f;  */

void FUN_1000124d8(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 100012660; end: 1000126cb;  */

void FUN_100012660(void)

{
  undefined8 uVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0x6f69647561;
  if (cVar2 != '\x01') {
    uVar1 = 0x6f65646976;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,0xe500000000000000);
  _swift_bridgeObjectRelease(0xe500000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1000126cc; end: 10001270b;  */

void FUN_1000126cc(undefined8 param_1)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x6f69647561;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6f65646976;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010001d48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100024488)(0xe500000000000000);
  return;
}



/* Entry: 10001270c; end: 100012773;  */

void FUN_10001270c(void)

{
  undefined8 uVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  uVar1 = 0x6f69647561;
  if (cVar2 != '\x01') {
    uVar1 = 0x6f65646976;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,0xe500000000000000);
  _swift_bridgeObjectRelease(0xe500000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100012774; end: 1000127eb;  */

void FUN_100012774(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x100029838;
  FUN_100012244(0x100029838,&UNK_10001e6d8);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar2);
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



/* Entry: 1000127ec; end: 10001281f;  */

void FUN_1000127ec(undefined8 *param_1)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x6f69647561;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6f65646976;
  }
  *param_1 = uVar1;
  param_1[1] = 0xe500000000000000;
  return;
}



/* Entry: 100012820; end: 10001285f;  */

void FUN_100012820(void)

{
  undefined *puVar1;
  
  if (puRam00000001000297d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10001e6b0;
  _swift_getWitnessTable(&UNK_10001e6b0,&UNK_1000249d0);
  puRam00000001000297d8 = puVar1;
  return;
}



/* Entry: 100012860; end: 1000128ff; -[ScreenCaptureSampleHandler init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100012860(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_30;
  long lStack_28;
  
  plVar4 = &lStack_30;
  lVar2 = 0;
  FUN_100013c18();
  _objc_allocWithZone();
  func_0x00010001d7a0();
  *(long *)(param_1 + _DAT_100029840) = lVar2;
  lVar3 = lVar2;
  FUN_100012a50();
  puVar1 = PTR_s_init_100028e48;
  lStack_30 = param_1;
  lStack_28 = lVar3;
  _objc_retain();
  _objc_msgSendSuper2(&lStack_30,puVar1);
  lVar3 = lVar2 + _DAT_1000298a8;
  *(undefined ***)(lVar3 + 8) = &PTR_DAT_100024a38;
  _swift_unknownObjectWeakAssign(lVar3,plVar4);
  _objc_release(lVar2);
  return (undefined1 *)plVar4;
}



/* Entry: 100012900; end: 1000129cf; -[ScreenCaptureSampleHandler broadcastStartedWithSetupInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100012900(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_100029840);
    _objc_retain(param_1);
    lVar5 = 0;
  }
  else {
    uVar3 = 0;
    func_0x000100012a70(0);
    puVar2 = PTR___sSSSHsWP_100024308;
    puVar1 = PTR___sSSN_100024300;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___sSSN_100024300,uVar3,PTR___sSSSHsWP_100024308);
    uVar4 = *(undefined8 *)(param_1 + _DAT_100029840);
    _objc_retain(param_1);
    lVar5 = param_3;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(param_3,puVar1,uVar3,puVar2);
  }
  func_0x00010001d6c0(uVar4);
  _objc_release(param_1);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010001d48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100024488)(param_3);
  return;
}



/* Entry: 1000129d0; end: 1000129df; -[ScreenCaptureSampleHandler broadcastPaused] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000129d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000241b8)
            (*(undefined8 *)(param_1 + _DAT_100029840),PTR_s_broadcastPaused_100028e00);
  return;
}



/* Entry: 1000129e0; end: 1000129ef; -[ScreenCaptureSampleHandler broadcastResumed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000129e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001d6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000241b8)
            (*(undefined8 *)(param_1 + _DAT_100029840),PTR_s_broadcastResumed_100028e08);
  return;
}



/* Entry: 1000129f0; end: 1000129ff; -[ScreenCaptureSampleHandler broadcastFinished] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000129f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000241b8)
            (*(undefined8 *)(param_1 + _DAT_100029840),PTR_s_broadcastFinished_100028df8);
  return;
}



/* Entry: 100012a00; end: 100012a0f; -[ScreenCaptureSampleHandler processSampleBuffer:withType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100012a00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001d8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000241b8)
            (*(undefined8 *)(param_1 + _DAT_100029840),PTR_s_processSampleBuffer_withType__100028e90
            );
  return;
}



/* Entry: 100012a10; end: 100012a3f;  */

void FUN_100012a10(void)

{
  FUN_100012a50();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_100028de8);
  return;
}



/* Entry: 100012a40; end: 100012a4f; -[ScreenCaptureSampleHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100012a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001d3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000241d0)(*(undefined8 *)(param_1 + _DAT_100029840));
  return;
}



/* Entry: 100012a50; end: 100012ab3;  */

void FUN_100012a50(void)

{
  _objc_opt_self(&PTR_PTR_1000290f8);
  return;
}



/* Entry: 100012ab4; end: 100012c1b;  */

int FUN_100012ab4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100012b30;
        goto LAB_100012b14;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100012b14:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_100012b30:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100012c1c; end: 100012c5b;  */

void FUN_100012c1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000100029878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10001e784;
  _swift_getWitnessTable(&UNK_10001e784,&UNK_100024ad0);
  puRam0000000100029878 = puVar1;
  return;
}



/* Entry: 100012c5c; end: 100012c6f;  */

bool FUN_100012c5c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100012c70; end: 100012d1b;  */

void FUN_100012c70(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100012d1c; end: 100012ef7;  */

void FUN_100012d1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_70;
  ppuVar5 = &puStack_70;
  puVar2 = (undefined *)0x0;
  FUN_100012038();
  uVar3 = 0x1000298e0;
  puStack_70 = puVar2;
  FUN_100012244(0x1000298e0,&UNK_10001e810);
  __sSS10describingSSx_tclufC(&puStack_70,uVar3);
  puStack_70 = PTR___NSConcreteStackBlock_100024060;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100012ef8;
  puStack_58 = &UNK_100024bd8;
  uStack_50 = param_1;
  uStack_48 = param_2;
  __Block_copy(&puStack_70);
  uVar1 = uStack_48;
  _swift_retain(param_2);
  _swift_release(uVar1);
  __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(ppuVar4,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __runOnMainThreadAsynchronously((undefined1 *)((long)ppuVar4 + 0x20),ppuVar5);
  __Block_release(ppuVar5);
  _swift_release(ppuVar4);
  return;
}



/* Entry: 100012ef8; end: 100012f23;  */

void FUN_100012ef8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010001d57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024528)(uVar2);
  return;
}



/* Entry: 100012f24; end: 100013073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100012f24(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffc0;
  *(undefined8 *)(unaff_x20 + _DAT_100029888) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1000298a0) = 2;
  lVar2 = unaff_x20 + _DAT_1000298a8;
  *(undefined8 *)(lVar2 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar2,0);
  lVar2 = -0x2fffffffffffffe6;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x8000000100020620);
  _objc_release();
  _CFNotificationCenterGetDarwinNotifyCenter();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_100029880) = lVar2;
    lVar2 = 0;
    FUN_100012038();
    _swift_allocObject();
    uVar3 = 0;
    FUN_100010000();
    *(undefined8 *)(unaff_x20 + _DAT_100029890) = uVar3;
    _swift_allocObject(lVar2,*(undefined4 *)(lVar2 + 0x30),*(undefined2 *)(lVar2 + 0x34));
    uVar3 = 1;
    FUN_100010000();
    *(undefined8 *)(unaff_x20 + _DAT_100029898) = uVar3;
    FUN_100013c18();
    _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_100028e48);
    lVar2 = *(long *)(puVar4 + _DAT_100029890);
    *(undefined ***)(lVar2 + 0x18) = &PTR_DAT_100024b18;
    _swift_unknownObjectWeakAssign(lVar2 + 0x10,puVar4);
    lVar2 = *(long *)(puVar4 + _DAT_100029898);
    *(undefined ***)(lVar2 + 0x18) = &PTR_DAT_100024b18;
    _swift_unknownObjectWeakAssign(lVar2 + 0x10,puVar4);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100013074);
  (*pcVar1)();
}



/* Entry: 100013074; end: 100013093; -[_TtC26ScreenCaptureExtension_lib36ScreenCaptureVideoAudioSampleHandler init] */

void FUN_100013074(void)

{
  FUN_100012f24();
  return;
}



/* Entry: 100013094; end: 1000130e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013094(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_100029888) != 0) {
    _CFNotificationCenterRemoveEveryObserver();
  }
  FUN_100013c18();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_100028de8);
  return;
}



/* Entry: 1000130e4; end: 100013163; -[_TtC26ScreenCaptureExtension_lib36ScreenCaptureVideoAudioSampleHandler dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000130e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + _DAT_100029888);
  if (lVar1 == 0) {
    lVar2 = param_1;
    _objc_retain();
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_100029880);
    _objc_retain(param_1);
    _CFNotificationCenterRemoveEveryObserver(lVar2,lVar1);
  }
  FUN_100013c18();
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_100028de8);
  return;
}



/* Entry: 100013164; end: 10001320f; -[_TtC26ScreenCaptureExtension_lib36ScreenCaptureVideoAudioSampleHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100013164(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_100029880));
  _swift_release(*(undefined8 *)(param_1 + _DAT_100029890));
  _swift_release(*(undefined8 *)(param_1 + _DAT_100029898));
  param_1 = param_1 + _DAT_1000298a8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 100013210; end: 1000134d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013210(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar1 = _DAT_1000298a0;
  if (*(char *)(unaff_x20 + _DAT_1000298a0) == '\x02') {
    *(undefined1 *)(unaff_x20 + _DAT_1000298a0) = 0;
    puVar2 = PTR__OBJC_CLASS___SCExtensionCrashManager_100028fd8;
    _objc_opt_self(PTR__OBJC_CLASS___SCExtensionCrashManager_100028fd8);
    puVar3 = puVar2;
    func_0x00010001d960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010001d9a0();
    _objc_release(puVar3);
    func_0x00010001d960(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_100028fe0;
    _objc_opt_self(PTR_PTR_100028fe0);
    func_0x00010001d780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010001d940(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar3);
    __s6Darwin7SIG_IGNyys5Int32VXCvg();
    _signal(0xd,puVar3);
    *(long *)(unaff_x20 + _DAT_100029888) = unaff_x20;
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_100029880);
    _CFNotificationCenterAddObserver(uVar6);
    _CFNotificationCenterAddObserver(uVar6);
    uVar5 = 0x8000000100020580;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x8000000100020580);
    _objc_release();
    ppuVar4 = &PTR____CFConstantStringClassReference_100025320;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
              (&PTR____CFConstantStringClassReference_100025320);
    if (*(char *)(unaff_x20 + lVar1) == '\x01') {
      _swift_bridgeObjectRelease(uVar5);
    }
    else {
      _swift_bridgeObjectRetain(uVar5);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar4,uVar5);
      _CFNotificationCenterPostNotification(uVar6,ppuVar4,0,0,1);
      _swift_bridgeObjectRelease_n(uVar5,2);
      _objc_release(ppuVar4);
    }
    if (*(char *)(unaff_x20 + lVar1) != '\x01') {
      uVar5 = 0x80000001000204c0;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x80000001000204c0);
      _objc_release();
      ppuVar4 = &PTR____CFConstantStringClassReference_1000252e0;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                (&PTR____CFConstantStringClassReference_1000252e0);
      if (*(char *)(unaff_x20 + lVar1) == '\x01') {
        _swift_bridgeObjectRelease(uVar5);
      }
      else {
        _swift_bridgeObjectRetain(uVar5);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar4,uVar5);
        _CFNotificationCenterPostNotification(uVar6,ppuVar4,0,0,1);
        _swift_bridgeObjectRelease_n(uVar5,2);
        _objc_release(ppuVar4);
      }
      FUN_100010190(1);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_100029898);
      _swift_retain(uVar5);
      FUN_100010190(1);
      _swift_release(uVar5);
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x2065727574706143,0xef64657472617473);
                    /* WARNING: Could not recover jumptable at 0x00010001d3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000241d0)();
    return;
  }
  return;
}



/* Entry: 1000134d8; end: 10001354b; -[_TtC26ScreenCaptureExtension_lib36ScreenCaptureVideoAudioSampleHandler broadcastStartedWithSetupInfo:] */

void FUN_1000134d8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_100024b48;
  _swift_allocObject(&UNK_100024b48,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  _objc_retain(param_1);
  _swift_retain(puVar1);
  func_0x000100012e0c(0x100013c90,puVar1);
  _swift_release_n(puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010001d3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000241d0)(param_1);
  return;
}



/* Entry: 10001354c; end: 100013687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001354c(long param_1)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar2 = auStack_48;
  _swift_beginAccess(param_1 + 0x10,puVar2,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    if (*(char *)(param_1 + _DAT_1000298a0) != '\x01') {
      *(undefined1 *)(param_1 + _DAT_1000298a0) = 2;
      ppuVar1 = &PTR____CFConstantStringClassReference_100025300;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                (&PTR____CFConstantStringClassReference_100025300);
      uVar3 = *(undefined8 *)(param_1 + _DAT_100029880);
      _swift_bridgeObjectRetain(puVar2);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar1,puVar2);
      _CFNotificationCenterPostNotification(uVar3,ppuVar1,0,0,1);
      _swift_bridgeObjectRelease_n(puVar2,2);
      _objc_release(ppuVar1);
      FUN_1000102f8();
      uVar3 = *(undefined8 *)(param_1 + _DAT_100029898);
      _swift_retain(uVar3);
      FUN_1000102f8();
      _swift_release(uVar3);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x2065727574706143,0xee00646573756170);
      _objc_release(param_1);
    }
    _objc_release();
  }
  return;
}



/* Entry: 100013688; end: 100013793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013688(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  if (*(char *)(unaff_x20 + _DAT_1000298a0) != '\x01') {
    if ((param_3 == 0) || (*(long *)(unaff_x20 + _DAT_100029898) != param_3)) {
      _swift_bridgeObjectRetain(param_2);
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_1000252a0;
      uVar2 = param_2;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                (&PTR____CFConstantStringClassReference_1000252a0);
      _swift_bridgeObjectRetain(param_2);
      _swift_retain(param_3);
      __sSS6appendyySSF(ppuVar1,uVar2);
      _swift_release(param_3);
      _swift_bridgeObjectRelease(uVar2);
    }
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_100029880);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    _CFNotificationCenterPostNotification(uVar2,param_1,0,0,1);
    _swift_bridgeObjectRelease(param_2);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 100013794; end: 10001379f; -[_TtC26ScreenCaptureExtension_lib36ScreenCaptureVideoAudioSampleHandler broadcastPaused] */

void FUN_100013794(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_100024b48;
  _swift_allocObject(&UNK_100024b48,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  _objc_retain(param_1);
  _swift_retain(puVar1);
  func_0x000100012e0c(0x100013c88,puVar1);
  _swift_release_n(puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010001d3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000241d0)(param_1);
  return;
}



/* Entry: 1000137a0; end: 100013987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000137a0(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  puVar4 = auStack_58;
  _swift_beginAccess(param_1 + 0x10,puVar4,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _DAT_1000298a0;
  if (param_1 != 0) {
    lVar3 = param_1;
    if (*(char *)(param_1 + _DAT_1000298a0) != '\x01') {
      *(undefined1 *)(param_1 + _DAT_1000298a0) = 0;
      ppuVar2 = &PTR____CFConstantStringClassReference_1000252c0;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                (&PTR____CFConstantStringClassReference_1000252c0);
      lVar3 = _DAT_100029880;
      uVar6 = *(undefined8 *)(param_1 + _DAT_100029880);
      _swift_bridgeObjectRetain(puVar4);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar2,puVar4);
      _CFNotificationCenterPostNotification(uVar6,ppuVar2,0,0,1);
      _swift_bridgeObjectRelease_n(puVar4,2);
      _objc_release(ppuVar2);
      if (*(char *)(param_1 + lVar1) != '\x01') {
        uVar6 = 0x80000001000204c0;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x80000001000204c0)
        ;
        _objc_release();
        ppuVar2 = &PTR____CFConstantStringClassReference_1000252e0;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                  (&PTR____CFConstantStringClassReference_1000252e0);
        if (*(char *)(param_1 + lVar1) == '\x01') {
          _swift_bridgeObjectRelease(uVar6);
        }
        else {
          uVar5 = *(undefined8 *)(param_1 + lVar3);
          _swift_bridgeObjectRetain(uVar6);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar2,uVar6);
          _CFNotificationCenterPostNotification(uVar5,ppuVar2,0,0,1);
          _swift_bridgeObjectRelease_n(uVar6,2);
          _objc_release(ppuVar2);
        }
        FUN_100010190(1);
        uVar6 = *(undefined8 *)(param_1 + _DAT_100029898);
        _swift_retain(uVar6);
        FUN_100010190(1);
        _swift_release(uVar6);
      }
      lVar3 = 0x2065727574706143;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x2065727574706143,0xef64656d75736572);
      _objc_release(param_1);
    }
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 100013988; end: 100013993; -[_TtC26ScreenCaptureExtension_lib36ScreenCaptureVideoAudioSampleHandler broadcastResumed] */

void FUN_100013988(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_100024b48;
  _swift_allocObject(&UNK_100024b48,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  _objc_retain(param_1);
  _swift_retain(puVar1);
  func_0x000100012e0c(0x100013c80,puVar1);
  _swift_release_n(puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010001d3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000241d0)(param_1);
  return;
}



/* Entry: 100013994; end: 100013a0f;  */

void FUN_100013994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_100024b48;
  _swift_allocObject(&UNK_100024b48,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  _objc_retain(param_1);
  _swift_retain(puVar1);
  func_0x000100012e0c(param_3,puVar1);
  _swift_release_n(puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010001d3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000241d0)(param_1);
  return;
}



/* Entry: 100013a10; end: 100013b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013a10(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  puVar3 = auStack_58;
  _swift_beginAccess(param_1 + 0x10,puVar3,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _DAT_1000298a0;
  if (param_1 != 0) {
    if (*(char *)(param_1 + _DAT_1000298a0) != '\x01') {
      ppuVar2 = &PTR____CFConstantStringClassReference_100025280;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                (&PTR____CFConstantStringClassReference_100025280);
      uVar4 = *(undefined8 *)(param_1 + _DAT_100029880);
      _swift_bridgeObjectRetain(puVar3);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar2,puVar3);
      _CFNotificationCenterPostNotification(uVar4,ppuVar2,0,0,1);
      _swift_bridgeObjectRelease_n(puVar3,2);
      _objc_release(ppuVar2);
      FUN_1000102f8();
      uVar4 = *(undefined8 *)(param_1 + _DAT_100029898);
      _swift_retain(uVar4);
      FUN_1000102f8();
      _swift_release(uVar4);
      *(undefined1 *)(param_1 + lVar1) = 1;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x8000000100020450);
      _objc_release(param_1);
    }
    _objc_release();
  }
  return;
}



/* Entry: 100013b4c; end: 100013b57; -[_TtC26ScreenCaptureExtension_lib36ScreenCaptureVideoAudioSampleHandler broadcastFinished] */

void FUN_100013b4c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_100024b48;
  _swift_allocObject(&UNK_100024b48,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  _objc_retain(param_1);
  _swift_retain(puVar1);
  func_0x000100012e0c(FUN_100013c5c,puVar1);
  _swift_release_n(puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010001d3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000241d0)(param_1);
  return;
}



/* Entry: 100013b58; end: 100013c17; -[_TtC26ScreenCaptureExtension_lib36ScreenCaptureVideoAudioSampleHandler processSampleBuffer:withType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013b58(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_4 == 2) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_100029898);
    _objc_retain(param_3);
    _objc_retain(param_1);
    _swift_retain(uVar2);
    FUN_100010730(param_3);
    _swift_release(uVar2);
    lVar1 = param_1;
  }
  else {
    if (param_4 != 1) {
      return;
    }
    _objc_retain(param_3);
    _objc_retain(param_1);
    FUN_100010730(param_3);
    lVar1 = param_3;
    param_3 = param_1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001d3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000241d0)(lVar1);
  return;
}



/* Entry: 100013c18; end: 100013c5b;  */

void FUN_100013c18(void)

{
  _objc_opt_self(&PTR_PTR_1000291b0);
  return;
}



/* Entry: 100013c5c; end: 100013c97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013c5c(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  puVar4 = auStack_58;
  _swift_beginAccess(unaff_x20 + 0x10,puVar4,0,0);
  lVar2 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _DAT_1000298a0;
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + _DAT_1000298a0) != '\x01') {
      ppuVar3 = &PTR____CFConstantStringClassReference_100025280;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                (&PTR____CFConstantStringClassReference_100025280);
      uVar5 = *(undefined8 *)(lVar2 + _DAT_100029880);
      _swift_bridgeObjectRetain(puVar4);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar3,puVar4);
      _CFNotificationCenterPostNotification(uVar5,ppuVar3,0,0,1);
      _swift_bridgeObjectRelease_n(puVar4,2);
      _objc_release(ppuVar3);
      FUN_1000102f8();
      uVar5 = *(undefined8 *)(lVar2 + _DAT_100029898);
      _swift_retain(uVar5);
      FUN_1000102f8();
      _swift_release(uVar5);
      *(undefined1 *)(lVar2 + lVar1) = 1;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x8000000100020450);
      _objc_release(lVar2);
    }
    _objc_release();
  }
  return;
}



/* Entry: 100013c98; end: 100013ccb;  */

void FUN_100013c98(undefined8 param_1,undefined8 param_2)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
            (&PTR____CFConstantStringClassReference_100025380);
  FUN_100013ccc();
                    /* WARNING: Could not recover jumptable at 0x00010001d48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100024488)(param_2);
  return;
}



/* Entry: 100013ccc; end: 100013e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013ccc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = _DAT_1000298a0;
  if (*(char *)(unaff_x20 + _DAT_1000298a0) != '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_100029880);
    _swift_bridgeObjectRetain(param_2);
    uVar3 = param_1;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    _CFNotificationCenterPostNotification(uVar2,uVar3,0,0,1);
    _swift_bridgeObjectRelease(param_2);
    _objc_release(uVar3);
    __ss11_StringGutsV4growyySiF(0x1b);
    _swift_bridgeObjectRelease(0xe000000000000000);
    __sSS6appendyySSF(param_1,param_2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x8000000100020600);
    _objc_release();
    _swift_bridgeObjectRelease(0x8000000100020600);
    FUN_1000102f8();
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_100029898);
    _swift_retain(uVar3);
    FUN_1000102f8();
    _swift_release(uVar3);
    *(undefined1 *)(unaff_x20 + lVar1) = 1;
    lVar1 = unaff_x20 + _DAT_1000298a8;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar1 != 0) {
      func_0x00010001bd90();
                    /* WARNING: Could not recover jumptable at 0x00010001d5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_100024558)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 100013e44; end: 100013e57;  */

void FUN_100013e44(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_100024bc0;
  if (param_2 != 0) {
    _swift_allocObject(&UNK_100024bc0,0x18,7);
    *(long *)(puVar1 + 0x10) = param_2;
    _objc_retain(param_2);
    _objc_retain();
    func_0x000100012e0c(0x100013fb0,puVar1);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010001d57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_100024528)(puVar1);
    return;
  }
  return;
}



/* Entry: 100013e58; end: 100013eff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013e58(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _DAT_1000298a0) != '\0') {
    return;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x80000001000205a0);
  _objc_release();
  FUN_1000102f8();
  lVar1 = _DAT_100029898;
  uVar2 = *(undefined8 *)(param_1 + _DAT_100029898);
  _swift_retain(uVar2);
  FUN_1000102f8();
  _swift_release(uVar2);
  func_0x0001000109b8();
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  _swift_retain(uVar2);
  func_0x0001000109b8();
                    /* WARNING: Could not recover jumptable at 0x00010001d57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024528)(uVar2);
  return;
}



/* Entry: 100013f00; end: 100013f13;  */

void FUN_100013f00(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_100024b98;
  if (param_2 != 0) {
    _swift_allocObject(&UNK_100024b98,0x18,7);
    *(long *)(puVar1 + 0x10) = param_2;
    _objc_retain(param_2);
    _objc_retain();
    func_0x000100012e0c(FUN_100013fa8,puVar1);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010001d57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_100024528)(puVar1);
    return;
  }
  return;
}



/* Entry: 100013f14; end: 100013f83;  */

void FUN_100013f14(undefined8 param_1,long param_2)

{
  long in_x5;
  undefined8 in_x6;
  
  if (param_2 != 0) {
    _swift_allocObject(in_x5,0x18,7);
    *(long *)(in_x5 + 0x10) = param_2;
    _objc_retain(param_2);
    _objc_retain();
    func_0x000100012e0c(in_x6,in_x5);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010001d57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_100024528)(in_x5);
    return;
  }
  return;
}



/* Entry: 100013f84; end: 100013fa7;  */

void FUN_100013f84(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010001d4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000244a8)();
  return;
}



/* Entry: 100013fa8; end: 100013fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013fa8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (*(char *)(lVar2 + _DAT_1000298a0) != '\0') {
    return;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x80000001000205a0);
  _objc_release();
  FUN_1000102f8();
  lVar1 = _DAT_100029898;
  uVar3 = *(undefined8 *)(lVar2 + _DAT_100029898);
  _swift_retain(uVar3);
  FUN_1000102f8();
  _swift_release(uVar3);
  func_0x0001000109b8();
  uVar3 = *(undefined8 *)(lVar2 + lVar1);
  _swift_retain(uVar3);
  func_0x0001000109b8();
                    /* WARNING: Could not recover jumptable at 0x00010001d57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024528)(uVar3);
  return;
}



/* Entry: 100013fb8; end: 100013fdb;  */

undefined8 FUN_100013fb8(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 100013fdc; end: 10001433f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b0 [80];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = _DAT_1000298a0;
  puVar5 = auStack_b0;
  if (*(char *)(unaff_x20 + _DAT_1000298a0) != '\x01') {
    FUN_100013688(param_1,param_2,param_5);
    uStack_60 = 0;
    uStack_58 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x17);
    _swift_bridgeObjectRelease(uStack_58);
    uStack_60 = 0xd000000000000015;
    uStack_58 = 0x80000001000206b0;
    __sSS6appendyySSF(param_1,param_2);
    uVar6 = uStack_58;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_60,uStack_58);
    _objc_release();
    _swift_bridgeObjectRelease(uVar6);
    FUN_1000102f8();
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_100029898);
    _swift_retain(uVar6);
    FUN_1000102f8();
    _swift_release(uVar6);
    *(undefined1 *)(unaff_x20 + lVar1) = 1;
    uVar7 = *(undefined8 *)PTR__RPRecordingErrorDomain_100024048;
    lVar1 = 0x1000298e8;
    FUN_100012244(0x1000298e8,&UNK_10001e818);
    _swift_initStackObject();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    uVar6 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100024040;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    *(undefined8 *)(lVar1 + 0x20) = uVar6;
    *(undefined1 **)(lVar1 + 0x28) = puVar5;
    uVar6 = 0x1000298f0;
    FUN_100012244(0x1000298f0,&UNK_10001e820);
    *(undefined8 *)(lVar1 + 0x48) = uVar6;
    *(undefined8 *)(lVar1 + 0x30) = param_3;
    *(undefined8 *)(lVar1 + 0x38) = param_4;
    _swift_bridgeObjectRetain(param_4);
    _objc_retain(uVar7);
    lVar2 = lVar1;
    FUN_100014450(lVar1);
    _swift_setDeallocating(lVar1);
    FUN_10001455c((undefined8 *)(lVar1 + 0x20));
    puVar3 = PTR__OBJC_CLASS___NSError_100028fe8;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSError_100028fe8);
    lVar1 = lVar2;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar2,PTR___sSSN_100024300,PTR___sypN_100024450 + 8,PTR___sSSSHsWP_100024308);
    _swift_bridgeObjectRelease(lVar2);
    func_0x00010001d800(puVar3);
    _objc_release(uVar7);
    _objc_release(lVar1);
    lVar1 = unaff_x20 + _DAT_1000298a8;
    _swift_unknownObjectWeakLoadStrong();
    puVar4 = puVar3;
    if (lVar1 != 0) {
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(puVar3);
      func_0x00010001d760(lVar1);
      _swift_unknownObjectRelease(lVar1);
      _objc_release(puVar3);
    }
    _objc_release(puVar4);
  }
  return;
}



/* Entry: 100014340; end: 1000143a3;  */

undefined1  [16] FUN_100014340(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auStack_78 [56];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  puVar3 = auStack_78;
  __sSS4hash4intoys6HasherVz_tF(puVar3,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar3 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 0x10);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar4 == param_1 && uVar2 == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar4,uVar2,param_1,param_2,0), (uVar4 & 1) != 0)) {
        uVar5 = 1;
        goto LAB_100014438;
      }
      uVar7 = uVar7 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
  }
  uVar5 = 0;
LAB_100014438:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 1000143a4; end: 10001444f;  */

undefined1  [16] FUN_1000143a4(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar3 == param_1 && uVar2 == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,uVar2,param_1,param_2,0), (uVar3 & 1) != 0)) {
        uVar4 = 1;
        goto LAB_100014438;
      }
      param_3 = param_3 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
  }
  uVar4 = 0;
LAB_100014438:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Entry: 100014450; end: 10001455b;  */

undefined * FUN_100014450(long param_1)

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
  puVar5 = PTR___swiftEmptyDictionarySingleton_100024460;
  if (puVar8 != (undefined *)0x0) {
    FUN_100012244(0x100029900,&UNK_10001e830);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      func_0x0001000145a4(param_1,&uStack_80);
      uVar3 = uStack_78;
      uVar2 = uStack_80;
      uVar6 = uStack_80;
      uVar7 = uStack_78;
      FUN_100014340();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100014558);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_1000145f4(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10001455c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Entry: 10001455c; end: 1000145f3;  */

undefined8 FUN_10001455c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x1000298f8;
  FUN_100012244(0x1000298f8,&UNK_10001e828);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1000145f4; end: 10001460f;  */

undefined8 * FUN_1000145f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  return param_2;
}



/* Entry: 100014610; end: 10001466b;  */

void FUN_100014610(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 == 0) {
    _CFHTTPMessageCreateEmpty(0,0);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    *(long *)(unaff_x20 + 0x10) = lVar2;
    _objc_release(uVar3);
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10001466c);
      (*pcVar1)();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010001d120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFHTTPMessageAppendBytes_1000241e8)(lVar2,param_1,param_2);
  return;
}



/* Entry: 10001466c; end: 10001468f;  */

void FUN_10001466c(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010001d4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000244a0)();
  return;
}



/* Entry: 100014690; end: 100014703;  */

void FUN_100014690(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if ((param_1 != 0) && (uVar3 = param_2 - param_1, 1 < uVar3)) {
    uVar2 = 0;
    lVar4 = 0;
    do {
      lVar5 = lVar4 + 2;
      if (SCARRY8(lVar4,2)) {
        if (uVar3 >> 2 <= uVar2) {
          return;
        }
        lVar5 = 0x7fffffffffffffff;
      }
      else if (uVar3 >> 2 <= uVar2) {
        return;
      }
      iVar1 = (int)*(short *)(param_1 + 2 + lVar4 * 2) + (int)*(short *)(param_1 + lVar4 * 2);
      *(short *)(param_1 + uVar2 * 2) = (short)((uint)(iVar1 - (iVar1 >> 0x1f)) >> 1);
      uVar2 = uVar2 + 1;
      lVar4 = lVar5;
    } while (lVar5 < (long)(uVar3 >> 1));
  }
  return;
}



/* Entry: 100014704; end: 100014723;  */

void FUN_100014704(void)

{
  _objc_opt_self(&PTR_PTR_100029948);
  return;
}



/* Entry: 100014724; end: 100014737;  */

void FUN_100014724(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_100024ca8;
  if (lRam00000001000299e0 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam00000001000299e0 = param_1;
  }
  return;
}



/* Entry: 100014738; end: 100014763;  */

long FUN_100014738(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100014764; end: 10001481f;  */

void FUN_100014764(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  uVar7 = *(undefined8 *)((long)param_2 + 0x5a);
  *(undefined8 *)((long)param_1 + 0x62) = *(undefined8 *)((long)param_2 + 0x62);
  *(undefined8 *)((long)param_1 + 0x5a) = uVar7;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Entry: 100014820; end: 10001486b;  */

void FUN_100014820(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  puVar1 = &UNK_10001e96c;
  _swift_getWitnessTable(&UNK_10001e96c,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001ce5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s14CoreFoundation9_CFObjectPAAE2eeoiySbx_xtFZ_1000245a8)
            (uVar2,uVar3,param_3,puVar1);
  return;
}



/* Entry: 10001486c; end: 10001488f;  */

void FUN_10001486c(void)

{
  FUN_1000149c0(0x1000299f8,&UNK_10001e904);
  return;
}



/* Entry: 100014890; end: 1000148bf;  */

bool FUN_100014890(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1000148c0; end: 1000148fb;  */

void FUN_1000148c0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10001e96c;
  _swift_getWitnessTable(&UNK_10001e96c,param_1);
  __s14CoreFoundation9_CFObjectPAAE9hashValueSivg(param_1,puVar1);
  return;
}



/* Entry: 1000148fc; end: 100014943;  */

void FUN_1000148fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10001e96c;
  _swift_getWitnessTable(&UNK_10001e96c);
  __s14CoreFoundation9_CFObjectPAAE4hash4intoys6HasherVz_tF(param_1,param_2,puVar1);
  return;
}



/* Entry: 100014944; end: 10001499b;  */

void FUN_100014944(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  puVar1 = &UNK_10001e96c;
  _swift_getWitnessTable(&UNK_10001e96c,param_2);
  __s14CoreFoundation9_CFObjectPAAE4hash4intoys6HasherVz_tF(auStack_68,param_2,puVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10001499c; end: 1000149bf;  */

void FUN_10001499c(void)

{
  FUN_1000149c0(0x100029a00,&UNK_10001e92c);
  return;
}



/* Entry: 1000149c0; end: 1000149ff;  */

void FUN_1000149c0(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x00010001480c(0xff);
    _swift_getWitnessTable(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100014a00; end: 100014def;  */

void FUN_100014a00(ulong *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  uint uVar9;
  uint7 uVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  ulong unaff_x24;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  long lStack_68;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100024078;
  uVar1 = *param_1;
  uVar15 = param_1[1];
  uVar9 = (uint)(uVar15 >> 0x20);
  uVar14 = uVar9 >> 0x1e;
  uVar2 = (undefined1)(uVar1 >> 8);
  uVar3 = (undefined1)(uVar1 >> 0x10);
  uVar4 = (undefined1)(uVar1 >> 0x18);
  uVar5 = (undefined1)(uVar1 >> 0x20);
  uVar6 = (undefined1)(uVar1 >> 0x28);
  uVar7 = (undefined1)(uVar1 >> 0x30);
  uVar8 = (undefined1)(uVar1 >> 0x38);
  if (uVar9 >> 0x1e < 2) {
    if (uVar14 == 0) {
      _objc_retain(param_2);
      FUN_100016d2c(uVar1,uVar15);
      uStack_70 = (undefined1)uVar15;
      uStack_6f = (undefined1)(uVar15 >> 8);
      uStack_6e = (undefined1)(uVar15 >> 0x10);
      uStack_6d = (undefined1)(uVar15 >> 0x18);
      uStack_6c = (undefined1)(uVar15 >> 0x20);
      uStack_6b = (undefined1)(uVar15 >> 0x28);
      uStack_6a = (undefined1)(uVar15 >> 0x30);
      uStack_78 = (char)uVar1;
      uStack_77 = uVar2;
      uStack_76 = uVar3;
      uStack_75 = uVar4;
      uStack_74 = uVar5;
      uStack_73 = uVar6;
      uStack_72 = uVar7;
      uStack_71 = uVar8;
      _CMBlockBufferCopyDataBytes(param_2,0,param_3,&uStack_78);
      uVar15 = CONCAT17(uStack_71,
                        CONCAT16(uStack_72,
                                 CONCAT15(uStack_73,
                                          CONCAT14(uStack_74,
                                                   CONCAT13(uStack_75,
                                                            CONCAT12(uStack_76,
                                                                     CONCAT11(uStack_77,uStack_78)))
                                                  ))));
      uVar10 = CONCAT16(uStack_6a,
                        CONCAT15(uStack_6b,
                                 CONCAT14(uStack_6c,
                                          CONCAT13(uStack_6d,
                                                   CONCAT12(uStack_6e,CONCAT11(uStack_6f,uStack_70))
                                                  ))));
      _objc_release(param_2);
      _objc_release(param_2);
      *param_1 = uVar15;
      param_1[1] = (ulong)uVar10;
      param_2 = uVar1 >> 8;
    }
    else {
      uVar17 = uVar15 & 0x3fffffffffffffff;
      _objc_retain(param_2);
      func_0x000100016d6c(uVar1,uVar15);
      FUN_100016d2c(uVar1,uVar15);
      param_1[1] = 0xc000000000000000;
      *param_1 = 0;
      FUN_100016d2c(0,0xc000000000000000);
      _objc_retain(param_2);
      uVar18 = uVar17;
      _swift_isUniquelyReferenced_nonNull_native();
      lVar19 = (long)(int)uVar1;
      lVar16 = (long)uVar1 >> 0x20;
      uVar15 = uVar17;
      if ((uVar18 & 1) == 0) {
        if (lVar16 < lVar19) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x100014dd8);
          (*pcVar11)();
        }
        _swift_retain();
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar15 == 0) {
          uVar15 = 0;
        }
        else {
          uVar18 = uVar15;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar19,uVar18)) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x100014ddc);
            (*pcVar11)();
          }
          uVar15 = (lVar19 - uVar18) + uVar15;
        }
        uVar13 = 0;
        __s10Foundation13__DataStorageCMa();
        _swift_allocObject();
        __s10Foundation13__DataStorageC5bytes6length4copy11deallocator6offsetACSvSg_SiSbySv_SitcSgSitcfc
                  (uVar15,lVar16 - lVar19,1,0,0,lVar19,uVar13);
        _swift_release_n(uVar17,2);
      }
      if (lVar16 < lVar19) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100014dd0);
        (*pcVar11)();
      }
      uVar18 = uVar15;
      _swift_retain();
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (uVar18 == 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100014df0);
        (*pcVar11)();
      }
      uVar17 = uVar18;
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar19,uVar17)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100014dd4);
        (*pcVar11)();
      }
      __s10Foundation13__DataStorageC7_lengthSivg();
      _CMBlockBufferCopyDataBytes(param_2,0,param_3,uVar18 + (lVar19 - uVar17));
      _objc_release(param_2);
      _objc_release(param_2);
      _objc_release(param_2);
      _swift_release(uVar15);
      uVar15 = uVar15 | 0x4000000000000000;
      *param_1 = uVar1;
      param_2 = lVar19 - uVar17;
LAB_100014d88:
      param_1[1] = uVar15;
    }
  }
  else {
    if (uVar14 == 2) {
      uVar18 = uVar15 & 0x3fffffffffffffff;
      _objc_retain(param_2);
      _swift_retain(uVar1);
      _swift_retain(uVar18);
      FUN_100016d2c(uVar1,uVar15);
      uStack_70 = (undefined1)uVar18;
      uStack_6f = (undefined1)(uVar18 >> 8);
      uStack_6e = (undefined1)(uVar18 >> 0x10);
      uStack_6d = (undefined1)(uVar18 >> 0x18);
      uStack_6c = (undefined1)(uVar18 >> 0x20);
      uStack_6b = (undefined1)(uVar18 >> 0x28);
      uStack_6a = (undefined1)(uVar18 >> 0x30);
      uStack_69 = (undefined1)(uVar18 >> 0x38);
      param_1[1] = 0xc000000000000000;
      *param_1 = 0;
      lVar16 = 0;
      uStack_78 = (char)uVar1;
      uStack_77 = uVar2;
      uStack_76 = uVar3;
      uStack_75 = uVar4;
      uStack_74 = uVar5;
      uStack_73 = uVar6;
      uStack_72 = uVar7;
      uStack_71 = uVar8;
      FUN_100016d2c(0,0xc000000000000000);
      __s10Foundation4DataV10LargeSliceV21ensureUniqueReferenceyyF();
      uVar1 = CONCAT17(uStack_71,
                       CONCAT16(uStack_72,
                                CONCAT15(uStack_73,
                                         CONCAT14(uStack_74,
                                                  CONCAT13(uStack_75,
                                                           CONCAT12(uStack_76,
                                                                    CONCAT11(uStack_77,uStack_78))))
                                        )));
      uVar15 = CONCAT17(uStack_69,
                        CONCAT16(uStack_6a,
                                 CONCAT15(uStack_6b,
                                          CONCAT14(uStack_6c,
                                                   CONCAT13(uStack_6d,
                                                            CONCAT12(uStack_6e,
                                                                     CONCAT11(uStack_6f,uStack_70)))
                                                  ))));
      lVar19 = *(long *)(uVar1 + 0x10);
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (lVar16 == 0) goto LAB_100014de0;
      lVar12 = lVar16;
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar19,lVar12)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100014dcc);
        (*pcVar11)();
      }
      __s10Foundation13__DataStorageC7_lengthSivg();
      _CMBlockBufferCopyDataBytes(param_2,0,param_3,lVar16 + (lVar19 - lVar12));
      _objc_release(param_2);
      _objc_release(param_2);
      uVar15 = uVar15 | 0x8000000000000000;
      *param_1 = uVar1;
      goto LAB_100014d88;
    }
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6b = 0;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    _CMBlockBufferCopyDataBytes(param_2,0,param_3,&uStack_78);
    _objc_release(param_2);
    param_2 = unaff_x24;
  }
  if (*(long *)PTR____stack_chk_guard_100024078 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_100014de0:
  _objc_release(param_2);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x100014dec);
  (*pcVar11)();
}



/* Entry: 100014df0; end: 100015063;  */

void FUN_100014df0(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  byte abStack_78 [15];
  undefined1 uStack_69;
  long lStack_68;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100024078;
  lVar15 = *param_2;
  uVar18 = param_2[1];
  uVar12 = (uint)(uVar18 >> 0x20);
  uVar17 = uVar12 >> 0x1e;
  abStack_78[0] = (byte)lVar15;
  uVar3 = (undefined1)((ulong)lVar15 >> 8);
  uVar4 = (undefined1)((ulong)lVar15 >> 0x10);
  uVar5 = (undefined1)((ulong)lVar15 >> 0x18);
  uVar6 = (undefined1)((ulong)lVar15 >> 0x20);
  uVar7 = (undefined1)((ulong)lVar15 >> 0x28);
  uVar8 = (undefined1)((ulong)lVar15 >> 0x30);
  uVar9 = (undefined1)((ulong)lVar15 >> 0x38);
  abStack_78[1] = uVar3;
  abStack_78[2] = uVar4;
  abStack_78[3] = uVar5;
  abStack_78[4] = uVar6;
  abStack_78[5] = uVar7;
  abStack_78[6] = uVar8;
  abStack_78[7] = uVar9;
  if (uVar12 >> 0x1e < 2) {
    if (uVar17 == 0) {
      FUN_100016d2c(lVar15,uVar18);
      abStack_78[8] = (byte)uVar18;
      abStack_78[9] = (byte)(uVar18 >> 8);
      abStack_78[10] = (byte)(uVar18 >> 0x10);
      abStack_78[0xb] = (byte)(uVar18 >> 0x18);
      abStack_78[0xc] = (byte)(uVar18 >> 0x20);
      abStack_78[0xd] = (byte)(uVar18 >> 0x28);
      abStack_78[0xe] = (byte)(uVar18 >> 0x30);
      FUN_100014690(param_1,abStack_78,abStack_78 + abStack_78[0xe]);
      lVar15 = CONCAT17(abStack_78[7],
                        CONCAT16(abStack_78[6],
                                 CONCAT15(abStack_78[5],
                                          CONCAT14(abStack_78[4],
                                                   CONCAT13(abStack_78[3],
                                                            CONCAT12(abStack_78[2],
                                                                     CONCAT11(abStack_78[1],
                                                                              abStack_78[0])))))));
      uVar18 = (ulong)CONCAT16(abStack_78[0xe],
                               CONCAT15(abStack_78[0xd],
                                        CONCAT14(abStack_78[0xc],
                                                 CONCAT13(abStack_78[0xb],
                                                          CONCAT12(abStack_78[10],
                                                                   CONCAT11(abStack_78[9],
                                                                            abStack_78[8]))))));
    }
    else {
      uVar19 = uVar18 & 0x3fffffffffffffff;
      _swift_retain(uVar19);
      FUN_100016d2c(lVar15,uVar18);
      abStack_78[8] = (byte)uVar19;
      abStack_78[9] = (byte)(uVar19 >> 8);
      abStack_78[10] = (byte)(uVar19 >> 0x10);
      abStack_78[0xb] = (byte)(uVar19 >> 0x18);
      abStack_78[0xc] = (byte)(uVar19 >> 0x20);
      abStack_78[0xd] = (byte)(uVar19 >> 0x28);
      abStack_78[0xe] = (byte)(uVar19 >> 0x30);
      uStack_69 = (undefined1)(uVar19 >> 0x38);
      param_2[1] = -0x4000000000000000;
      *param_2 = 0;
      FUN_100016d2c(0,0xc000000000000000);
      FUN_100015064(param_1,abStack_78);
      lVar15 = CONCAT17(abStack_78[7],
                        CONCAT16(abStack_78[6],
                                 CONCAT15(abStack_78[5],
                                          CONCAT14(abStack_78[4],
                                                   CONCAT13(abStack_78[3],
                                                            CONCAT12(abStack_78[2],
                                                                     CONCAT11(abStack_78[1],
                                                                              abStack_78[0])))))));
      uVar18 = CONCAT17(uStack_69,
                        CONCAT16(abStack_78[0xe],
                                 CONCAT15(abStack_78[0xd],
                                          CONCAT14(abStack_78[0xc],
                                                   CONCAT13(abStack_78[0xb],
                                                            CONCAT12(abStack_78[10],
                                                                     CONCAT11(abStack_78[9],
                                                                              abStack_78[8]))))))) |
               0x4000000000000000;
    }
    *param_2 = lVar15;
    param_2[1] = uVar18;
  }
  else if (uVar17 == 2) {
    uVar19 = uVar18 & 0x3fffffffffffffff;
    _swift_retain(lVar15);
    _swift_retain(uVar19);
    FUN_100016d2c(lVar15,uVar18);
    abStack_78[8] = (byte)uVar19;
    abStack_78[9] = (byte)(uVar19 >> 8);
    abStack_78[10] = (byte)(uVar19 >> 0x10);
    abStack_78[0xb] = (byte)(uVar19 >> 0x18);
    abStack_78[0xc] = (byte)(uVar19 >> 0x20);
    abStack_78[0xd] = (byte)(uVar19 >> 0x28);
    abStack_78[0xe] = (byte)(uVar19 >> 0x30);
    uStack_69 = (undefined1)(uVar19 >> 0x38);
    param_2[1] = -0x4000000000000000;
    *param_2 = 0;
    lVar15 = 0;
    FUN_100016d2c(0,0xc000000000000000);
    __s10Foundation4DataV10LargeSliceV21ensureUniqueReferenceyyF();
    lVar13 = CONCAT17(abStack_78[7],
                      CONCAT16(abStack_78[6],
                               CONCAT15(abStack_78[5],
                                        CONCAT14(abStack_78[4],
                                                 CONCAT13(abStack_78[3],
                                                          CONCAT12(abStack_78[2],
                                                                   CONCAT11(abStack_78[1],
                                                                            abStack_78[0])))))));
    uVar18 = CONCAT17(uStack_69,
                      CONCAT16(abStack_78[0xe],
                               CONCAT15(abStack_78[0xd],
                                        CONCAT14(abStack_78[0xc],
                                                 CONCAT13(abStack_78[0xb],
                                                          CONCAT12(abStack_78[10],
                                                                   CONCAT11(abStack_78[9],
                                                                            abStack_78[8])))))));
    lVar1 = *(long *)(lVar13 + 0x10);
    lVar2 = *(long *)(lVar13 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (lVar15 == 0) goto LAB_100015060;
    lVar16 = lVar15;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar10 = lVar1 - lVar16;
    if (SBORROW8(lVar1,lVar16)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x100015058);
      (*pcVar14)();
    }
    lVar11 = lVar2 - lVar1;
    if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10001505c);
      (*pcVar14)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (lVar11 <= lVar16) {
      lVar16 = lVar11;
    }
    lVar15 = lVar15 + lVar10;
    FUN_100014690(param_1,lVar15,lVar15 + lVar16);
    *param_2 = lVar13;
    param_2[1] = uVar18 | 0x8000000000000000;
  }
  else {
    abStack_78[8] = 0;
    abStack_78[9] = 0;
    abStack_78[10] = 0;
    abStack_78[0xb] = 0;
    abStack_78[0xc] = 0;
    abStack_78[0xd] = 0;
    abStack_78[0] = 0;
    abStack_78[1] = 0;
    abStack_78[2] = 0;
    abStack_78[3] = 0;
    abStack_78[4] = 0;
    abStack_78[5] = 0;
    abStack_78[6] = 0;
    abStack_78[7] = 0;
    FUN_100014690(abStack_78,abStack_78);
  }
  if (*(long *)PTR____stack_chk_guard_100024078 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_100015060:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x100015064);
  (*pcVar14)();
}



/* Entry: 100015064; end: 100015113;  */

void FUN_100015064(undefined8 param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  __s10Foundation4DataV11InlineSliceV21ensureUniqueReferenceyyF();
  lVar7 = (long)*param_2;
  iVar1 = param_2[1];
  if (iVar1 < *param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10001510c);
    (*pcVar3)();
  }
  lVar6 = *(long *)(param_2 + 2);
  lVar4 = lVar6;
  _swift_retain();
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar2 = lVar7 - lVar5;
    if (!SBORROW8(lVar7,lVar5)) {
      lVar7 = iVar1 - lVar7;
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (lVar7 <= lVar5) {
        lVar5 = lVar7;
      }
      lVar4 = lVar4 + lVar2;
      FUN_100014690(param_1,lVar4,lVar4 + lVar5);
      _swift_release(lVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100015110);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100015114);
  (*pcVar3)();
}


