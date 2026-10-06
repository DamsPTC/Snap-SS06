/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10245364c; end: 1024537d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245364c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
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
  undefined8 uStack_120;
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
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined8 uStack_b0;
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
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112e9b230))[1];
  lVar3 = 0;
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9b230);
    lVar5 = *(long *)(unaff_x20 + _DAT_112e9b1f0);
    func_0x000107c61434(lVar2);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c6142c(lVar2);
      lVar3 = 0;
    }
    else {
      func_0x000107c5fadc(uVar4,lVar2);
      func_0x000107c6142c(lVar2);
      lVar3 = lVar5;
      func_0x000107c43ed4(lVar5);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(uVar4);
    }
  }
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 1;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x00010420e300(&uStack_170,*(undefined8 *)(unaff_x20 + _DAT_112e9b228),
                      *(undefined1 *)(unaff_x20 + _DAT_112e9b218),
                      *(undefined1 *)(unaff_x20 + _DAT_112e9b220),0,lVar3,0,&uStack_b0,0,1,0,1);
  func_0x000103bf6b80(0);
  puVar1 = &UNK_11050ade8;
  func_0x000107c613fc(&UNK_11050ade8,0xc9,7);
  *(undefined8 *)(puVar1 + 0x98) = uStack_e8;
  *(undefined8 *)(puVar1 + 0x90) = uStack_f0;
  *(undefined8 *)(puVar1 + 0xa8) = uStack_d8;
  *(undefined8 *)(puVar1 + 0xa0) = uStack_e0;
  *(ulong *)(puVar1 + 0xb8) = CONCAT71(uStack_c7,uStack_c8);
  *(undefined8 *)(puVar1 + 0xb0) = uStack_d0;
  *(undefined8 *)(puVar1 + 0xc1) = uStack_bf;
  *(ulong *)(puVar1 + 0xb9) = CONCAT17(uStack_c0,uStack_c7);
  *(undefined8 *)(puVar1 + 0x58) = uStack_128;
  *(undefined8 *)(puVar1 + 0x50) = uStack_130;
  *(undefined8 *)(puVar1 + 0x68) = uStack_118;
  *(undefined8 *)(puVar1 + 0x60) = uStack_120;
  *(undefined8 *)(puVar1 + 0x78) = uStack_108;
  *(undefined8 *)(puVar1 + 0x70) = uStack_110;
  *(undefined8 *)(puVar1 + 0x88) = uStack_f8;
  *(undefined8 *)(puVar1 + 0x80) = uStack_100;
  *(undefined8 *)(puVar1 + 0x18) = uStack_168;
  *(undefined8 *)(puVar1 + 0x10) = uStack_170;
  *(undefined8 *)(puVar1 + 0x28) = uStack_158;
  *(undefined8 *)(puVar1 + 0x20) = uStack_160;
  *(undefined8 *)(puVar1 + 0x38) = uStack_148;
  *(undefined8 *)(puVar1 + 0x30) = uStack_150;
  *(undefined8 *)(puVar1 + 0x48) = uStack_138;
  *(undefined8 *)(puVar1 + 0x40) = uStack_140;
  func_0x000103bf61e8((ulong)puVar1 | 0x4000000000000000);
  return;
}



/* Entry: 1024537d8; end: 102453883; -[_TtC36SCAdsPromotedTileAttachmentImplSwift42AdsPromotedTileAppInstallAttachmentHandler buildPromotedStoryTrack] */

void FUN_1024537d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10245364c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102453884; end: 10245390f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102453884(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    *(bool *)(param_4 + _DAT_112e9b218) = param_1 <= 2.220446049250313e-16;
    *(undefined1 *)(param_4 + _DAT_112e9b220) = 1;
    *(double *)(param_4 + _DAT_112e9b228) = param_1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102453910; end: 10245399f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102453910(undefined8 param_1,byte param_2,byte param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    *(byte *)(param_4 + _DAT_112e9b218) = param_3 & 1;
    *(byte *)(param_4 + _DAT_112e9b220) = param_2 & 1;
    *(undefined8 *)(param_4 + _DAT_112e9b228) = param_1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1024539a0; end: 1024539ff; -[_TtC36SCAdsPromotedTileAttachmentImplSwift42AdsPromotedTileAppInstallAttachmentHandler init] */

void FUN_1024539a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdsPromotedTileAttachmentImplSwift.AdsPromotedTileAppInstallAttachmentHandler"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024539cc);
  (*pcVar1)();
}



/* Entry: 102453a00; end: 102453aab; -[_TtC36SCAdsPromotedTileAttachmentImplSwift42AdsPromotedTileAppInstallAttachmentHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102453a00(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9b1d0));
  FUN_102453c4c(param_1 + _DAT_112e9b1d8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9b1e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9b1e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9b1f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9b1f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9b200));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e9b208));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e9b230 + 8))
  ;
  return;
}



/* Entry: 102453aac; end: 102453acb;  */

void FUN_102453aac(void)

{
  func_0x000107c61168(&PTR_PTR_112841878);
  return;
}



/* Entry: 102453acc; end: 102453ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102453acc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112e9b1d8;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c3d9ec();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102453ae4; end: 102453c3b;  */

undefined8 FUN_102453ae4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102453c3c; end: 102453c4b;  */

void FUN_102453c3c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 102453c4c; end: 102453ca7;  */

undefined8 FUN_102453c4c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102453ca8; end: 10245453b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102453ca8(long *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = param_2;
  func_0x000107c5c988();
  func_0x000107c61180();
  if ((param_1 == (long *)0x0) || (uVar13 = *(ulong *)((long)param_1 + _DAT_113815208), uVar13 == 0)
     ) {
    lVar4 = 0;
joined_r0x000102453d4c:
    if (lVar2 != 0) goto LAB_102453d50;
LAB_102453d34:
    if (lVar4 == 0) {
      return (long *)0x0;
    }
    plVar9 = (long *)&DAT_11308f1e0;
    lVar12 = lVar4;
  }
  else {
    uVar14 = uVar13 & 0xffffffffffffff8;
    if (uVar13 >> 0x3e == 0) {
      uVar3 = *(ulong *)(uVar14 + 0x10);
    }
    else {
      uVar3 = uVar13;
      if (-1 < (long)uVar13) {
        uVar3 = uVar14;
      }
      func_0x000107c60480();
    }
    if (uVar3 != 0) {
      if ((uVar13 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar14 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1024541a0);
          (*pcVar1)();
        }
        lVar4 = *(long *)(uVar13 + 0x20);
        func_0x000107c61174();
      }
      else {
        lVar4 = 0;
        func_0x000100e471e4(0,uVar13);
      }
      goto joined_r0x000102453d4c;
    }
    lVar4 = 0;
    if (lVar2 == 0) goto LAB_102453d34;
LAB_102453d50:
    plVar9 = (long *)&DAT_113091148;
    lVar12 = lVar2;
  }
  lVar12 = *(long *)(lVar12 + *plVar9);
  if (lVar12 == 1) {
    uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112e9b278);
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112e9b280);
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112e9b288);
    uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112e9b290);
    lVar5 = 0;
    FUN_102453aac();
    lVar12 = lVar5;
    func_0x000107c610f8();
    func_0x000107c61614(lVar12 + _DAT_112e9b1d8,0);
    *(undefined1 *)(lVar12 + _DAT_112e9b218) = 0;
    *(undefined1 *)(lVar12 + _DAT_112e9b220) = 0;
    *(undefined8 *)(lVar12 + _DAT_112e9b228) = 0;
    puVar16 = (undefined8 *)(lVar12 + _DAT_112e9b230);
    *puVar16 = 0;
    puVar16[1] = 0;
    *(long **)(lVar12 + _DAT_112e9b1e0) = param_1;
    *(long *)(lVar12 + _DAT_112e9b1e8) = param_2;
    *(undefined8 *)(lVar12 + _DAT_112e9b1f0) = uVar18;
    *(undefined8 *)(lVar12 + _DAT_112e9b1f8) = uVar11;
    *(undefined8 *)(lVar12 + _DAT_112e9b200) = uVar15;
    *(undefined8 *)(lVar12 + _DAT_112e9b208) = uVar17;
    *(undefined8 *)(lVar12 + _DAT_112e9b210) = param_3;
    puVar6 = &UNK_11050ae10;
    func_0x000107c613fc(&UNK_11050ae10,0x20,7);
    *(undefined8 *)(puVar6 + 0x18) = 0;
    puVar16 = (undefined8 *)(puVar6 + 0x10);
    *puVar16 = 0;
    puVar7 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    pcStack_70 = FUN_102454b78;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    uStack_80 = 0x102453c70;
    puStack_78 = &UNK_11050ae28;
    ppuVar8 = &puStack_90;
    puStack_68 = puVar6;
    func_0x000107c60bc4(ppuVar8);
    puVar10 = puStack_68;
    func_0x000107c615f0(uVar17);
    func_0x000107c6157c(puVar6);
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61174(uVar18);
    func_0x000107c61174(uVar11);
    func_0x000107c61174(uVar15);
    func_0x000107c61574(puVar10);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    *(undefined **)(lVar12 + _DAT_112e9b1d0) = puVar7;
    plVar9 = &lStack_a0;
    lStack_a0 = lVar12;
    lStack_98 = lVar5;
    func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar4);
    puVar10 = &UNK_11050ae60;
    func_0x000107c613fc(&UNK_11050ae60,0x18,7);
    func_0x000107c61614(puVar10 + 0x10,plVar9);
    func_0x000107c61428(puVar16,&puStack_90,1,0);
    uVar17 = *puVar16;
    uVar15 = *(undefined8 *)(puVar6 + 0x18);
    *puVar16 = 0x102454b9c;
    *(undefined **)(puVar6 + 0x18) = puVar10;
    func_0x000107c6157c(puVar10);
    FUN_102453c3c(uVar17,uVar15);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar10);
    return plVar9;
  }
  if (lVar12 != 3) {
    if (lVar12 != 6) {
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar4);
      return (long *)0x0;
    }
    FUN_10245453c(param_1,param_2,param_3);
    lVar12 = lVar2;
    goto LAB_102454140;
  }
  if (((lVar4 == 0) || (*(long *)(lVar4 + _DAT_11308f208) == 0)) ||
     (lVar12 = *(long *)(*(long *)(lVar4 + _DAT_11308f208) + _DAT_113091070), lVar12 == 0)) {
    lVar12 = 0;
    if (lVar2 == 0) goto LAB_102453de0;
LAB_1024540a4:
    plVar9 = (long *)&DAT_113091138;
    lVar5 = lVar2;
LAB_1024540b0:
    uVar17 = *(undefined8 *)(lVar5 + *plVar9);
    uVar15 = ((undefined8 *)(lVar5 + *plVar9))[1];
    func_0x000107c61434(uVar15);
  }
  else {
    lVar12 = *(long *)(lVar12 + _DAT_113090fd8);
    func_0x000107c61174(lVar12);
    if (lVar2 != 0) goto LAB_1024540a4;
LAB_102453de0:
    if ((lVar12 != 0) && (*(long *)(lVar12 + _DAT_113091338) != 0)) {
      plVar9 = (long *)&DAT_113090a70;
      lVar5 = *(long *)(lVar12 + _DAT_113091338);
      goto LAB_1024540b0;
    }
    uVar17 = 0;
    uVar15 = 0;
  }
  func_0x000107c5c988();
  func_0x000107c61180();
  if (param_2 == 0) {
    if (lVar12 == 0) goto LAB_1024540e8;
    puStack_90 = *(undefined **)(lVar12 + _DAT_113091358);
    if ((undefined *)0x3 < puStack_90) {
      func_0x000107c60614(&UNK_110798950,&puStack_90,&UNK_110798950,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024541c4);
      (*pcVar1)();
    }
    uVar11 = *(undefined8 *)(&UNK_10daa8d30 + (long)puStack_90 * 8);
  }
  else {
    func_0x000107c61170();
LAB_1024540e8:
    uVar11 = 0;
  }
  func_0x0001024541c4(param_1,uVar17,uVar15,uVar11);
  func_0x000107c61170(lVar2);
  func_0x000107c6142c(uVar15);
LAB_102454140:
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar4);
  return param_1;
}



/* Entry: 10245453c; end: 1024546ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10245453c(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((param_1 != 0) && (uVar6 = *(ulong *)(param_1 + _DAT_113815208), uVar6 != 0)) {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (uVar6 >> 0x3e == 0) {
      uVar4 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      uVar4 = uVar6;
      if (-1 < (long)uVar6) {
        uVar4 = uVar7;
      }
      func_0x000107c60480();
    }
    if (uVar4 != 0) {
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar7 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1024546ac);
          (*pcVar1)();
        }
        lVar2 = *(long *)(uVar6 + 0x20);
        func_0x000107c61174();
      }
      else {
        lVar2 = 0;
        func_0x000100e471e4(0,uVar6);
      }
      if (((*(long *)(lVar2 + _DAT_11308f208) != 0) &&
          (lVar5 = *(long *)(*(long *)(lVar2 + _DAT_11308f208) + _DAT_113091070), lVar5 != 0)) &&
         (lVar5 = *(long *)(lVar5 + _DAT_113090fc8), lVar5 != 0)) {
        func_0x000107c61174(lVar5);
        lVar3 = lVar5;
        FUN_10245473c();
        FUN_10245802c(0);
        func_0x000107c610f8();
        func_0x000107c61174(param_1);
        FUN_102457214(param_1,lVar5,lVar3);
        func_0x000107c61170(lVar2);
        return param_1;
      }
      func_0x000107c61170();
    }
  }
  return 0;
}



/* Entry: 1024546ac; end: 10245473b; -[_TtC36SCAdsPromotedTileAttachmentImplSwift39AdsPromotedTileAttachmentHandlerFactory createHandlerFor:tileCtaConfig:interactionType:] */

void FUN_1024546ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102453ca8(param_3,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10245473c; end: 102454a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_10245473c(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_90 = *(undefined **)(param_1 + _DAT_11308fe30);
  if ((long)puStack_90 < 2) {
    if (puStack_90 == (undefined *)0x0) {
      return (undefined **)0x0;
    }
    if (puStack_90 != (undefined *)0x1) {
LAB_102454a5c:
      func_0x000107c60614(&UNK_110797578,&puStack_90,&UNK_110797578,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102454a80);
      (*pcVar1)();
    }
    uVar14 = 0;
  }
  else {
    if (puStack_90 != (undefined *)0x3) {
      if (puStack_90 == (undefined *)0x2) {
        uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112e9b278);
        uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112e9b280);
        uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112e9b288);
        puVar9 = (undefined *)0x0;
        puStack_b0 = param_2;
        FUN_102453aac();
        puStack_a8 = puVar9;
        func_0x000107c610f8();
        func_0x000107c61614(puVar9 + _DAT_112e9b1d8,0);
        puVar9[_DAT_112e9b218] = 0;
        puVar9[_DAT_112e9b220] = 0;
        *(undefined8 *)(puVar9 + _DAT_112e9b228) = 0;
        puVar17 = (undefined8 *)(puVar9 + _DAT_112e9b230);
        *puVar17 = 0;
        puVar17[1] = 0;
        *(undefined **)(puVar9 + _DAT_112e9b1e0) = param_2;
        *(undefined8 *)(puVar9 + _DAT_112e9b1e8) = param_3;
        *(undefined8 *)(puVar9 + _DAT_112e9b1f0) = uVar18;
        *(undefined8 *)(puVar9 + _DAT_112e9b1f8) = uVar15;
        *(undefined8 *)(puVar9 + _DAT_112e9b200) = uVar14;
        *(undefined8 *)(puVar9 + _DAT_112e9b208) = 0;
        *(undefined8 *)(puVar9 + _DAT_112e9b210) = param_4;
        puVar10 = &UNK_11050ae10;
        func_0x000107c613fc(&UNK_11050ae10,0x20,7);
        *(undefined8 *)(puVar10 + 0x18) = 0;
        puVar17 = (undefined8 *)(puVar10 + 0x10);
        *puVar17 = 0;
        puVar11 = PTR_PTR_1126ae720;
        func_0x000107c61168();
        lStack_70 = 0x102454bc4;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_88 = (undefined *)0x42000000;
        uStack_80 = 0x102453c70;
        puStack_78 = &UNK_11050aec8;
        ppuVar12 = &puStack_90;
        puStack_68 = puVar10;
        func_0x000107c60bc4(ppuVar12);
        puVar13 = puStack_68;
        func_0x000107c61174(param_3);
        func_0x000107c61174(uVar18);
        func_0x000107c61174(uVar15);
        func_0x000107c61174(uVar14);
        func_0x000107c6157c(puVar10);
        func_0x000107c61174(puStack_b0);
        func_0x000107c61574(puVar13);
        func_0x000107c3e4fc();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar12);
        *(undefined **)(puVar9 + _DAT_112e9b1d0) = puVar11;
        puStack_98 = puStack_a8;
        ppuVar12 = &puStack_a0;
        puStack_a0 = puVar9;
        func_0x000107c61154(ppuVar12,PTR_s_init_1125d9248);
        puVar13 = &UNK_11050ae60;
        func_0x000107c613fc(&UNK_11050ae60,0x18,7);
        func_0x000107c61614(puVar13 + 0x10,ppuVar12);
        func_0x000107c61428(puVar17,&puStack_90,1,0);
        uVar14 = *puVar17;
        uVar15 = *(undefined8 *)(puVar10 + 0x18);
        *puVar17 = 0x102454bc8;
        *(undefined **)(puVar10 + 0x18) = puVar13;
        func_0x000107c6157c(puVar13);
        FUN_102453c3c(uVar14,uVar15);
        func_0x000107c61574(puVar10);
        func_0x000107c61574(puVar13);
        return ppuVar12;
      }
      goto LAB_102454a5c;
    }
    uVar14 = 1;
  }
  uVar15 = *(undefined8 *)(param_1 + _DAT_11308fe28);
  uVar18 = ((undefined8 *)(param_1 + _DAT_11308fe28))[1];
  puVar10 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = 0;
  func_0x000102458168();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined1 *)(lVar3 + 0x28) = 0;
  *(undefined **)(lVar3 + 0x10) = puVar10;
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112e9b268);
  lVar4 = 0;
  FUN_1024595e8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112e9b590) = lVar3;
  *(undefined8 *)(lVar5 + _DAT_112e9b598) = uVar16;
  puVar10 = PTR_s_init_1125d9248;
  lStack_70 = lVar5;
  puStack_68 = (undefined *)lVar4;
  func_0x000107c6157c(lVar3);
  func_0x000107c61174(uVar16);
  plVar6 = &lStack_70;
  func_0x000107c61154(plVar6,puVar10);
  puVar11 = PTR_PTR_1126c5518;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar10 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c613fc(lVar2,0x29,7);
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined1 *)(lVar2 + 0x28) = 0;
  *(undefined **)(lVar2 + 0x10) = puVar10;
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112e9b270);
  puVar7 = (undefined *)0x0;
  FUN_102458df4();
  puVar9 = puVar7;
  func_0x000107c610f8();
  func_0x000107c61614(puVar9 + _DAT_112e9b528,0);
  *(undefined **)(puVar9 + _DAT_112e9b530) = param_2;
  puVar17 = (undefined8 *)(puVar9 + _DAT_112e9b538);
  *puVar17 = uVar15;
  puVar17[1] = uVar18;
  *(undefined8 *)(puVar9 + _DAT_112e9b540) = uVar14;
  *(undefined **)(puVar9 + _DAT_112e9b548) = puVar11;
  *(long *)(puVar9 + _DAT_112e9b550) = lVar2;
  *(long **)(puVar9 + _DAT_112e9b558) = plVar6;
  *(undefined8 *)(puVar9 + _DAT_112e9b560) = uVar16;
  puVar10 = &UNK_11050ae10;
  func_0x000107c613fc(&UNK_11050ae10,0x20,7);
  *(undefined8 *)(puVar10 + 0x18) = 0;
  puVar17 = (undefined8 *)(puVar10 + 0x10);
  *puVar17 = 0;
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_80 = 0x102454ba4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = (undefined *)0x42000000;
  puStack_90 = (undefined *)0x102453c70;
  puStack_88 = &UNK_11050ae78;
  ppuVar12 = &puStack_a0;
  puStack_78 = puVar10;
  func_0x000107c60bc4(ppuVar12);
  puVar13 = puStack_78;
  func_0x000107c61174(uVar16);
  func_0x000107c6157c(puVar10);
  func_0x000107c61174(param_2);
  func_0x000107c61434(uVar18);
  func_0x000107c61174(puVar11);
  func_0x000107c6157c(lVar2);
  func_0x000107c61174(plVar6);
  func_0x000107c61574(puVar13);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
  *(undefined **)(puVar9 + _DAT_112e9b520) = puVar8;
  ppuVar12 = &puStack_b0;
  puStack_b0 = puVar9;
  puStack_a8 = puVar7;
  func_0x000107c61154(ppuVar12,PTR_s_init_1125d9248);
  func_0x000107c61170(puVar11);
  func_0x000107c61574(lVar2);
  func_0x000107c61170(plVar6);
  func_0x000107c61574(lVar3);
  puVar13 = &UNK_11050aeb0;
  func_0x000107c613fc(&UNK_11050aeb0,0x18,7);
  func_0x000107c61614(puVar13 + 0x10,ppuVar12);
  func_0x000107c61428(puVar17,&puStack_a0,1,0);
  uVar14 = *puVar17;
  uVar15 = *(undefined8 *)(puVar10 + 0x18);
  *puVar17 = 0x102454bac;
  *(undefined **)(puVar10 + 0x18) = puVar13;
  func_0x000107c6157c(puVar13);
  FUN_102453c3c(uVar14,uVar15);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar13);
  return ppuVar12;
}



/* Entry: 102454a80; end: 102454adf; -[_TtC36SCAdsPromotedTileAttachmentImplSwift39AdsPromotedTileAttachmentHandlerFactory init] */

void FUN_102454a80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdsPromotedTileAttachmentImplSwift.AdsPromotedTileAttachmentHandlerFactory"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102454aac);
  (*pcVar1)();
}



/* Entry: 102454ae0; end: 102454b57; -[_TtC36SCAdsPromotedTileAttachmentImplSwift39AdsPromotedTileAttachmentHandlerFactory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102454ae0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9b268));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9b270));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9b278));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9b280));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9b288));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e9b290));
  return;
}



/* Entry: 102454b58; end: 102454b77;  */

void FUN_102454b58(void)

{
  func_0x000107c61168(&PTR_PTR_112841998);
  return;
}



/* Entry: 102454b78; end: 102454bcb;  */

undefined8 FUN_102454b78(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (pcVar1 == (code *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar2 = uVar3;
    func_0x000107c6157c(uVar3);
    (*pcVar1)();
    FUN_102453c3c(pcVar1,uVar3);
  }
  return uVar2;
}



/* Entry: 102454bcc; end: 102454f5f;  */

/* WARNING: Possible PIC construction at 0x000102454c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102454cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102454d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102454e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102454f20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102454f3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102454f24) */
/* WARNING: Removing unreachable block (ram,0x000102454e1c) */
/* WARNING: Removing unreachable block (ram,0x000102454d44) */
/* WARNING: Removing unreachable block (ram,0x000102454d00) */
/* WARNING: Removing unreachable block (ram,0x000102454d48) */
/* WARNING: Removing unreachable block (ram,0x000102454d4c) */
/* WARNING: Removing unreachable block (ram,0x000102454d68) */
/* WARNING: Removing unreachable block (ram,0x000102454d70) */
/* WARNING: Removing unreachable block (ram,0x000102454d78) */
/* WARNING: Removing unreachable block (ram,0x000102454dbc) */
/* WARNING: Removing unreachable block (ram,0x000102454e20) */
/* WARNING: Removing unreachable block (ram,0x000102454e4c) */
/* WARNING: Removing unreachable block (ram,0x000102454e5c) */
/* WARNING: Removing unreachable block (ram,0x000102454dc4) */
/* WARNING: Removing unreachable block (ram,0x000102454e78) */
/* WARNING: Removing unreachable block (ram,0x000102454e80) */
/* WARNING: Removing unreachable block (ram,0x000102454e8c) */
/* WARNING: Removing unreachable block (ram,0x000102454e94) */
/* WARNING: Removing unreachable block (ram,0x000102454dcc) */
/* WARNING: Removing unreachable block (ram,0x000102454e00) */
/* WARNING: Removing unreachable block (ram,0x000102454e14) */
/* WARNING: Removing unreachable block (ram,0x000102454d1c) */
/* WARNING: Removing unreachable block (ram,0x000102454c50) */
/* WARNING: Removing unreachable block (ram,0x000102454f40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102454bcc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e9b2f8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112e9b318) = 0;
    if (*(long *)(unaff_x20 + _DAT_112e9b308) != 0) {
      func_0x000107c5e394();
    }
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e9b2e8);
    uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e9b2c0) + _DAT_112e9b5c8);
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e9b2c0) + _DAT_112e9b5d0);
    func_0x000107c61174(uVar2);
    func_0x000107c5c984(uVar4);
    func_0x000107c61180();
    func_0x000107c40a30(uVar3);
    func_0x000107c61180();
  }
  else {
    uVar2 = 0xd00000000000002e;
    func_0x000107c5fadc(0xd00000000000002e,0x800000010efbca60);
    func_0x000107c4dfc0(lVar1);
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102454f60; end: 10245523b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102454f60(void)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x20;
  ulong uVar15;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar3 = _DAT_112e9b328;
  ppuVar8 = &puStack_a0;
  ppuVar12 = &puStack_a0;
  if (*(long *)(unaff_x20 + _DAT_112e9b328) != 0) {
    func_0x000107c4218c();
  }
  lVar4 = _DAT_112e9b330;
  if (*(long *)(unaff_x20 + _DAT_112e9b330) != 0) {
    func_0x000107c4218c();
  }
  lVar13 = *(long *)(*(long *)(unaff_x20 + _DAT_112e9b2c0) + _DAT_112e9b5c8);
  if (lVar13 == 0) {
    return;
  }
  puVar1 = (ulong *)(lVar13 + _DAT_11308f130);
  uVar15 = *puVar1;
  uVar2 = puVar1[1];
  uVar14 = uVar15 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar14 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar14 == 0) {
    return;
  }
  uVar14 = *(ulong *)(unaff_x20 + _DAT_112e9b2f0);
  func_0x000107c61434(uVar2);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar14 == 0) {
    uVar10 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined8 *)(unaff_x20 + lVar3) = 0;
    func_0x000107c6142c(uVar2);
    func_0x000107c61170(uVar10);
  }
  else {
    uVar5 = uVar14;
    func_0x000107c3d320();
    func_0x000107c61180();
    puVar6 = &UNK_11050af00;
    func_0x000107c613fc(&UNK_11050af00,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar7 = &UNK_11050b040;
    func_0x000107c613fc(&UNK_11050b040,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(ulong *)(puVar7 + 0x18) = uVar15;
    *(ulong *)(puVar7 + 0x20) = uVar2;
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_102456730;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1020620fc;
    puStack_88 = &UNK_11050b058;
    puStack_78 = puVar7;
    func_0x000107c60bc4(&puStack_a0);
    puVar7 = puStack_78;
    func_0x000107c61434(uVar2);
    func_0x000107c61574(puVar7);
    uVar9 = uVar5;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(uVar5);
    uVar10 = *(undefined8 *)(unaff_x20 + lVar3);
    *(ulong *)(unaff_x20 + lVar3) = uVar9;
    func_0x000107c61170(uVar10);
    uVar5 = uVar14;
    func_0x000107c61150(uVar14,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_adPlayableEventObservable_11259a8a8);
    if ((uVar5 & 1) != 0) {
      uVar5 = uVar14;
      func_0x000107c3d3a4();
      func_0x000107c61180();
      puVar7 = &UNK_11050af00;
      func_0x000107c613fc(&UNK_11050af00,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      puVar11 = &UNK_11050aff0;
      func_0x000107c613fc(&UNK_11050aff0,0x28,7);
      *(undefined **)(puVar11 + 0x10) = puVar7;
      *(ulong *)(puVar11 + 0x18) = uVar15;
      *(ulong *)(puVar11 + 0x20) = uVar2;
      pcStack_80 = (code *)0x1024566f8;
      puStack_a0 = puVar6;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_10205f548;
      puStack_88 = &UNK_11050b008;
      puStack_78 = puVar11;
      func_0x000107c60bc4(&puStack_a0);
      func_0x000107c61574(puStack_78);
      uVar15 = uVar5;
      func_0x000107c5c320();
      func_0x000107c61180();
      func_0x000107c615e8(uVar14);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c61170(uVar5);
      goto LAB_10245520c;
    }
    func_0x000107c6142c(uVar2);
    func_0x000107c615e8(uVar14);
  }
  uVar15 = 0;
LAB_10245520c:
  uVar10 = *(undefined8 *)(unaff_x20 + lVar4);
  *(ulong *)(unaff_x20 + lVar4) = uVar15;
  func_0x000107c61170(uVar10);
  return;
}



/* Entry: 10245523c; end: 10245528b;  */

/* WARNING: Possible PIC construction at 0x000102455254: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245523c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e9b328);
  if (lVar1 == 0) {
    if (*(long *)(unaff_x20 + _DAT_112e9b330) != 0) {
      func_0x000107c4218c();
    }
    lVar1 = *(long *)(unaff_x20 + _DAT_112e9b348);
    if (lVar1 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 10245528c; end: 102455303;  */

void FUN_10245528c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102455304(param_1,param_3,param_4);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102455304; end: 102455647;  */

/* WARNING: Possible PIC construction at 0x00010245535c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102455468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102455740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024554f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102455874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010245546c) */
/* WARNING: Removing unreachable block (ram,0x000102455360) */
/* WARNING: Removing unreachable block (ram,0x000102455364) */
/* WARNING: Removing unreachable block (ram,0x000102455368) */
/* WARNING: Removing unreachable block (ram,0x000102455398) */
/* WARNING: Removing unreachable block (ram,0x00010245536c) */
/* WARNING: Removing unreachable block (ram,0x0001024553a0) */
/* WARNING: Removing unreachable block (ram,0x0001024553c4) */
/* WARNING: Removing unreachable block (ram,0x000102455490) */
/* WARNING: Removing unreachable block (ram,0x00010245549c) */
/* WARNING: Removing unreachable block (ram,0x0001024554c4) */
/* WARNING: Removing unreachable block (ram,0x0001024554d4) */
/* WARNING: Removing unreachable block (ram,0x0001024554a4) */
/* WARNING: Removing unreachable block (ram,0x0001024554ac) */
/* WARNING: Removing unreachable block (ram,0x000102455648) */
/* WARNING: Removing unreachable block (ram,0x00010245566c) */
/* WARNING: Removing unreachable block (ram,0x00010245567c) */
/* WARNING: Removing unreachable block (ram,0x0001024556a4) */
/* WARNING: Removing unreachable block (ram,0x000102455764) */
/* WARNING: Removing unreachable block (ram,0x0001024556b4) */
/* WARNING: Removing unreachable block (ram,0x000102455744) */
/* WARNING: Removing unreachable block (ram,0x0001024556ec) */
/* WARNING: Removing unreachable block (ram,0x0001024553d4) */
/* WARNING: Removing unreachable block (ram,0x0001024553f4) */
/* WARNING: Removing unreachable block (ram,0x000102455474) */
/* WARNING: Removing unreachable block (ram,0x00010245541c) */
/* WARNING: Removing unreachable block (ram,0x000102455394) */
/* WARNING: Removing unreachable block (ram,0x0001024554f8) */
/* WARNING: Removing unreachable block (ram,0x000102455518) */
/* WARNING: Removing unreachable block (ram,0x000102455778) */
/* WARNING: Removing unreachable block (ram,0x00010245579c) */
/* WARNING: Removing unreachable block (ram,0x0001024557c4) */
/* WARNING: Removing unreachable block (ram,0x000102455898) */
/* WARNING: Removing unreachable block (ram,0x0001024557d4) */
/* WARNING: Removing unreachable block (ram,0x000102455878) */
/* WARNING: Removing unreachable block (ram,0x00010245580c) */
/* WARNING: Removing unreachable block (ram,0x000102455500) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102455304(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308c0c0);
  func_0x000107c30adc(uVar1);
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102455648; end: 1024558ab;  */

/* WARNING: Possible PIC construction at 0x000102455740: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102455648(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  
  if (((*(byte *)(unaff_x20 + _DAT_112e9b320) & 1) == 0) &&
     ((*(byte *)(unaff_x20 + _DAT_112e9b338) & 1) == 0)) {
    *(undefined1 *)(unaff_x20 + _DAT_112e9b320) = 1;
    lVar6 = *(long *)(unaff_x20 + _DAT_112e9b2c0);
    lVar2 = *(long *)(lVar6 + _DAT_112e9b5d0);
    if (lVar2 != 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_112e9b308);
      if (lVar5 != 0) {
        func_0x000107c61174();
        func_0x000107c3ece8(lVar5);
        func_0x000107c61180();
        lVar3 = *(long *)(unaff_x20 + _DAT_112e9b2c8);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar5);
        }
        else {
          lVar4 = lVar3;
          FUN_1024562c4();
          puVar1 = (undefined8 *)(*(long *)(lVar6 + _DAT_112e9b5e0) + _DAT_112ff64c0);
          func_0x000107c4bdd8(*puVar1,puVar1[1],lVar3,param_2,lVar2,lVar4,lVar5,0);
          func_0x000107c615e8(lVar3);
          lVar2 = lVar4;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar2);
        return;
      }
    }
  }
  return;
}



/* Entry: 1024558ac; end: 102455a9f;  */

/* WARNING: Possible PIC construction at 0x000102455a24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102455a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102455a64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102455a58) */
/* WARNING: Removing unreachable block (ram,0x000102455a28) */
/* WARNING: Removing unreachable block (ram,0x000102455a68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024558ac(double param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar5 = &uStack_d0;
  func_0x000104191a9c();
  if (*(char *)(unaff_x20 + _DAT_112e9b318) == '\x01') {
    FUN_1024562c4();
    puVar5 = (undefined8 *)param_2;
  }
  else {
    if ((int)param_2 != 9) {
      *(undefined8 *)(unaff_x20 + _DAT_112e9b350) = 1;
    }
    func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112e9b300));
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e9b340);
    puVar1[5] = param_1 * 1000.0;
    uStack_88 = puVar1[9];
    uStack_90 = puVar1[8];
    uStack_78 = puVar1[0xb];
    uStack_80 = puVar1[10];
    uStack_68 = puVar1[0xd];
    uStack_70 = puVar1[0xc];
    uStack_58 = puVar1[0xf];
    uStack_60 = puVar1[0xe];
    uStack_c8 = puVar1[1];
    uStack_d0 = *puVar1;
    uStack_b8 = puVar1[3];
    uStack_c0 = puVar1[2];
    uStack_a8 = puVar1[5];
    uStack_b0 = puVar1[4];
    uStack_98 = puVar1[7];
    uStack_a0 = puVar1[6];
    func_0x00010428e134(0);
    func_0x000107c610f8();
    func_0x00010428c5b0(&uStack_d0);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112e9b2c0);
  puVar2 = *(undefined1 **)(lVar4 + _DAT_112e9b5c8);
  if (puVar2 != (undefined1 *)0x0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112e9b2c8);
    func_0x000107c61174(puVar2);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c61170(puVar5);
      puVar5 = (undefined8 *)puVar2;
    }
    else {
      puVar5 = *(undefined8 **)(lVar4 + _DAT_112e9b5d0);
      func_0x000107c61174(*(undefined8 *)(lVar4 + _DAT_112e9b5e0));
      func_0x000107c5c984(puVar5);
      func_0x000107c61180();
      func_0x000107c5c988();
      func_0x000107c61180();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 102455aa0; end: 102455aef; -[_TtC36SCAdsPromotedTileAttachmentImplSwift35AdsPromotedTileAttachmentInteractor adAttachmentHandlerDidPresent:] */

/* WARNING: Possible PIC construction at 0x000102455ad8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102455adc) */

void FUN_102455aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1024558ac(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102455af0; end: 102455af3; -[_TtC36SCAdsPromotedTileAttachmentImplSwift35AdsPromotedTileAttachmentInteractor adAttachmentHandlerViewWillFullyAppear:] */

void FUN_102455af0(void)

{
  return;
}



/* Entry: 102455af4; end: 102455c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102455af4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar1 = _DAT_112e9b348;
  ppuVar4 = &puStack_70;
  if (*(long *)(unaff_x20 + _DAT_112e9b348) != 0) {
    func_0x000107c4218c();
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e9b2e0);
  func_0x000107c41b80();
  func_0x000107c61180();
  uVar5 = uVar2;
  func_0x000107c5c6c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puVar3 = &UNK_11050af00;
  func_0x000107c613fc(&UNK_11050af00,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcStack_50 = FUN_1024566f0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100c1de60;
  puStack_58 = &UNK_11050afb8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  uVar2 = uVar5;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 102455c14; end: 102455c4f; -[_TtC36SCAdsPromotedTileAttachmentImplSwift35AdsPromotedTileAttachmentInteractor adAttachmentHandlerViewDidFullyAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102455c14(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112e9b318) & 1) != 0) {
    return;
  }
  func_0x000107c61174();
  FUN_102455af4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102455c50; end: 102455c53; -[_TtC36SCAdsPromotedTileAttachmentImplSwift35AdsPromotedTileAttachmentInteractor adAttachmentHandlerViewWillFullyDisappear:] */

void FUN_102455c50(void)

{
  return;
}



/* Entry: 102455c54; end: 102455c57; -[_TtC36SCAdsPromotedTileAttachmentImplSwift35AdsPromotedTileAttachmentInteractor adAttachmentHandlerViewDidFullyDisappear:] */

void FUN_102455c54(void)

{
  return;
}



/* Entry: 102455c58; end: 102455cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102455c58(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + _DAT_112e9b318) & 1) == 0) {
      FUN_102456554();
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102455d00; end: 102455d67; -[_TtC36SCAdsPromotedTileAttachmentImplSwift35AdsPromotedTileAttachmentInteractor adAttachmentHandlerDidComplete:result:] */

/* WARNING: Possible PIC construction at 0x000102455d48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102455d4c) */

void FUN_102455d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102456310(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102455d68; end: 102455f27;  */

/* WARNING: Possible PIC construction at 0x000102455dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102455edc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102455dcc) */
/* WARNING: Removing unreachable block (ram,0x000102455dd4) */
/* WARNING: Removing unreachable block (ram,0x000102455ee0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102455d68(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = _DAT_112e9b350;
  puVar5 = &uStack_d0;
  if ((*(byte *)(unaff_x20 + _DAT_112e9b318) & 1) == 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112e9b310);
    if (lVar4 != 0) {
      func_0x000107c61174();
      func_0x000104191a9c();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar4);
      return;
    }
    if ((int)param_1 != 0) {
      if (SCARRY8(*(long *)(unaff_x20 + _DAT_112e9b350),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102455f28);
        (*pcVar3)();
      }
      *(long *)(unaff_x20 + _DAT_112e9b350) = *(long *)(unaff_x20 + _DAT_112e9b350) + 1;
      lVar7 = *(long *)(unaff_x20 + _DAT_112e9b2c0);
      lVar4 = *(long *)(lVar7 + _DAT_112e9b5c8);
      if (lVar4 != 0) {
        lVar6 = *(long *)(unaff_x20 + _DAT_112e9b2c8);
        func_0x000107c61174();
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar6 != 0) {
          lVar7 = *(long *)(lVar7 + _DAT_112e9b5e0);
          puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e9b340);
          uStack_88 = puVar1[9];
          uStack_90 = puVar1[8];
          uStack_78 = puVar1[0xb];
          uStack_80 = puVar1[10];
          uStack_68 = puVar1[0xd];
          uStack_70 = puVar1[0xc];
          uStack_58 = puVar1[0xf];
          uStack_60 = puVar1[0xe];
          uStack_c8 = puVar1[1];
          uStack_d0 = *puVar1;
          uStack_b8 = puVar1[3];
          uStack_c0 = puVar1[2];
          uStack_a8 = puVar1[5];
          uStack_b0 = puVar1[4];
          uStack_98 = puVar1[7];
          uStack_a0 = puVar1[6];
          func_0x00010428e134(0);
          func_0x000107c610f8();
          func_0x000107c61174(lVar7);
          func_0x00010428c5b0(&uStack_d0);
          func_0x000107c4bde0(lVar6,param_2,lVar4,lVar7,puVar5,param_1,
                              *(undefined8 *)(unaff_x20 + lVar2));
          func_0x000107c615e8(lVar6);
          lVar4 = lVar7;
        }
        goto code_r0x000107c61170;
      }
    }
  }
  return;
}



/* Entry: 102455f28; end: 102455fab; -[_TtC36SCAdsPromotedTileAttachmentImplSwift35AdsPromotedTileAttachmentInteractor adsPromotedTileAttachmentHandlerWillPresentAttachment:] */

void FUN_102455f28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102455d68(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102455fac; end: 10245614b;  */

/* WARNING: Possible PIC construction at 0x00010245610c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102455fac(double param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = &uStack_c0;
  if ((*(byte *)(unaff_x20 + _DAT_112e9b320) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112e9b320) = 1;
    func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112e9b300));
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e9b340);
    puVar1[6] = param_1 * 1000.0;
    lVar7 = *(long *)(unaff_x20 + _DAT_112e9b2c0);
    puVar2 = *(undefined1 **)(lVar7 + _DAT_112e9b5d0);
    if (puVar2 != (undefined1 *)0x0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_112e9b308);
      if (lVar6 != 0) {
        func_0x000107c61174();
        func_0x000107c3ece8(lVar6);
        func_0x000107c61180();
        lVar3 = *(long *)(unaff_x20 + _DAT_112e9b2c8);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar6);
        }
        else {
          uStack_78 = puVar1[9];
          uStack_80 = puVar1[8];
          uStack_68 = puVar1[0xb];
          uStack_70 = puVar1[10];
          uStack_58 = puVar1[0xd];
          uStack_60 = puVar1[0xc];
          uStack_48 = puVar1[0xf];
          uStack_50 = puVar1[0xe];
          uStack_b8 = puVar1[1];
          uStack_c0 = *puVar1;
          uStack_a8 = puVar1[3];
          uStack_b0 = puVar1[2];
          uStack_98 = puVar1[5];
          uStack_a0 = puVar1[4];
          uStack_88 = puVar1[7];
          uStack_90 = puVar1[6];
          uVar4 = 0;
          func_0x00010428e134(0);
          func_0x000107c610f8();
          func_0x00010428c5b0(&uStack_c0,uVar4);
          puVar1 = (undefined8 *)(*(long *)(lVar7 + _DAT_112e9b5e0) + _DAT_112ff64c0);
          func_0x000107c4bdd8(*puVar1,puVar1[1],lVar3);
          func_0x000107c615e8(lVar3);
          puVar2 = (undefined1 *)puVar5;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar2);
        return;
      }
    }
  }
  return;
}



/* Entry: 10245614c; end: 1024561ab; -[_TtC36SCAdsPromotedTileAttachmentImplSwift35AdsPromotedTileAttachmentInteractor init] */

void FUN_10245614c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdsPromotedTileAttachmentImplSwift.AdsPromotedTileAttachmentInteractor",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102456178);
  (*pcVar1)();
}



/* Entry: 1024561ac; end: 1024562a3; -[_TtC36SCAdsPromotedTileAttachmentImplSwift35AdsPromotedTileAttachmentInteractor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024561c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024561e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102456228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102456268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102456288: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010245626c) */
/* WARNING: Removing unreachable block (ram,0x00010245622c) */
/* WARNING: Removing unreachable block (ram,0x0001024561ec) */
/* WARNING: Removing unreachable block (ram,0x0001024561cc) */
/* WARNING: Removing unreachable block (ram,0x00010245628c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024561ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9b2c0));
  return;
}



/* Entry: 1024562a4; end: 1024562c3;  */

void FUN_1024562a4(void)

{
  func_0x000107c61168(&PTR_PTR_112841a80);
  return;
}



/* Entry: 1024562c4; end: 10245630f;  */

void FUN_1024562c4(void)

{
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010428e134(0);
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  func_0x000107c610f8();
  func_0x00010428c5b0(&uStack_a0);
  return;
}



/* Entry: 102456310; end: 102456507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102456310(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  ppuVar8 = &puStack_80;
  lVar3 = *(long *)(unaff_x20 + _DAT_112e9b2d0);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    puVar7 = &UNK_11050af00;
    puVar4 = puVar7;
    func_0x000107c613fc(&UNK_11050af00,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_11050af28;
    func_0x000107c613fc(&UNK_11050af28,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_102456508;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_60 = FUN_102456510;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = (undefined *)0x102456760;
    puStack_68 = &UNK_11050af40;
    puStack_58 = puVar5;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c613fc(&UNK_11050af00,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    puVar5 = &UNK_11050af78;
    func_0x000107c613fc(&UNK_11050af78,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x10245654c;
    *(undefined **)(puVar5 + 0x18) = puVar7;
    pcStack_60 = (code *)0x10245675c;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100e27b38;
    puStack_68 = &UNK_11050af90;
    puStack_58 = puVar5;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c4c754(param_1);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    lVar2 = _DAT_112e9b5f0;
    lVar3 = *(long *)(unaff_x20 + _DAT_112e9b2c0);
    func_0x000107c61428(lVar3 + _DAT_112e9b5f0,&puStack_80,0,0);
    lVar3 = lVar3 + lVar2;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar4);
    }
    else {
      func_0x000107c4f464();
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar4);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 102456508; end: 10245650f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102456508(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + _DAT_112e9b318) & 1) == 0) {
      FUN_102456554();
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102456510; end: 10245652f;  */

void FUN_102456510(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102456530; end: 102456553;  */

void FUN_102456530(long param_1,long param_2)

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



/* Entry: 102456554; end: 1024566ef;  */

/* WARNING: Possible PIC construction at 0x0001024566b0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102456554(double param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = &uStack_c0;
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112e9b300));
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e9b340);
  puVar1[6] = param_1 * 1000.0;
  lVar7 = *(long *)(unaff_x20 + _DAT_112e9b2c0);
  puVar2 = *(undefined1 **)(lVar7 + _DAT_112e9b5d0);
  if (puVar2 != (undefined1 *)0x0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112e9b308);
    if (lVar6 != 0) {
      func_0x000107c61174();
      func_0x000107c3ece8(lVar6);
      func_0x000107c61180();
      lVar3 = *(long *)(unaff_x20 + _DAT_112e9b2c8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar6);
      }
      else {
        uStack_78 = puVar1[9];
        uStack_80 = puVar1[8];
        uStack_68 = puVar1[0xb];
        uStack_70 = puVar1[10];
        uStack_58 = puVar1[0xd];
        uStack_60 = puVar1[0xc];
        uStack_48 = puVar1[0xf];
        uStack_50 = puVar1[0xe];
        uStack_b8 = puVar1[1];
        uStack_c0 = *puVar1;
        uStack_a8 = puVar1[3];
        uStack_b0 = puVar1[2];
        uStack_98 = puVar1[5];
        uStack_a0 = puVar1[4];
        uStack_88 = puVar1[7];
        uStack_90 = puVar1[6];
        uVar4 = 0;
        func_0x00010428e134(0);
        func_0x000107c610f8();
        func_0x00010428c5b0(&uStack_c0,uVar4);
        puVar1 = (undefined8 *)(*(long *)(lVar7 + _DAT_112e9b5e0) + _DAT_112ff64c0);
        func_0x000107c4bddc(*puVar1,puVar1[1],lVar3);
        func_0x000107c615e8(lVar3);
        puVar2 = (undefined1 *)puVar5;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 1024566f0; end: 102456703;  */

void FUN_1024566f0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102455fac();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102456704; end: 10245672f;  */

void FUN_102456704(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102456730; end: 102456763;  */

void FUN_102456730(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_102455304(param_1,uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102456764; end: 1024569cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102456764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9b380) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9b388) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e9b390) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e9b398) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e9b3a0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e9b3a8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e9b3b0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e9b3b8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e9b3c0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112e9b3c8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112e9b3d0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112e9b3d8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112e9b3e0) = param_12;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024569cc; end: 102456ea3; -[AdsPromotedTileAttachmentSwiftDriver initWithBeginIn:grapheneServices:systemScope:promotedStoryDataServices:adsCrashLoggingServices:adsCanOpenUrlServices:adConfigService:adConfigProviderService:dpaConfigProviderService:adAttachmentHandlerScopeServices:adAttachmentHandlerScopeExposer:adTrackEventDataServices:] */

void FUN_1024569cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000102456898(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12,param_13,param_14);
  return;
}



/* Entry: 102456ea4; end: 102456f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102456ea4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x0001003d1364();
  lVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112e9b3c0) + _DAT_11304a480);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x00010040e024();
      lVar4 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 != 0) {
        uVar5 = 0;
        FUN_102d14ffc(0);
        func_0x000107c610f8();
        func_0x000102d14abc(lVar1,lVar2,lVar4,uVar5);
        return;
      }
      func_0x000107c615e8(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 102456f9c; end: 102456fc3; -[AdsPromotedTileAttachmentSwiftDriver begin] */

void FUN_102456f9c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102456af4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102456fc4; end: 102457027; -[AdsPromotedTileAttachmentSwiftDriver end] */

/* WARNING: Possible PIC construction at 0x000102457000: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102457004) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102456fc4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e9b380);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c61174(lVar1);
    FUN_10245523c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102457028; end: 102457087; -[AdsPromotedTileAttachmentSwiftDriver init] */

void FUN_102457028(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdsPromotedTileAttachmentImplSwift.AdsPromotedTileAttachmentSwiftDriver",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102457054);
  (*pcVar1)();
}



/* Entry: 102457088; end: 10245716f; -[AdsPromotedTileAttachmentSwiftDriver .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024570a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024570c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024570e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102457104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102457124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102457144: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102457128) */
/* WARNING: Removing unreachable block (ram,0x000102457108) */
/* WARNING: Removing unreachable block (ram,0x0001024570e8) */
/* WARNING: Removing unreachable block (ram,0x0001024570c8) */
/* WARNING: Removing unreachable block (ram,0x0001024570a8) */
/* WARNING: Removing unreachable block (ram,0x000102457148) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102457088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9b388));
  return;
}



/* Entry: 102457170; end: 10245718f;  */

void FUN_102457170(void)

{
  func_0x000107c61168(&PTR_PTR_112841bd0);
  return;
}



/* Entry: 102457190; end: 10245719f; -[_TtC36SCAdsPromotedTileAttachmentImplSwift40AdsPromotedTileDeeplinkAttachmentHandler attachmentDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102457190(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e9b410));
  return;
}



/* Entry: 1024571a0; end: 1024571bf; -[_TtC36SCAdsPromotedTileAttachmentImplSwift40AdsPromotedTileDeeplinkAttachmentHandler delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024571a0(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112e9b418);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024571c0; end: 102457213; -[_TtC36SCAdsPromotedTileAttachmentImplSwift40AdsPromotedTileDeeplinkAttachmentHandler setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024571c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61604(param_1 + _DAT_112e9b418,param_3);
  if (*(long *)(param_1 + _DAT_112e9b430) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112e9b430),PTR_s_setDelegate__112640798,param_3);
    return;
  }
  return;
}



/* Entry: 102457214; end: 102457433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102457214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar4 = &stack0xffffffffffffff60;
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112e9b418,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e9b438) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9b420) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e9b428) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e9b430) = param_3;
  puVar1 = &UNK_11050b0b8;
  func_0x000107c613fc(&UNK_11050b0b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x18) = 0;
  puVar6 = (undefined8 *)(puVar1 + 0x10);
  *puVar6 = 0;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_70 = FUN_10245804c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x102453c70;
  puStack_78 = &UNK_11050b0d0;
  ppuVar3 = &puStack_90;
  puStack_68 = puVar1;
  func_0x000107c60bc4(ppuVar3);
  puVar5 = puStack_68;
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(puVar1);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar5);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + _DAT_112e9b410) = puVar2;
  func_0x000107c61154(&stack0xffffffffffffff60,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  puVar5 = &UNK_11050b108;
  func_0x000107c613fc(&UNK_11050b108,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,puVar4);
  func_0x000107c61428(puVar6,&puStack_90,1,0);
  uVar7 = *puVar6;
  uVar8 = *(undefined8 *)(puVar1 + 0x18);
  *puVar6 = 0x102458070;
  *(undefined **)(puVar1 + 0x18) = puVar5;
  func_0x000107c6157c(puVar5);
  FUN_102453c3c(uVar7,uVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar5);
  return puVar4;
}



/* Entry: 102457434; end: 1024574ab;  */

undefined8 FUN_102457434(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  pcVar1 = *(code **)(param_1 + 0x10);
  if (pcVar1 == (code *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = uVar3;
    func_0x000107c6157c(uVar3);
    (*pcVar1)();
    FUN_102453c3c(pcVar1,uVar3);
  }
  return uVar2;
}



/* Entry: 1024574ac; end: 10245750f;  */

long FUN_1024574ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_102457510();
    func_0x000107c61170(param_1);
  }
  return lVar1;
}



/* Entry: 102457510; end: 1024578db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102457510(void)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long alStack_120 [17];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  
  lVar6 = 0;
  func_0x000100b91584();
  alStack_120[8] = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar11 = (long)alStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  alStack_120[7] = lVar11;
  func_0x000100b919a8();
  alStack_120[5] = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar11 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar11 - extraout_x8_01;
  lVar6 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  alStack_120[6] = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(unaff_x20 + _DAT_112e9b420);
  if (lVar8 == 0) {
    uVar15 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar9 = 0;
    alStack_120[9] = 0;
    alStack_120[10] = 0;
    alStack_120[0xb] = 0;
    alStack_120[0xc] = 0;
  }
  else {
    puVar1 = (undefined8 *)(lVar8 + _DAT_11308f138);
    plVar2 = (long *)(lVar8 + _DAT_11308f140);
    alStack_120[3] = puVar1[1];
    alStack_120[2] = *puVar1;
    alStack_120[1] = plVar2[1];
    alStack_120[0] = *plVar2;
    lVar16 = plVar2[1];
    uVar12 = *(undefined8 *)(lVar8 + _DAT_11308f128);
    uVar13 = *(undefined8 *)(lVar8 + _DAT_11308f130);
    uVar15 = ((undefined8 *)(lVar8 + _DAT_11308f130))[1];
    uVar9 = *(undefined8 *)(lVar8 + _DAT_113815300);
    func_0x000107c61434(puVar1[1]);
    func_0x000107c61434(lVar16);
    func_0x000107c61434(uVar15);
    alStack_120[9] = alStack_120[2];
    alStack_120[10] = alStack_120[3];
    alStack_120[0xb] = alStack_120[0];
    alStack_120[0xc] = alStack_120[1];
  }
  alStack_120[0xf] = 6;
  uStack_98 = 0xd000000000000010;
  uStack_90 = 0x800000010f09e810;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 1;
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112e9b428) + _DAT_11308fe10);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  alStack_120[0xd] = uVar13;
  alStack_120[0xe] = uVar15;
  alStack_120[0x10] = uVar12;
  uStack_70 = uVar9;
  func_0x000107c61434(uVar4);
  func_0x000107c5edd0(lVar14,uVar3,uVar4);
  func_0x000107c6142c(uVar4);
  lVar16 = lVar14;
  (**(code **)(lVar10 + 0x30))(lVar14,1,lVar6);
  lVar8 = alStack_120[6];
  if ((int)lVar16 == 1) {
    func_0x00010192246c(alStack_120 + 9);
    func_0x0001000293e4(lVar14);
    lVar14 = 0;
  }
  else {
    (**(code **)(lVar10 + 0x20))(alStack_120[6],lVar14,lVar6);
    (**(code **)(lVar10 + 0x10))(lVar11,lVar8,lVar6);
    lVar14 = alStack_120[5];
    FUN_102457d1c(lVar11 + *(int *)(alStack_120[5] + 0x14));
    puVar7 = &UNK_11050b108;
    func_0x000107c613fc(&UNK_11050b108,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    func_0x0001041a4f40(0);
    func_0x000107c610f8();
    uVar13 = 0x102458078;
    func_0x0001041a4c08(0x102458078,puVar7,FUN_102457f4c,0,0x102457f50,0);
    *(undefined8 *)(lVar11 + *(int *)(lVar14 + 0x18)) = uVar13;
    uVar9 = uStack_80;
    uVar15 = uStack_88;
    uVar13 = uStack_98;
    puVar1 = (undefined8 *)(lVar11 + *(int *)(lVar14 + 0x1c));
    puVar1[9] = uStack_90;
    puVar1[8] = uVar13;
    lVar14 = alStack_120[9];
    puVar1[0xb] = uVar9;
    puVar1[10] = uVar15;
    lVar16 = alStack_120[0xb];
    uVar13 = CONCAT71(uStack_77,uStack_78);
    puVar1[0xd] = uStack_70;
    puVar1[0xc] = uVar13;
    lVar5 = alStack_120[0xc];
    puVar1[1] = alStack_120[10];
    *puVar1 = lVar14;
    puVar1[3] = lVar5;
    puVar1[2] = lVar16;
    lVar5 = alStack_120[0x10];
    lVar16 = alStack_120[0xf];
    lVar14 = alStack_120[0xd];
    puVar1[5] = alStack_120[0xe];
    puVar1[4] = lVar14;
    puVar1[7] = lVar5;
    puVar1[6] = lVar16;
    func_0x0001041bb118(0);
    lVar14 = alStack_120[7];
    FUN_102458080(lVar11,alStack_120[7]);
    func_0x000107c6159c(lVar14,alStack_120[8],2);
    func_0x0001041b84d4(lVar14);
    func_0x0001024580c4(lVar11,&SUB_100b919a8);
    (**(code **)(lVar10 + 8))(lVar8,lVar6);
  }
  return lVar14;
}



/* Entry: 1024578dc; end: 1024578df; -[_TtC36SCAdsPromotedTileAttachmentImplSwift40AdsPromotedTileDeeplinkAttachmentHandler willPresentTileAttachment] */

void FUN_1024578dc(void)

{
  return;
}



/* Entry: 1024578e0; end: 102457ce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024578e0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  bool bVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  undefined1 auStack_170 [8];
  undefined8 uStack_168;
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [8];
  long alStack_138 [13];
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
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  lVar3 = 0;
  func_0x000100b91790();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_140 + lVar3;
  lVar4 = 0;
  func_0x000100b91acc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar11 = puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(unaff_x20 + _DAT_112e9b438);
  if (lVar5 == 0) {
    puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112e9b428) + _DAT_11308fe10);
    uVar8 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000107c61434(uVar2);
    puVar11[-0x10] = 1;
    *(undefined8 *)(puVar11 + -0x18) = 0;
    puVar11[-0x20] = 1;
    *(undefined8 *)(puVar11 + -0x28) = 0;
    puVar11[-0x30] = 1;
    *(undefined8 *)(puVar11 + -0x38) = 0;
    puVar11[-0x40] = 0;
    func_0x00010420fe14(&uStack_d0,1,0,0,0,uVar8,uVar2,0,0);
    func_0x000103bf6b80(0);
    puVar7 = &UNK_11050b090;
    func_0x000107c613fc(&UNK_11050b090,0x88,7);
    *(undefined8 *)(puVar7 + 0x58) = uStack_88;
    *(undefined8 *)(puVar7 + 0x50) = uStack_90;
    *(ulong *)(puVar7 + 0x68) = CONCAT71(uStack_77,uStack_78);
    *(undefined8 *)(puVar7 + 0x60) = uStack_80;
    *(undefined8 *)(puVar7 + 0x71) = uStack_6f;
    *(ulong *)(puVar7 + 0x69) = CONCAT17(uStack_70,uStack_77);
    *(undefined8 *)(puVar7 + 0x18) = uStack_c8;
    *(undefined8 *)(puVar7 + 0x10) = uStack_d0;
    *(undefined8 *)(puVar7 + 0x28) = uStack_b8;
    *(undefined8 *)(puVar7 + 0x20) = uStack_c0;
    *(undefined8 *)(puVar7 + 0x38) = uStack_a8;
    *(undefined8 *)(puVar7 + 0x30) = uStack_b0;
    *(undefined8 *)(puVar7 + 0x48) = uStack_98;
    *(undefined8 *)(puVar7 + 0x40) = uStack_a0;
    *(undefined8 *)(puVar7 + 0x80) = 0xf000000000000007;
    func_0x000103bf61e8((ulong)puVar7 | 0x8000000000000000);
  }
  else {
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x0001041c25dc(puVar11);
    puVar6 = puVar11;
    func_0x000107c614c4(puVar11,lVar4);
    if ((int)puVar6 == 1) {
      func_0x000102458100(puVar11,puVar10,&SUB_100b91790);
      puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112e9b428) + _DAT_11308fe10);
      uVar8 = *puVar1;
      uVar2 = puVar1[1];
      lVar4 = *(long *)((long)alStack_138 + lVar3 + 8);
      if (lVar4 == 0) {
        func_0x000107c61434(uVar2);
        bVar9 = false;
      }
      else {
        lVar3 = *(long *)((long)alStack_138 + lVar3);
        func_0x000107c61434(uVar2);
        func_0x000107c5fb5c(lVar3,lVar4);
        bVar9 = 0 < lVar3;
      }
      puVar11[-0x10] = 1;
      *(undefined8 *)(puVar11 + -0x18) = 0;
      puVar11[-0x20] = 1;
      *(undefined8 *)(puVar11 + -0x28) = 0;
      puVar11[-0x30] = 1;
      *(undefined8 *)(puVar11 + -0x38) = 0;
      puVar11[-0x40] = 0;
      func_0x00010420fe14(&uStack_d0,0,1,0,0,uVar8,uVar2,bVar9,0);
      puVar7 = &SUB_100b91790;
      puVar11 = puVar10;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112e9b428) + _DAT_11308fe10);
      uVar8 = *puVar1;
      uVar2 = puVar1[1];
      func_0x000107c61434(uVar2);
      puVar11[-0x10] = 1;
      *(undefined8 *)(puVar11 + -0x18) = 0;
      puVar11[-0x20] = 1;
      *(undefined8 *)(puVar11 + -0x28) = 0;
      puVar11[-0x30] = 1;
      *(undefined8 *)(puVar11 + -0x38) = 0;
      puVar11[-0x40] = 0;
      func_0x00010420fe14(&uStack_d0,0,0,1,0,uVar8,uVar2,0,0);
      puVar7 = &SUB_100b915bc;
    }
    func_0x0001024580c4(puVar11,puVar7);
    lVar3 = *(long *)(unaff_x20 + _DAT_112e9b430);
    if (lVar3 == 0) {
      puVar7 = &UNK_11050b090;
      func_0x000107c613fc(&UNK_11050b090,0x88,7);
      *(undefined8 *)(puVar7 + 0x58) = uStack_88;
      *(undefined8 *)(puVar7 + 0x50) = uStack_90;
      *(ulong *)(puVar7 + 0x68) = CONCAT71(uStack_77,uStack_78);
      *(undefined8 *)(puVar7 + 0x60) = uStack_80;
      *(undefined8 *)(puVar7 + 0x71) = uStack_6f;
      *(ulong *)(puVar7 + 0x69) = CONCAT17(uStack_70,uStack_77);
      *(undefined8 *)(puVar7 + 0x18) = uStack_c8;
      *(undefined8 *)(puVar7 + 0x10) = uStack_d0;
      *(undefined8 *)(puVar7 + 0x28) = uStack_b8;
      *(undefined8 *)(puVar7 + 0x20) = uStack_c0;
      *(undefined8 *)(puVar7 + 0x38) = uStack_a8;
      *(undefined8 *)(puVar7 + 0x30) = uStack_b0;
      *(undefined8 *)(puVar7 + 0x48) = uStack_98;
      *(undefined8 *)(puVar7 + 0x40) = uStack_a0;
      *(undefined8 *)(puVar7 + 0x80) = 0xf000000000000007;
      func_0x00010178e30c(&uStack_d0,auStack_140);
      lVar3 = 0;
    }
    else {
      func_0x000107c3ece8();
      func_0x000107c61180();
      puVar7 = &UNK_11050b090;
      func_0x000107c613fc(&UNK_11050b090,0x88,7);
      *(undefined8 *)(puVar7 + 0x58) = uStack_88;
      *(undefined8 *)(puVar7 + 0x50) = uStack_90;
      *(ulong *)(puVar7 + 0x68) = CONCAT71(uStack_77,uStack_78);
      *(undefined8 *)(puVar7 + 0x60) = uStack_80;
      *(undefined8 *)(puVar7 + 0x71) = uStack_6f;
      *(ulong *)(puVar7 + 0x69) = CONCAT17(uStack_70,uStack_77);
      *(undefined8 *)(puVar7 + 0x18) = uStack_c8;
      *(undefined8 *)(puVar7 + 0x10) = uStack_d0;
      *(undefined8 *)(puVar7 + 0x28) = uStack_b8;
      *(undefined8 *)(puVar7 + 0x20) = uStack_c0;
      *(undefined8 *)(puVar7 + 0x38) = uStack_a8;
      *(undefined8 *)(puVar7 + 0x30) = uStack_b0;
      *(undefined8 *)(puVar7 + 0x48) = uStack_98;
      *(undefined8 *)(puVar7 + 0x40) = uStack_a0;
      func_0x00010178e30c(&uStack_d0,auStack_140);
      func_0x000107c61174();
      lVar4 = lVar3;
      func_0x000103bf6230();
      *(long *)(puVar7 + 0x80) = lVar4;
    }
    uVar8 = 0;
    func_0x000103bf6b80(0);
    func_0x000103bf61e8((ulong)puVar7 | 0x8000000000000000,uVar8);
    func_0x00010178e348(&uStack_d0);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 102457ce8; end: 102457d1b; -[_TtC36SCAdsPromotedTileAttachmentImplSwift40AdsPromotedTileDeeplinkAttachmentHandler buildPromotedStoryTrack] */

void FUN_102457ce8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1024578e0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102457d1c; end: 102457ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102457d1c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar6;
  
  lVar1 = 0;
  func_0x000100b91584();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9b430);
  if (lVar2 != 0) {
    func_0x000107c3e2e4();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x0001041b86fc(puVar6,lVar3);
      puVar4 = puVar6;
      func_0x000107c614c4(puVar6,lVar1);
      if ((int)puVar4 == 1) {
        func_0x000102458100(puVar6,param_1,&SUB_100b91790);
        lVar1 = 0;
        func_0x000100b91acc();
        uVar5 = 1;
      }
      else {
        if ((int)puVar4 != 0) {
          lVar1 = 0;
          func_0x000100b91acc();
          (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,1,1,lVar1);
          func_0x0001024580c4(puVar6,&SUB_100b91584);
          return;
        }
        func_0x000102458100(puVar6,param_1,&SUB_100b915bc);
        lVar1 = 0;
        func_0x000100b91acc();
        uVar5 = 0;
      }
      func_0x000107c6159c(param_1,lVar1,uVar5);
      (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,0,1,lVar1);
      return;
    }
  }
  lVar1 = 0;
  func_0x000100b91acc();
                    /* WARNING: Could not recover jumptable at 0x000102457e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,1,1,lVar1);
  return;
}



/* Entry: 102457ed0; end: 102457f4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102457ed0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112e9b438);
    *(undefined8 *)(param_2 + _DAT_112e9b438) = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 102457f4c; end: 102457f53;  */

void FUN_102457f4c(void)

{
  return;
}



/* Entry: 102457f54; end: 102457fb3; -[_TtC36SCAdsPromotedTileAttachmentImplSwift40AdsPromotedTileDeeplinkAttachmentHandler init] */

void FUN_102457f54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdsPromotedTileAttachmentImplSwift.AdsPromotedTileDeeplinkAttachmentHandler"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102457f80);
  (*pcVar1)();
}



/* Entry: 102457fb4; end: 10245802b; -[_TtC36SCAdsPromotedTileAttachmentImplSwift40AdsPromotedTileDeeplinkAttachmentHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102457fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102457ff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102457fd4) */
/* WARNING: Removing unreachable block (ram,0x000102457ff4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102457fb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9b410));
  return;
}



/* Entry: 10245802c; end: 10245804b;  */

void FUN_10245802c(void)

{
  func_0x000107c61168(&PTR_PTR_112841cf0);
  return;
}



/* Entry: 10245804c; end: 10245807f;  */

undefined8 FUN_10245804c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (pcVar1 == (code *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar2 = uVar3;
    func_0x000107c6157c(uVar3);
    (*pcVar1)();
    FUN_102453c3c(pcVar1,uVar3);
  }
  return uVar2;
}



/* Entry: 102458080; end: 102458143;  */

undefined8 FUN_102458080(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100b919a8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102458144; end: 102458187;  */

void FUN_102458144(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102458188; end: 102458197; -[_TtC36SCAdsPromotedTileAttachmentImplSwift39AdsPromotedTileWebViewAttachmentHandler attachmentDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102458188(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e9b520));
  return;
}



/* Entry: 102458198; end: 1024581b7; -[_TtC36SCAdsPromotedTileAttachmentImplSwift39AdsPromotedTileWebViewAttachmentHandler delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102458198(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112e9b528);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024581b8; end: 1024581cb; -[_TtC36SCAdsPromotedTileAttachmentImplSwift39AdsPromotedTileWebViewAttachmentHandler setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024581b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112e9b528,param_3);
  return;
}



/* Entry: 1024581cc; end: 102458243;  */

undefined8 FUN_1024581cc(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  pcVar1 = *(code **)(param_1 + 0x10);
  if (pcVar1 == (code *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = uVar3;
    func_0x000107c6157c(uVar3);
    (*pcVar1)();
    FUN_102453c3c(pcVar1,uVar3);
  }
  return uVar2;
}



/* Entry: 102458244; end: 1024582a7;  */

long FUN_102458244(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_1024582a8();
    func_0x000107c61170(param_1);
  }
  return lVar1;
}



/* Entry: 1024582a8; end: 10245893f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024582a8(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long alStack_5c0 [3];
  undefined8 uVar21;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 auStack_58f [7];
  undefined1 auStack_588 [8];
  code *apcStack_580 [6];
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  undefined1 auStack_528 [608];
  undefined1 auStack_2c8 [328];
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_150;
  undefined8 uStack_148;
  byte bStack_fb;
  byte bStack_b0;
  
  lVar4 = 0;
  func_0x000100b91584();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar20 = (long)alStack_5c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x000100b915bc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar16 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar16 - extraout_x8_01;
  lVar6 = 0;
  func_0x000107c5ede0();
  lVar17 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lStack_530 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  if (((undefined8 *)(unaff_x20 + _DAT_112e9b538))[1] == 0) {
    return 0;
  }
  func_0x000107c5edd0(lVar12,*(undefined8 *)(unaff_x20 + _DAT_112e9b538));
  lVar14 = lVar12;
  (**(code **)(lVar17 + 0x30))(lVar12,1,lVar6);
  if ((int)lVar14 == 1) {
    func_0x000102458eac(lVar12,0x112d36580,&UNK_10d9016d0);
    return 0;
  }
  lStack_538 = lVar17;
  (**(code **)(lVar17 + 0x20))(lStack_530,lVar12,lVar6);
  puVar8 = &UNK_11050b158;
  puVar7 = puVar8;
  func_0x000107c613fc(&UNK_11050b158,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  func_0x000107c613fc(&UNK_11050b158,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  uVar9 = 0;
  func_0x0001041b8338(0);
  func_0x000107c610f8();
  pcVar2 = FUN_102458e58;
  func_0x0001041b812c(FUN_102458e58,puVar7,0x102458e60,puVar8,uVar9);
  lVar12 = *(long *)(unaff_x20 + _DAT_112e9b530);
  apcStack_580[5] = pcVar2;
  lStack_550 = lVar20;
  lStack_548 = lVar4;
  lStack_540 = lVar6;
  if (lVar12 == 0) {
    apcStack_580[1] = (code *)0x0;
    apcStack_580[2] = (code *)0x0;
    auStack_588 = (undefined1  [8])0x0;
    apcStack_580[0] = (code *)0x0;
    uStack_598 = 0;
    uStack_590 = 0;
    apcStack_580[3] = (code *)0x0;
    apcStack_580[4] = (code *)0x0;
    uStack_5a0 = 0x800000010f09e810;
    lVar4 = lStack_530;
  }
  else {
    apcStack_580[4] = *(code **)(lVar12 + _DAT_11308f138);
    apcStack_580[3] = (code *)((undefined8 *)(lVar12 + _DAT_11308f138))[1];
    apcStack_580[1] = *(code **)(lVar12 + _DAT_11308f140);
    uVar9 = ((undefined8 *)(lVar12 + _DAT_11308f140))[1];
    apcStack_580[0] = *(code **)(lVar12 + _DAT_11308f128);
    uStack_590 = *(undefined8 *)(lVar12 + _DAT_11308f130);
    uVar19 = ((undefined8 *)(lVar12 + _DAT_11308f130))[1];
    apcStack_580[2] = *(code **)(lVar12 + _DAT_113815300);
    func_0x000107c61434();
    auStack_588 = (undefined1  [8])uVar9;
    func_0x000107c61434(uVar9);
    uStack_598 = uVar19;
    func_0x000107c61434(uVar19);
    uStack_5a0 = 0x800000010f09e810;
    uVar11 = *(ulong *)(lVar12 + _DAT_113815208);
    lVar4 = lStack_530;
    if (uVar11 != 0) {
      uVar13 = uVar11 & 0xffffffffffffff8;
      if (uVar11 >> 0x3e == 0) {
        uVar10 = *(ulong *)(uVar13 + 0x10);
      }
      else {
        uVar10 = uVar11;
        if (-1 < (long)uVar11) {
          uVar10 = uVar13;
        }
        func_0x000107c60480();
        lVar4 = lStack_530;
      }
      lStack_530 = lVar4;
      if (uVar10 != 0) {
        if ((uVar11 & 0xc000000000000001) == 0) {
          if (*(long *)(uVar13 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102458934);
            (*pcVar2)();
          }
          lVar17 = *(long *)(*(long *)(uVar11 + 0x20) + _DAT_11308f208);
          if (lVar17 != 0) {
            func_0x000107c61174();
            goto LAB_1024585bc;
          }
        }
        else {
          func_0x000107c61434(uVar11);
          lVar6 = 0;
          func_0x000100e471e4(0,uVar11);
          func_0x000107c6142c(uVar11);
          lVar20 = *(long *)(lVar6 + _DAT_11308f208);
          lVar17 = lVar20;
          func_0x000107c61174();
          func_0x000107c615e8(lVar6);
          lVar6 = lStack_540;
          lVar4 = lStack_530;
          if (lVar20 != 0) {
LAB_1024585bc:
            lVar14 = *(long *)(lVar17 + _DAT_113091070);
            lVar20 = lVar14;
            func_0x000107c61174();
            func_0x000107c61170(lVar17);
            lVar6 = lStack_540;
            if (lVar14 != 0) {
              lVar14 = *(long *)(lVar20 + _DAT_113090fd8);
              lVar17 = lVar14;
              func_0x000107c61174();
              func_0x000107c61170(lVar20);
              lVar6 = lStack_540;
              if (lVar14 != 0) {
                func_0x000107c61174();
                alStack_5c0[2] = lVar17;
                func_0x000104830064(auStack_528);
                func_0x000101553e8c(auStack_528);
                func_0x000107c610b4(auStack_2c8,auStack_528,0x260);
                lVar6 = lStack_540;
                goto LAB_10245869c;
              }
            }
          }
        }
      }
    }
  }
  func_0x000101551a34(auStack_2c8);
  alStack_5c0[2] = 0;
LAB_10245869c:
  (**(code **)(lStack_538 + 0x10))(lVar16,lVar4,lVar6);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e9b540);
  iVar3 = (int)auStack_2c8;
  func_0x0001015538ec();
  if (iVar3 == 1) {
    uVar19 = 0;
    uVar15 = 0;
    alStack_5c0[0] = 0;
    alStack_5c0[1] = 0;
  }
  else {
    func_0x000100e3ecdc(uStack_180,lStack_178,uStack_170,uStack_168);
    alStack_5c0[1] = uStack_180;
    alStack_5c0[0] = lStack_178;
    uVar19 = uStack_170;
    uVar15 = uStack_168;
  }
  if (lVar12 == 0) {
    uVar21 = 0;
    uVar18 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(lVar12 + _DAT_11308f158);
    uVar18 = ((undefined8 *)(lVar12 + _DAT_11308f158))[1];
    func_0x000107c61434(uVar18);
  }
  iVar3 = (int)auStack_2c8;
  func_0x0001015538ec();
  if (iVar3 == 1) {
    uStack_148 = 0;
    uStack_150 = 0;
    bStack_fb = 0;
    bStack_b0 = 0;
  }
  else {
    func_0x000107c61434();
  }
  *(undefined8 *)(lVar16 + *(int *)(lVar5 + 0x14)) = uVar9;
  puVar1 = (undefined8 *)(lVar16 + *(int *)(lVar5 + 0x18));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x39) = 0;
  *(undefined8 *)((long)puVar1 + 0x31) = 0;
  pcVar2 = apcStack_580[4];
  *(code **)(lVar16 + *(int *)(lVar5 + 0x1c)) = apcStack_580[5];
  puVar1 = (undefined8 *)(lVar16 + *(int *)(lVar5 + 0x20));
  *puVar1 = pcVar2;
  pcVar2 = apcStack_580[1];
  lVar6 = alStack_5c0[0];
  puVar1[1] = apcStack_580[3];
  puVar1[2] = pcVar2;
  uVar9 = uStack_590;
  puVar1[3] = auStack_588;
  puVar1[4] = uVar9;
  puVar1[5] = uStack_598;
  puVar1[6] = 3;
  puVar1[7] = apcStack_580[0];
  puVar1[8] = 0xd000000000000010;
  puVar1[9] = uStack_5a0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined1 *)(puVar1 + 0xc) = 1;
  puVar1[0xd] = apcStack_580[2];
  puVar1 = (undefined8 *)(lVar16 + *(int *)(lVar5 + 0x24));
  *puVar1 = alStack_5c0[1];
  puVar1[1] = lVar6;
  puVar1[2] = uVar19;
  puVar1[3] = uVar15;
  puVar1 = (undefined8 *)(lVar16 + *(int *)(lVar5 + 0x28));
  *puVar1 = uVar21;
  puVar1[1] = uVar18;
  *(byte *)(lVar16 + *(int *)(lVar5 + 0x2c)) = bStack_fb & 1;
  puVar1 = (undefined8 *)(lVar16 + *(int *)(lVar5 + 0x30));
  *puVar1 = uStack_150;
  puVar1[1] = uStack_148;
  *(byte *)(lVar16 + *(int *)(lVar5 + 0x34)) = bStack_b0 & 1;
  func_0x0001041bb118(0);
  lVar6 = lStack_550;
  func_0x000102458e68(lVar16,lStack_550);
  func_0x000107c6159c(lVar6,lStack_548,0);
  func_0x0001041b84d4(lVar6);
  func_0x000107c61170(alStack_5c0[2]);
  func_0x000102458eac(auStack_2c8,0x112db3ce8,&UNK_10d98ff60);
  func_0x000102458eec(lVar16);
  (**(code **)(lStack_538 + 8))(lStack_530,lStack_540);
  return lVar6;
}



/* Entry: 102458940; end: 102458ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102458940(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)(unaff_x20 + _DAT_112e9b550);
  if (*(char *)(lVar8 + 0x28) != '\x01') goto LAB_102458a88;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9b560);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      if (*(long *)(unaff_x20 + _DAT_112e9b530) == 0) {
LAB_1024589e0:
        uVar7 = 0;
      }
      else {
        puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112e9b530) + _DAT_11308f138);
        lVar6 = puVar1[1];
        if (lVar6 == 0) goto LAB_1024589e0;
        uVar7 = *puVar1;
        func_0x000107c61434(lVar6);
        func_0x000107c5fadc(uVar7,lVar6);
        func_0x000107c6142c(lVar6);
      }
      func_0x000102458e14(0);
      uVar3 = 1;
      func_0x000103dec218(1);
      uVar4 = 0xd000000000000020;
      func_0x000107c5fadc(0xd000000000000020,0x800000010f09ea60);
      uVar5 = 0xd000000000000019;
      func_0x000107c5fadc(0xd000000000000019,0x800000010f09ea90);
      func_0x000107c3e1fc(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
    }
  }
  if ((*(byte *)(lVar8 + 0x28) & 1) != 0) {
    return;
  }
LAB_102458a88:
  func_0x000107c40fd4(*(undefined8 *)(lVar8 + 0x10));
  if ((*(byte *)(lVar8 + 0x28) & 1) == 0) {
    *(undefined1 *)(lVar8 + 0x28) = 1;
    *(undefined8 *)(lVar8 + 0x20) = param_1;
  }
  return;
}



/* Entry: 102458ab8; end: 102458adf; -[_TtC36SCAdsPromotedTileAttachmentImplSwift39AdsPromotedTileWebViewAttachmentHandler willPresentTileAttachment] */

void FUN_102458ab8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102458940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102458ae0; end: 102458b8f; -[_TtC36SCAdsPromotedTileAttachmentImplSwift39AdsPromotedTileWebViewAttachmentHandler buildPromotedStoryTrack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102458ae0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_348 [776];
  
  func_0x000103bf6b80(0);
  puVar1 = &UNK_11050b130;
  func_0x000107c613fc(&UNK_11050b130,0x311,7);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e9b548);
  func_0x000107c61174(param_1);
  func_0x000107c5e260(uVar2);
  func_0x000107c61180();
  func_0x0001042c3e04(auStack_348);
  func_0x000107c610b4(puVar1 + 0x10,auStack_348,0x301);
  func_0x000103bf61e8(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102458b90; end: 102458c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102458b90(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c4dd9c(*(undefined8 *)(param_2 + _DAT_112e9b548));
    func_0x000107c4bfbc(*(undefined8 *)(param_2 + _DAT_112e9b558));
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102458c10; end: 102458cf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102458c10(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11306ba00);
    func_0x000107c55fe8(uVar1,*(undefined8 *)(param_2 + _DAT_112e9b548));
    func_0x000107c4bfc0(uVar1,*(undefined8 *)(param_2 + _DAT_112e9b558));
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102458cf8; end: 102458d57; -[_TtC36SCAdsPromotedTileAttachmentImplSwift39AdsPromotedTileWebViewAttachmentHandler init] */

void FUN_102458cf8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdsPromotedTileAttachmentImplSwift.AdsPromotedTileWebViewAttachmentHandler"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102458d24);
  (*pcVar1)();
}



/* Entry: 102458d58; end: 102458df3; -[_TtC36SCAdsPromotedTileAttachmentImplSwift39AdsPromotedTileWebViewAttachmentHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102458d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102458d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102458db8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102458d98) */
/* WARNING: Removing unreachable block (ram,0x000102458d78) */
/* WARNING: Removing unreachable block (ram,0x000102458dbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102458d58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9b520));
  return;
}



/* Entry: 102458df4; end: 102458e57;  */

void FUN_102458df4(void)

{
  func_0x000107c61168(&PTR_PTR_112841dd8);
  return;
}



/* Entry: 102458e58; end: 102458e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102458e58(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4dd9c(*(undefined8 *)(lVar1 + _DAT_112e9b548));
    func_0x000107c4bfbc(*(undefined8 *)(lVar1 + _DAT_112e9b558));
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102458e68; end: 102458f27;  */

undefined8 FUN_102458e68(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100b915bc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102458f28; end: 1024590d3;  */

/* WARNING: Possible PIC construction at 0x000102458f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102458fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102459050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102459060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024590b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102459054) */
/* WARNING: Removing unreachable block (ram,0x000102458fdc) */
/* WARNING: Removing unreachable block (ram,0x000102458f78) */
/* WARNING: Removing unreachable block (ram,0x000102458fe0) */
/* WARNING: Removing unreachable block (ram,0x000102458f7c) */
/* WARNING: Removing unreachable block (ram,0x000102458ff8) */
/* WARNING: Removing unreachable block (ram,0x000102459064) */
/* WARNING: Removing unreachable block (ram,0x0001024590a0) */
/* WARNING: Removing unreachable block (ram,0x000102459088) */
/* WARNING: Removing unreachable block (ram,0x0001024590a4) */
/* WARNING: Removing unreachable block (ram,0x000102458f98) */
/* WARNING: Removing unreachable block (ram,0x000102459000) */
/* WARNING: Removing unreachable block (ram,0x000102459018) */
/* WARNING: Removing unreachable block (ram,0x000102458fb0) */
/* WARNING: Removing unreachable block (ram,0x0001024590b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102458f28(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e9b598);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c3d2d8();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1024590d4; end: 1024591bb; -[_TtC36SCAdsPromotedTileAttachmentImplSwift38AdsPromotedTileWebViewAttachmentLogger logWebBrowserSessionEvent:] */

void FUN_1024590d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long extraout_x8;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar1 = 0;
  func_0x000104259764();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = (undefined8 *)(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x0001042bbef4(puVar3,param_3);
  puVar2 = puVar3;
  func_0x000107c614c4(puVar3,lVar1);
  if ((int)puVar2 == 2) {
    uVar4 = *puVar3;
    FUN_102458f28(uVar4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar4);
  }
  else {
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    FUN_102459608(puVar3);
  }
  return;
}



/* Entry: 1024591bc; end: 1024594cf;  */

/* WARNING: Possible PIC construction at 0x000102459220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102459310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102459370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102459380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024593f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102459408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102459468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102459478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010245949c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010245946c) */
/* WARNING: Removing unreachable block (ram,0x00010245940c) */
/* WARNING: Removing unreachable block (ram,0x000102459420) */
/* WARNING: Removing unreachable block (ram,0x000102459424) */
/* WARNING: Removing unreachable block (ram,0x0001024593fc) */
/* WARNING: Removing unreachable block (ram,0x000102459384) */
/* WARNING: Removing unreachable block (ram,0x0001024593a8) */
/* WARNING: Removing unreachable block (ram,0x0001024593b4) */
/* WARNING: Removing unreachable block (ram,0x000102459374) */
/* WARNING: Removing unreachable block (ram,0x000102459314) */
/* WARNING: Removing unreachable block (ram,0x000102459224) */
/* WARNING: Removing unreachable block (ram,0x000102459284) */
/* WARNING: Removing unreachable block (ram,0x000102459228) */
/* WARNING: Removing unreachable block (ram,0x0001024592a8) */
/* WARNING: Removing unreachable block (ram,0x00010245926c) */
/* WARNING: Removing unreachable block (ram,0x0001024592ac) */
/* WARNING: Removing unreachable block (ram,0x000102459318) */
/* WARNING: Removing unreachable block (ram,0x00010245947c) */
/* WARNING: Removing unreachable block (ram,0x0001024592cc) */
/* WARNING: Removing unreachable block (ram,0x000102459320) */
/* WARNING: Removing unreachable block (ram,0x000102459338) */
/* WARNING: Removing unreachable block (ram,0x0001024592e8) */
/* WARNING: Removing unreachable block (ram,0x0001024594a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024591bc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e9b598);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c3d2d8();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1024594d0; end: 10245954f; -[_TtC36SCAdsPromotedTileAttachmentImplSwift38AdsPromotedTileWebViewAttachmentLogger logWebViewClosed:loadedOnExit:visiblePageLoadTimeSec:initialPageStatusCode:] */

/* WARNING: Possible PIC construction at 0x000102459530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102459534) */

void FUN_1024594d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_2);
  FUN_1024591bc(param_1,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102459550; end: 1024595af; -[_TtC36SCAdsPromotedTileAttachmentImplSwift38AdsPromotedTileWebViewAttachmentLogger init] */

void FUN_102459550(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdsPromotedTileAttachmentImplSwift.AdsPromotedTileWebViewAttachmentLogger",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10245957c);
  (*pcVar1)();
}



/* Entry: 1024595b0; end: 1024595e7; -[_TtC36SCAdsPromotedTileAttachmentImplSwift38AdsPromotedTileWebViewAttachmentLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024595b0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e9b590));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9b598));
  return;
}



/* Entry: 1024595e8; end: 102459607;  */

void FUN_1024595e8(void)

{
  func_0x000107c61168(&PTR_PTR_112841ed8);
  return;
}



/* Entry: 102459608; end: 102459643;  */

undefined8 FUN_102459608(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000104259764();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}


