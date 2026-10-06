/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103404e0c; end: 10340533f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103404e0c(double param_1,undefined8 param_2,double param_3,double param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  code *pcVar13;
  code *pcVar14;
  undefined8 uVar15;
  long extraout_x8;
  long unaff_x20;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  ulong auStack_d0 [2];
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  byte bStack_91;
  long lStack_90;
  long lStack_88;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  lVar4 = 0;
  func_0x000107c5f83c();
  lVar18 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(*(long *)(unaff_x20 + _DAT_112f65800) + _DAT_113016c18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x0001007d6c6c(2,0xd000000000000028,0x800000010f14b150,lVar3,&PTR_DAT_110651a58);
  }
  else {
    uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f657e8);
    lStack_b8 = lVar3;
    lStack_a8 = lVar5;
    func_0x000107c438d4(uVar17);
    puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    puVar7 = puVar6;
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c51820();
    dVar20 = param_1;
    func_0x000107c61170(puVar7);
    param_3 = param_3 * param_1;
    uStack_b0 = uVar17;
    func_0x000107c438d4(uVar17);
    func_0x000107c4c194(puVar6);
    func_0x000107c61180();
    func_0x000107c51820();
    func_0x000107c61170(puVar6);
    param_4 = param_4 * dVar20;
    dVar20 = *(double *)(unaff_x20 + _DAT_112f65818);
    bVar2 = false;
    if ((0.0 < dVar20) && (bVar2 = false, !NAN(dVar20) && !NAN(param_3))) {
      bVar2 = dVar20 < param_3;
    }
    dVar21 = param_4;
    if (bVar2) {
      dVar21 = (double)(long)(param_4 * (dVar20 / param_3));
      param_3 = dVar20;
    }
    uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f65820);
    uVar19 = ((undefined8 *)(unaff_x20 + _DAT_112f65820))[1];
    lVar8 = 0;
    FUN_10340c398();
    lVar5 = lVar8;
    func_0x000107c610f8();
    lVar3 = _DAT_112f65de0;
    func_0x00010006a340(0);
    func_0x000107c613fc();
    uVar9 = uVar19;
    func_0x000107c61434();
    func_0x00010006a360();
    *(undefined8 *)(lVar5 + lVar3) = uVar9;
    uVar9 = uVar17;
    uVar15 = uVar19;
    FUN_10340ca34();
    puVar11 = (undefined8 *)(lVar5 + _DAT_112f65de8);
    *puVar11 = uVar17;
    puVar11[1] = uVar19;
    puVar11[2] = uVar9;
    puVar11[3] = uVar15;
    puVar11[4] = param_4;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    plVar10 = &lStack_90;
    lStack_90 = lVar5;
    lStack_88 = lVar8;
    func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
    uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f657c8);
    *(long **)(unaff_x20 + _DAT_112f657c8) = plVar10;
    func_0x000107c61174();
    func_0x000107c61170(uVar17);
    func_0x0001000d224c(&bStack_91);
    func_0x000107c5f830(auStack_c0 + lVar1);
    func_0x000107c5f82c();
    (**(code **)(lVar18 + 8))(auStack_c0 + lVar1,lVar4);
    dVar20 = *(double *)(unaff_x20 + _DAT_112f65810);
    if (dVar20 <= 0.0) {
      func_0x000104366fc4(0xd000000000000026,0x800000010f14b180,lStack_b8,&PTR_DAT_110651a58);
      dVar20 = 30.0;
    }
    puVar11 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c466c0(1000.0 / dVar20);
    puVar12 = puVar11;
    func_0x0001043b7580();
    uVar17 = *puVar12;
    uVar19 = puVar12[1];
    func_0x000107c61434(uVar19);
    func_0x000107c5fadc(uVar17,uVar19);
    func_0x000107c6142c(uVar19);
    uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112f65808);
    *(long **)((long)auStack_d0 + lVar1) = plVar10;
    *(ulong *)((long)auStack_d0 + lVar1 + 8) = (ulong)~(uint)bStack_91 & 1;
    lVar1 = lStack_a8;
    lVar3 = lStack_a8;
    func_0x000107c412b0(param_3,dVar21);
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    func_0x000107c61170(uVar17);
    lVar4 = lVar3;
    func_0x000107c5ba38();
    func_0x000107c61180();
    uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f657c0);
    *(long *)(unaff_x20 + _DAT_112f657c0) = lVar4;
    func_0x000107c615e8(uVar17);
    puStack_a0 = PTR_DAT_1126a1da8;
    lVar4 = lVar3;
    func_0x000107c61494(lVar3,1,&puStack_a0);
    if (lVar4 != 0) {
      func_0x000107c615f0(lVar3);
    }
    func_0x000107c61604(unaff_x20 + _DAT_112f657d0,lVar4);
    func_0x000107c615e8(lVar4);
    FUN_103405588();
    lVar4 = unaff_x20 + _DAT_112f657b8;
    func_0x000107c61618(lVar4);
    uVar17 = uStack_b0;
    func_0x0001043b6dfc(uStack_b0,1,lVar3,uVar19,0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112f657f8));
    if (*(char *)(unaff_x20 + _DAT_112f65830) == '\x01') {
      plVar16 = *(long **)(unaff_x20 + _DAT_112f65828);
      puVar6 = &UNK_110650eb8;
      func_0x000107c613fc(&UNK_110650eb8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      pcVar13 = FUN_103405898;
      puVar7 = puVar6;
      (**(code **)(*plVar16 + 0x60))(FUN_103405898);
      func_0x000107c61574(puVar6);
      pcVar14 = pcVar13;
      func_0x000107c614f0(pcVar13);
      (**(code **)(puVar7 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f657e0),pcVar14,puVar7);
      func_0x000107c61170(uVar17);
      func_0x000107c61170(plVar10);
      func_0x000107c615e8(pcVar13);
    }
    else {
      func_0x000107c61170(uVar17);
      func_0x000107c61170(plVar10);
    }
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 103405340; end: 1034053db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103405340(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f657d8);
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c615f0(lVar2);
    func_0x000107c41570(puVar1);
    func_0x000107c61180();
    func_0x000107c4ffa0();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1034053dc; end: 10340548b; -[_TtC19GamesLensProcessing26GamesLensViewfinderExposer dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034053dc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar3 = *(long *)(param_1 + _DAT_112f657d8);
  if (lVar3 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(lVar3);
    func_0x000107c41570(puVar2);
    func_0x000107c61180();
    func_0x000107c4ffa0();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(puVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10340548c; end: 103405587; -[_TtC19GamesLensProcessing26GamesLensViewfinderExposer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010340551c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103405520) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340548c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f657e8));
  func_0x000100d47cdc(param_1 + _DAT_112f657b8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f657f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f657f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f65800));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f65808));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f65820 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f65828));
  return;
}



/* Entry: 103405588; end: 1034056d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103405588(void)

{
  undefined *puVar1;
  undefined *puVar2;
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
  
  ppuVar4 = &puStack_70;
  if (*(char *)(unaff_x20 + _DAT_112f65840) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168();
    func_0x000107c41570();
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x000107c61168(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    func_0x000107c4c188();
    func_0x000107c61180();
    puVar3 = &UNK_110650eb8;
    func_0x000107c613fc(&UNK_110650eb8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_50 = FUN_1034058c0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100ef35e4;
    puStack_58 = &UNK_110650ed0;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    puVar3 = puVar1;
    func_0x000107c3d7c4();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f657d8);
    *(undefined **)(unaff_x20 + _DAT_112f657d8) = puVar3;
    func_0x000107c615e8(uVar5);
    FUN_1034057c4();
  }
  return;
}



/* Entry: 1034056d4; end: 10340576f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034056d4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((uVar4 >> 0x3d == 0) && (lVar3 = *(long *)(param_2 + _DAT_112f657c8), lVar3 != 0)) {
      func_0x000107c61174(lVar3);
      FUN_10340bb58(uVar1,uVar2);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103405770; end: 1034057c3;  */

void FUN_103405770(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1034057c4();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1034057c4; end: 10340586b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034057c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  double dVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c61168();
  func_0x000107c4f2b0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c8d0();
  func_0x000107c61170(puVar1);
  dVar5 = *(double *)(unaff_x20 + _DAT_112f65810);
  lVar3 = unaff_x20 + _DAT_112f657d0;
  func_0x000107c61618();
  if (lVar3 != 0) {
    dVar4 = 30.0;
    if (dVar5 <= 30.0) {
      dVar4 = dVar5;
    }
    if (puVar2 != (undefined *)0x0) {
      dVar5 = dVar4;
    }
    func_0x000107c5d484(dVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
    return;
  }
  return;
}



/* Entry: 10340586c; end: 103405897; -[_TtC19GamesLensProcessing26GamesLensViewfinderExposer init] */

void FUN_10340586c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesLensProcessing.GamesLensViewfinderExposer",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103405898);
  (*pcVar1)();
}



/* Entry: 103405898; end: 10340589f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103405898(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if ((uVar4 >> 0x3d == 0) && (lVar3 = *(long *)(lVar3 + _DAT_112f657c8), lVar3 != 0)) {
      func_0x000107c61174(lVar3);
      FUN_10340bb58(uVar1,uVar2);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1034058a0; end: 1034058bf;  */

void FUN_1034058a0(void)

{
  func_0x000107c61168(&PTR_PTR_1128d89a0);
  return;
}



/* Entry: 1034058c0; end: 1034058e3;  */

void FUN_1034058c0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1034057c4();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1034058e4; end: 103405b97;  */

void FUN_1034058e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar11 = *unaff_x20;
  uStack_58 = 0x656c206e69676562;
  uStack_50 = 0xed00003d6449736e;
  uVar9 = unaff_x20[2];
  func_0x000107c4b1dc(uVar9);
  func_0x000107c61180();
  uVar1 = uVar9;
  func_0x000107c5faec();
  func_0x000107c61170(uVar9);
  func_0x000107c5fb78(uVar1,param_2);
  func_0x000107c6142c(param_2);
  uVar1 = uStack_50;
  func_0x0001007d6c6c(1,uStack_58,uStack_50,uVar11,&PTR_DAT_110651b38);
  func_0x000107c6142c(uVar1);
  lVar10 = unaff_x20[9];
  func_0x000107c61428(lVar10 + 0x20,&uStack_58,1,0);
  *(undefined1 *)(lVar10 + 0x20) = 1;
  plVar2 = (long *)unaff_x20[3];
  lVar10 = unaff_x20[4];
  func_0x000107c614f0();
  (**(code **)(lVar10 + 8))();
  puVar3 = &UNK_110650f08;
  func_0x000107c613fc(&UNK_110650f08,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  pcVar4 = FUN_103406c74;
  puVar8 = puVar3;
  (**(code **)(*plVar2 + 0x60))();
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  pcVar5 = pcVar4;
  func_0x000107c614f0();
  (**(code **)(puVar8 + 0x10))(unaff_x20[0x15],pcVar5,puVar8);
  func_0x000107c615e8(pcVar4);
  uVar6 = unaff_x20[7];
  func_0x000107c3ef48();
  func_0x000107c61180();
  if (uVar6 != 0) {
    uVar7 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    uVar6 = uVar7 & 0xffffffffffff;
    if (((ulong)pcVar5 & 0x2000000000000000) != 0) {
      uVar6 = (ulong)pcVar5 >> 0x38 & 0xf;
    }
    if (uVar6 != 0) {
      FUN_103405b98(uVar7,pcVar5);
      func_0x000107c6142c(pcVar5);
      return;
    }
    func_0x000107c6142c(pcVar5);
  }
  FUN_103405fa0();
  return;
}



/* Entry: 103405b98; end: 103405f9f;  */

/* WARNING: Possible PIC construction at 0x000103405cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103405cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103405ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103405f60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103405ec0) */
/* WARNING: Removing unreachable block (ram,0x000103405d00) */
/* WARNING: Removing unreachable block (ram,0x000103405cf0) */
/* WARNING: Removing unreachable block (ram,0x000103405f64) */

void FUN_103405b98(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = unaff_x20 + 0x28;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = unaff_x20 + 0x30;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_1033fc6c0(unaff_x20 + 0x50,&uStack_88);
      uVar6 = uStack_70;
      func_0x0001000a8868(&uStack_88,uStack_70);
      lVar8 = *(long *)(unaff_x20 + 0x10);
      lVar1 = lVar8;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c5faec();
      uVar7 = uVar6;
      func_0x000107c61170(lVar1);
      lVar1 = lVar8;
      func_0x000107c401fc();
      func_0x000107c61180();
      if (lVar1 == 0) {
LAB_103405c8c:
        lVar1 = 0;
        uVar7 = 0;
      }
      else {
        lVar3 = lVar1;
        func_0x000107c3ddb8();
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        if (lVar3 == 0) goto LAB_103405c8c;
        lVar1 = lVar3;
        func_0x000107c5faec(lVar3);
        func_0x000107c61170(lVar3);
      }
      lVar3 = lVar8;
      func_0x000107c5db5c(lVar8);
      lVar4 = lVar8;
      func_0x000107c49b94(lVar8);
      func_0x00010434914c(lVar3,lVar4);
      (**(code **)(lStack_68 + 8))(lVar2,uVar6,lVar1,uVar7,lVar3,lVar8,uStack_70,lStack_68);
      goto code_r0x000107c6142c;
    }
    func_0x000107c61170(lVar1);
  }
  uStack_88 = 0;
  uStack_80 = 0xe000000000000000;
  func_0x000107c602fc(0x37);
  uVar6 = 0x800000010f14b1e0;
  func_0x000107c5fb78(0xd000000000000035,0x800000010f14b1e0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4b1dc(uVar5);
  func_0x000107c61180();
  uVar7 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  func_0x000107c5fb78(uVar7,uVar6);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
  return;
}



/* Entry: 103405fa0; end: 1034062b3;  */

void FUN_103405fa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_80;
  uVar9 = *unaff_x20;
  func_0x0001000d224c(&puStack_80);
  puVar1 = puStack_80;
  if (puStack_80 == (undefined *)0x0) {
    FUN_1034062b4(8,0xd00000000000001d,0x800000010f14b260,1);
  }
  else {
    puStack_80 = (undefined *)0x0;
    lStack_78 = 0xe000000000000000;
    func_0x000107c602fc(0x26);
    func_0x000107c6142c(lStack_78);
    puStack_80 = (undefined *)0xd000000000000024;
    lStack_78 = -0x7ffffffef0eb4d80;
    uVar10 = unaff_x20[2];
    uVar2 = uVar10;
    func_0x000107c4b1dc(uVar10);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    func_0x000107c5fb78(uVar3,param_2);
    func_0x000107c6142c(param_2);
    lVar4 = lStack_78;
    func_0x0001007d6c6c(1,puStack_80,lStack_78,uVar9,&PTR_DAT_110651b38);
    func_0x000107c6142c();
    func_0x000100fe4188();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 3;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    *(undefined8 *)(lVar4 + 0x20) = uVar10;
    uVar9 = 0;
    func_0x000100c70ba8(0);
    func_0x000107c61174(uVar10);
    lVar5 = lVar4;
    func_0x000107c5fc48(lVar4,uVar9);
    func_0x000107c61574(lVar4);
    puVar6 = puVar1;
    func_0x000107c43160(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar7 = &UNK_110650f08;
    func_0x000107c613fc(&UNK_110650f08,0x18,7);
    func_0x000107c61644(puVar7 + 0x10);
    uStack_60 = 0x103406c8c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_78 = 0x42000000;
    puStack_70 = &UNK_101286f34;
    puStack_68 = &UNK_110650f48;
    puStack_58 = puVar7;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c5dc64(puVar6);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 1034062b4; end: 10340640b;  */

void FUN_1034062b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [96];
  undefined1 uStack_48;
  
  if ((param_4 & 1) == 0) {
    func_0x0001007d6c6c(3,param_2,param_3,*unaff_x20,&PTR_DAT_110651b38);
  }
  else {
    func_0x000104366fc4(param_2,param_3,*unaff_x20,&PTR_DAT_110651b38);
  }
  uVar4 = unaff_x20[0x12];
  plVar1 = unaff_x20 + 0xf;
  func_0x0001000a8868(plVar1,uVar4);
  lVar2 = unaff_x20[2];
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar3 = uVar4;
  if (lVar2 == 0) {
    func_0x000107c5faec();
    uVar3 = uVar4;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar4);
  }
  uVar4 = *(undefined8 *)(*plVar1 + 0x10);
  func_0x000103409370(param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar3);
  uVar3 = 0x6c616974696e69;
  func_0x000107c5fadc(0x6c616974696e69,0xe700000000000000);
  func_0x000106b9da20(uVar4,lVar2,param_1,uVar3,1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x0001034061e4();
  uVar3 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  func_0x000107c614f0(uVar3);
  auStack_a8[0] = 2;
  uStack_48 = 1;
  (**(code **)(lVar2 + 0x28))(auStack_a8,uVar3,lVar2);
  return;
}



/* Entry: 10340640c; end: 103406637;  */

void FUN_10340640c(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined1 auStack_48 [24];
  
  puVar4 = auStack_48;
  func_0x000107c61428(param_3 + 0x10,puVar4,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    return;
  }
  if ((*(byte *)(param_3 + 0xc0) & 1) != 0) {
LAB_103406500:
    func_0x000107c61574();
    return;
  }
  if (param_2 != 0) {
    uStack_58 = 0;
    puStack_50 = (undefined1 *)0xe000000000000000;
    func_0x000107c614b0(param_2);
    func_0x000107c602fc(0x16);
    func_0x000107c5fb78(0xd000000000000014,0x800000010f14b2e0);
    uVar3 = 0x112d393f0;
    lStack_60 = param_2;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&lStack_60,&uStack_58,uVar3,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    puVar4 = puStack_50;
    FUN_1034062b4(8,uStack_58,puStack_50,0);
    func_0x000107c6142c(puVar4);
    func_0x000107c614ac(param_2);
    goto LAB_103406500;
  }
  uVar6 = *(ulong *)(param_3 + 0x38);
  func_0x000107c3ef48();
  func_0x000107c61180();
  puVar5 = puVar4;
  if (uVar6 != 0) {
    uVar1 = uVar6;
    func_0x000107c5faec();
    puVar5 = puVar4;
    func_0x000107c61170(uVar6);
    uVar6 = uVar1 & 0xffffffffffff;
    if (((ulong)puVar4 & 0x2000000000000000) != 0) {
      uVar6 = (ulong)puVar4 >> 0x38 & 0xf;
    }
    if (uVar6 != 0) {
      FUN_103405b98(uVar1,puVar4);
      func_0x000107c61574(param_3);
      goto LAB_103406630;
    }
    func_0x000107c6142c(puVar4);
  }
  uStack_58 = 0;
  puStack_50 = (undefined1 *)0xe000000000000000;
  func_0x000107c602fc(0x2b);
  func_0x000107c6142c(puStack_50);
  uStack_58 = 0xd000000000000029;
  puStack_50 = (undefined1 *)0x800000010f14b2b0;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  func_0x000107c4b1dc(uVar2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x000107c5fb78(uVar3,puVar5);
  func_0x000107c6142c(puVar5);
  puVar4 = puStack_50;
  FUN_1034062b4(9,uStack_58,puStack_50,0);
  func_0x000107c61574(param_3);
LAB_103406630:
  func_0x000107c6142c(puVar4);
  return;
}



/* Entry: 103406638; end: 103406abf;  */

void FUN_103406638(ulong *param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  uVar3 = *param_1;
  puVar1 = (undefined1 *)param_1[1];
  uVar8 = param_1[2];
  puVar6 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar6,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  if (((((*(byte *)(param_2 + 0xc0) & 1) == 0) && (*(char *)(param_2 + 0xc1) == '\x01')) &&
      (uVar8 >> 0x3d == 0)) && ((uVar8 & 0xff) != 0)) {
    uVar2 = *(ulong *)(param_2 + 0x10);
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar8 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    if (uVar3 == uVar8 && puVar1 == puVar6) {
      func_0x000107c6142c(puVar6);
    }
    else {
      func_0x000107c605b8(uVar3,puVar1,uVar8,puVar6,0);
      func_0x000107c6142c(puVar6);
      if ((uVar3 & 1) == 0) goto LAB_103406718;
    }
    if ((*(byte *)(param_2 + 0xc2) & 1) == 0) {
      *(undefined1 *)(param_2 + 0xc2) = 1;
      uVar7 = *(undefined8 *)(param_2 + 0xa0);
      puVar4 = &UNK_110650f08;
      func_0x000107c613fc(&UNK_110650f08,0x18,7);
      func_0x000107c61644(puVar4 + 0x10,param_2);
      uStack_68 = 0x103406cb0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_110650f70;
      ppuVar5 = &puStack_88;
      puStack_60 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar4 = puStack_60;
      func_0x000107c615f0(uVar7);
      func_0x000107c61574(puVar4);
      func_0x000107c4e524(uVar7);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61574(param_2);
      func_0x000107c615e8(uVar7);
      return;
    }
  }
LAB_103406718:
  func_0x000107c61574();
  return;
}



/* Entry: 103406ac0; end: 103406bbf;  */

void FUN_103406ac0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [24];
  
  puVar3 = auStack_48;
  func_0x000107c61428(param_1 + 0x10,puVar3,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
      func_0x000107c602fc(0x1e);
      func_0x000107c6142c(0xe000000000000000);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      func_0x000107c4b1dc(uVar1);
      func_0x000107c61180();
      uVar2 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      func_0x000107c5fb78(uVar2,puVar3);
      func_0x000107c6142c(puVar3);
      FUN_1034062b4(0xb,0xd00000000000001c,0x800000010f14b220,0);
      func_0x000107c61574(param_1);
      func_0x000107c6142c(0x800000010f14b220);
    }
    else {
      func_0x000107c61574();
    }
  }
  return;
}



/* Entry: 103406bc0; end: 103406c73;  */

void FUN_103406bc0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61610(unaff_x20 + 0x28);
  func_0x000107c61610(unaff_x20 + 0x30);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x0001000834e4(unaff_x20 + 0x50);
  func_0x0001000834e4(unaff_x20 + 0x78);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xb0));
  return;
}



/* Entry: 103406c74; end: 103406cbf;  */

void FUN_103406c74(ulong *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  ulong uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  uVar4 = *param_1;
  puVar1 = (undefined1 *)param_1[1];
  uVar9 = param_1[2];
  puVar7 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar7,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    return;
  }
  if (((((*(byte *)(lVar2 + 0xc0) & 1) == 0) && (*(char *)(lVar2 + 0xc1) == '\x01')) &&
      (uVar9 >> 0x3d == 0)) && ((uVar9 & 0xff) != 0)) {
    uVar3 = *(ulong *)(lVar2 + 0x10);
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar9 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    if (uVar4 == uVar9 && puVar1 == puVar7) {
      func_0x000107c6142c(puVar7);
    }
    else {
      func_0x000107c605b8(uVar4,puVar1,uVar9,puVar7,0);
      func_0x000107c6142c(puVar7);
      if ((uVar4 & 1) == 0) goto LAB_103406718;
    }
    if ((*(byte *)(lVar2 + 0xc2) & 1) == 0) {
      *(undefined1 *)(lVar2 + 0xc2) = 1;
      uVar8 = *(undefined8 *)(lVar2 + 0xa0);
      puVar5 = &UNK_110650f08;
      func_0x000107c613fc(&UNK_110650f08,0x18,7);
      func_0x000107c61644(puVar5 + 0x10,lVar2);
      uStack_68 = 0x103406cb0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_110650f70;
      ppuVar6 = &puStack_88;
      puStack_60 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar5 = puStack_60;
      func_0x000107c615f0(uVar8);
      func_0x000107c61574(puVar5);
      func_0x000107c4e524(uVar8);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(uVar8);
      return;
    }
  }
LAB_103406718:
  func_0x000107c61574();
  return;
}



/* Entry: 103406cc0; end: 103406e23;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103406dbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x000103406dc0) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_103406cc0(void)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong unaff_x19;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar7 = *(ulong *)(unaff_x20 + 0x28);
  if (0xe < uVar7 >> 0x3c) {
    return;
  }
  uVar8 = *(ulong *)(unaff_x20 + 0x20);
  uVar5 = (uint)(uVar7 >> 0x20);
  if (uVar5 >> 0x1e < 2) {
    if (uVar5 >> 0x1e != 0) {
      if ((long)(int)uVar8 == (long)uVar8 >> 0x20) {
        return;
      }
      goto LAB_103406d48;
    }
    if ((uVar7 & 0xff000000000000) == 0) goto code_r0x0001000b44c0;
  }
  else {
    if (uVar5 >> 0x1e != 2) goto code_r0x0001000b44c0;
    if (*(long *)(uVar8 + 0x10) == *(long *)(uVar8 + 0x18)) {
      return;
    }
LAB_103406d48:
    func_0x000100de78a0(uVar8,uVar7);
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x10);
  uVar4 = *(ulong *)(unaff_x20 + 0x18);
  uVar2 = uVar3 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar2 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    lVar6 = *(long *)(unaff_x20 + 0x30);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      func_0x000107c5ee20(uVar8,uVar7);
      func_0x000107c5fadc(uVar3,uVar4);
      func_0x000107c5a8a0(lVar6);
      unaff_x30 = 0x103406dc0;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
      unaff_x19 = uVar7;
      unaff_x29 = puVar1;
    }
  }
code_r0x0001000b44c0:
  if (0xe < uVar7 >> 0x3c) {
    return;
  }
  if (uVar5 >> 0x1e == 1) {
    uVar8 = uVar7 & 0x3fffffffffffffff;
  }
  else {
    if (uVar5 >> 0x1e != 2) {
      return;
    }
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar8);
  return;
}



/* Entry: 103406e24; end: 103406ecf;  */

/* WARNING: Possible PIC construction at 0x000103406e7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103406e80) */

void FUN_103406e24(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c61434(lVar2);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5fadc(uVar1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 103406ed0; end: 103406f2b;  */

void FUN_103406ed0(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000b44c0(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103406f2c; end: 10340705b;  */

undefined8 FUN_103406f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long alStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x0001000d224c(alStack_88);
  lVar2 = lStack_68;
  uVar1 = uStack_70;
  func_0x0001000a8868(alStack_88,uStack_70);
  (**(code **)(lVar2 + 0xc0))(uVar1,lVar2);
  func_0x0001000834e4(alStack_88);
  func_0x0001000d224c(alStack_88);
  func_0x0001000a8868(alStack_88,uStack_70);
  (**(code **)(lStack_68 + 200))(uStack_70,lStack_68);
  func_0x0001000834e4(alStack_88);
  func_0x0001000d224c(alStack_88);
  if (alStack_88[0] != 0) {
    lVar2 = alStack_88[0];
    func_0x000107c43bac(alStack_88[0]);
    func_0x000107c61180();
    func_0x000107c615e8(alStack_88[0]);
    func_0x000107c5fc54(lVar2,PTR___sSSN_11034da80);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  return param_1;
}



/* Entry: 10340705c; end: 103407103;  */

uint FUN_10340705c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar1 = param_1;
  uVar3 = param_2;
  func_0x000107c4a63c();
  if ((uVar1 & 1) == 0) {
    func_0x000107c4f220();
    func_0x000107c61180();
    if (param_1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      uVar4 = 0;
      uVar1 = uVar2 & 0xffffffffffff;
      if ((uVar3 & 0x2000000000000000) != 0) {
        uVar1 = uVar3 >> 0x38 & 0xf;
      }
      if ((uVar1 != 0) && (param_2 != 0)) {
        func_0x000100077018(uVar2,uVar3,param_2);
        uVar4 = (uint)uVar2;
      }
      func_0x000107c6142c(uVar3);
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4 & 1;
}



/* Entry: 103407104; end: 10340719b;  */

long FUN_103407104(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10340719c; end: 103407207;  */

undefined8 * FUN_10340719c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103407208; end: 10340725b;  */

undefined8 * FUN_103407208(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10340725c; end: 1034072fb;  */

int FUN_10340725c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1034072fc; end: 103407347;  */

undefined8 * FUN_1034072fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 103407348; end: 103407383;  */

undefined8 * FUN_103407348(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 103407384; end: 10340741b;  */

int FUN_103407384(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10340741c; end: 1034074d3;  */

undefined8 FUN_10340741c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c44698(uStack_28,param_2,param_1);
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 1034074d4; end: 1034074db;  */

undefined8 * FUN_1034074d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 1034074dc; end: 1034075f3;  */

long FUN_1034074dc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1034075f4; end: 103407697;  */

int FUN_1034075f4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103407698; end: 10340792f;  */

uint FUN_103407698(ulong param_1)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_58 [24];
  
  func_0x0001000a8868();
  uVar2 = param_1;
  FUN_10340741c(param_1,&UNK_1106510b0,&PTR_DAT_1106510c8);
  if ((uVar2 & 1) == 0) {
    func_0x0001000a8868();
    uVar2 = param_1;
    (*(code *)(undefined *)0x10340746c)(param_1,&UNK_1106510b0,&PTR_DAT_1106510c8);
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
      goto LAB_103407914;
    }
    lVar7 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c61428(lVar7 + 0x38,auStack_58,0,0);
    lVar6 = *(long *)(lVar7 + 0x38);
    if (lVar6 == 0) {
      func_0x000107c602fc(0x4d);
      uVar4 = 0x800000010f14b300;
      func_0x000107c5fb78(0xd000000000000012,0x800000010f14b300);
      func_0x000107c4b1dc(param_1);
      func_0x000107c61180();
      uVar2 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c5fb78(uVar2,uVar4);
      func_0x000107c6142c(uVar4);
      pcVar1 = s_but_freeplay_upsell_presenter_no_10f14b340;
      uVar4 = 0x1000000000000039;
      goto LAB_1034078dc;
    }
    lVar7 = *(long *)(lVar7 + 0x40);
  }
  else {
    lVar7 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c61428(lVar7 + 0x28,auStack_58,0,0);
    lVar6 = *(long *)(lVar7 + 0x28);
    if (lVar6 == 0) {
      func_0x000107c602fc(0x48);
      uVar4 = 0x800000010f14b300;
      func_0x000107c5fb78(0xd000000000000012,0x800000010f14b300);
      func_0x000107c4b1dc(param_1);
      func_0x000107c61180();
      uVar2 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c5fb78(uVar2,uVar4);
      func_0x000107c6142c(uVar4);
      pcVar1 = s_but_API_upsell_presenter_not_wir_10f14b380;
      uVar4 = 0x1000000000000034;
LAB_1034078dc:
      func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
      func_0x0001007d6c8c(2,0,0xe000000000000000,0,&UNK_110651148,&PTR_DAT_110651160);
      func_0x000107c6142c(0xe000000000000000);
      uVar5 = 1;
      goto LAB_103407914;
    }
    lVar7 = *(long *)(lVar7 + 0x30);
  }
  lVar3 = lVar6;
  func_0x000107c614f0(lVar6);
  pcVar8 = *(code **)(lVar7 + 8);
  func_0x000107c615f0(lVar6);
  (*pcVar8)(param_1,lVar3,lVar7);
  uVar5 = (uint)param_1;
  func_0x000107c615e8(lVar6);
LAB_103407914:
  return uVar5 & 1;
}



/* Entry: 103407930; end: 10340794b;  */

void FUN_103407930(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000103407940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 10340794c; end: 103407c0b;  */

void FUN_10340794c(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar9 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0(uVar7);
  (**(code **)(lVar9 + 8))();
  plVar10 = *(long **)(unaff_x20 + 0x60);
  plVar1 = plVar10;
  func_0x000107c615f4(plVar10,2);
  func_0x000100471e0c();
  func_0x000107c61574(uVar7);
  puVar5 = &UNK_1106511c8;
  puVar2 = puVar5;
  func_0x000107c613fc(&UNK_1106511c8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uVar7 = 0x1034092f8;
  puVar3 = puVar2;
  (**(code **)(*plVar1 + 0x60))(0x1034092f8);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c614f0(uVar7);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x68);
  pcVar12 = *(code **)(puVar3 + 0x10);
  func_0x000107c6157c(uVar11);
  (*pcVar12)();
  func_0x000107c615e8(uVar7);
  func_0x000107c61574(uVar11);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar7 = uVar8;
  func_0x000107c5e370();
  func_0x000107c61180();
  uVar11 = uVar7;
  func_0x000107c4da88();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c615e8(plVar10);
  puVar3 = puVar5;
  func_0x000107c613fc(&UNK_1106511c8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x103409300;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100c1de60;
  puStack_88 = &UNK_1106512a8;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar7 = uVar11;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x88) = uVar7;
  func_0x000107c61170(uVar11);
  func_0x000107c41b80();
  func_0x000107c61180();
  uVar7 = uVar8;
  func_0x000107c4da88();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c615e8(plVar10);
  func_0x000107c613fc(&UNK_1106511c8,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  uStack_80 = 0x103409308;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100c1de60;
  puStack_88 = &UNK_1106512d0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar11 = uVar7;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x90) = uVar11;
  func_0x000107c61170(uVar7);
  return;
}



/* Entry: 103407c0c; end: 103407cbb;  */

void FUN_103407c0c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar2;
  func_0x000107c61574(uVar3);
  uVar2 = 0;
  if (*(long *)(unaff_x20 + 0x88) != 0) {
    func_0x000107c4218c();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
  }
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  func_0x000107c61170(uVar2);
  uVar2 = 0;
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    func_0x000107c4218c();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
  }
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  func_0x000107c61170(uVar2);
  func_0x0001034085ac();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  func_0x000107c6142c(uVar2);
  lVar1 = *(long *)(unaff_x20 + 0x50);
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x48));
  (**(code **)(lVar1 + 0x18))();
  return;
}



/* Entry: 103407cbc; end: 103407d87;  */

void FUN_103407cbc(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x88) != 0) {
    func_0x000107c4218c();
  }
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    func_0x000107c4218c();
  }
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x20);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa8));
  return;
}



/* Entry: 103407d88; end: 103407dff;  */

void FUN_103407d88(undefined8 *param_1,long param_2)

{
  undefined1 auStack_a8 [24];
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
  
  uStack_48 = param_1[9];
  uStack_50 = param_1[8];
  uStack_38 = param_1[0xb];
  uStack_40 = param_1[10];
  uStack_30 = param_1[0xc];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  func_0x000107c61428(param_2 + 0x10,auStack_a8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_103407e00(&uStack_90);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103407e00; end: 103407ef7;  */

void FUN_103407e00(ulong *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  ulong uStack_70;
  long lStack_68;
  
  uVar9 = (uint)(param_1[2] >> 0x3d);
  if (uVar9 - 2 < 5) {
    uVar2 = unaff_x20[0xe];
    unaff_x20[0xe] = 0;
    func_0x000107c61170(uVar2);
    func_0x0001034085ac();
    uVar2 = unaff_x20[0x10];
    unaff_x20[0xf] = 0;
    unaff_x20[0x10] = 0;
LAB_103407e3c:
    func_0x000107c6142c(uVar2);
    lVar7 = unaff_x20[10];
    func_0x000107c614f0(unaff_x20[9]);
    (**(code **)(lVar7 + 0x18))();
    return;
  }
  uVar10 = *param_1;
  if (uVar9 == 0) {
    uVar11 = param_1[1];
    uVar2 = unaff_x20[0xe];
    unaff_x20[0xe] = 0;
    func_0x000107c61170(uVar2);
    func_0x0001034085ac();
    uVar4 = unaff_x20[0xf];
    uVar12 = unaff_x20[0x10];
    if (uVar12 == 0) {
      return;
    }
    if ((uVar4 == uVar10) && (uVar12 == uVar11)) {
      return;
    }
    func_0x000107c605b8(uVar4,uVar12,uVar10,uVar11,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    func_0x0001034085ac();
    uVar2 = unaff_x20[0x10];
    unaff_x20[0xf] = 0;
    unaff_x20[0x10] = 0;
    goto LAB_103407e3c;
  }
  uVar2 = unaff_x20[0xe];
  unaff_x20[0xe] = uVar10;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  uVar2 = *unaff_x20;
  lVar7 = unaff_x20[7];
  func_0x0001000a8868();
  func_0x0001000d224c(&uStack_70);
  uVar4 = uStack_70;
  uVar12 = uStack_70;
  func_0x000107c4233c();
  func_0x000107c615e8(uVar4);
  if ((uVar12 & 1) == 0) {
    func_0x0001000d224c(&uStack_70);
    uVar4 = uStack_70;
    uVar12 = uStack_70;
    func_0x000107c49f94();
    func_0x000107c615e8(uVar4);
  }
  else {
    uVar12 = 0;
  }
  uVar4 = unaff_x20[0xf];
  lVar1 = unaff_x20[0x10];
  lVar6 = lVar7;
  if (lVar1 == 0) {
LAB_1034080c8:
    lVar7 = unaff_x20[0x15];
    if (lVar7 != 0) {
      uVar13 = unaff_x20[0x14];
      func_0x000107c61434(lVar7);
      uVar4 = uVar10;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar11 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      if ((uVar13 == uVar11) && (lVar7 == lVar6)) {
        func_0x000107c6142c(lVar7);
        func_0x000107c6142c(lVar6);
      }
      else {
        func_0x000107c605b8(uVar13,lVar7,uVar11,lVar6,0);
        func_0x000107c6142c(lVar7);
        func_0x000107c6142c(lVar6);
        if ((uVar13 & 1) == 0) {
          func_0x0001034085ac();
        }
      }
    }
  }
  else {
    func_0x000107c61434(lVar1);
    uVar11 = uVar10;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar13 = uVar11;
    func_0x000107c5faec();
    lVar6 = lVar7;
    func_0x000107c61170(uVar11);
    if ((uVar4 == uVar13) && (lVar1 == lVar7)) {
      func_0x000107c6142c(lVar1);
      func_0x000107c6142c(lVar7);
      if ((uVar12 & 1) != 0) goto LAB_1034080c8;
    }
    else {
      lVar6 = lVar1;
      func_0x000107c605b8(uVar4,lVar1,uVar13,lVar7,0);
      func_0x000107c6142c(lVar1);
      func_0x000107c6142c(lVar7);
      if (((uint)uVar4 & (uint)uVar12 & 1) != 0) goto LAB_1034080c8;
    }
    func_0x0001034085ac();
    uVar3 = unaff_x20[0x10];
    unaff_x20[0xf] = 0;
    unaff_x20[0x10] = 0;
    func_0x000107c6142c(uVar3);
    lVar7 = unaff_x20[10];
    func_0x000107c614f0(unaff_x20[9]);
    (**(code **)(lVar7 + 0x18))();
  }
  puVar5 = unaff_x20 + 4;
  func_0x0001000a8868(puVar5,unaff_x20[7]);
  if (*(char *)(puVar5 + 1) != '\x01') {
    func_0x0001007d6c6c(1,0xd00000000000002b,0x800000010f14b3a0,uVar2,&PTR_DAT_110651188);
    return;
  }
  puVar5 = unaff_x20 + 4;
  func_0x0001000a8868(puVar5,unaff_x20[7]);
  lVar7 = puVar5[3];
  uVar4 = uVar10;
  FUN_10340705c();
  if ((uVar4 & 1) == 0) {
    uStack_70 = 0;
    lStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x2b);
    func_0x000107c6142c(lStack_68);
    uStack_70 = 0x656c203a70696b73;
    lStack_68 = -0x14ffffffffdf8c92;
    func_0x000107c4b1dc(uVar10);
    func_0x000107c61180();
    uVar4 = uVar10;
    func_0x000107c5faec();
    func_0x000107c61170(uVar10);
    func_0x000107c5fb78(uVar4,lVar7);
    func_0x000107c6142c(lVar7);
    uVar3 = 0xd00000000000001e;
    uVar8 = 0x800000010f14b3d0;
  }
  else {
    uVar4 = unaff_x20[0xf];
    lVar1 = unaff_x20[0x10];
    func_0x000107c61434(lVar1);
    uVar11 = uVar10;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar13 = uVar11;
    func_0x000107c5faec();
    lVar6 = lVar7;
    func_0x000107c61170(uVar11);
    if (lVar1 == 0) {
      func_0x000107c6142c(lVar7);
      if ((uVar12 & 1) != 0) {
LAB_103408490:
        if (unaff_x20[0x13] == 0) {
LAB_10340852c:
          puVar5 = unaff_x20 + 4;
          func_0x0001000a8868(puVar5,unaff_x20[7]);
          dVar14 = (double)puVar5[2];
          if (dVar14 < 0.0) {
            dVar14 = 0.0;
          }
          FUN_103408600(dVar14,uVar10);
          return;
        }
        uVar4 = unaff_x20[0x14];
        lVar7 = unaff_x20[0x15];
        func_0x000107c61434(lVar7);
        uVar12 = uVar10;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar11 = uVar12;
        func_0x000107c5faec();
        func_0x000107c61170(uVar12);
        if (lVar7 == 0) {
          func_0x000107c6142c(lVar6);
          goto LAB_10340852c;
        }
        if ((uVar4 != uVar11) || (lVar7 != lVar6)) {
          func_0x000107c605b8(uVar4,lVar7,uVar11,lVar6,0);
          func_0x000107c6142c(lVar7);
          func_0x000107c6142c(lVar6);
          if ((uVar4 & 1) != 0) {
            return;
          }
          goto LAB_10340852c;
        }
        func_0x000107c6142c(lVar7);
        goto LAB_10340846c;
      }
    }
    else if ((uVar4 == uVar13) && (lVar1 == lVar7)) {
      func_0x000107c6142c(lVar1);
      func_0x000107c6142c(lVar7);
      if ((uVar12 & 1) != 0) {
LAB_10340830c:
        uStack_70 = 0;
        lStack_68 = -0x2000000000000000;
        func_0x000107c602fc(0x3e);
        uVar3 = 0x800000010f14b3f0;
        func_0x000107c5fb78(0xd00000000000001c,0x800000010f14b3f0);
        func_0x000107c4b1dc(uVar10);
        func_0x000107c61180();
        uVar4 = uVar10;
        func_0x000107c5faec();
        func_0x000107c61170(uVar10);
        func_0x000107c5fb78(uVar4,uVar3);
        func_0x000107c6142c(uVar3);
        uVar8 = 0x800000010f14b410;
        uVar3 = 0x1000000000000020;
        goto LAB_103408444;
      }
    }
    else {
      lVar6 = lVar1;
      func_0x000107c605b8(uVar4,lVar1,uVar13,lVar7,0);
      func_0x000107c6142c(lVar1);
      func_0x000107c6142c(lVar7);
      if ((uVar12 & 1) != 0) {
        if ((uVar4 & 1) == 0) goto LAB_103408490;
        goto LAB_10340830c;
      }
    }
    uStack_70 = 0;
    lStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x18);
    func_0x000107c6142c(lStack_68);
    uStack_70 = 0x656c203a70696b73;
    lStack_68 = -0x14ffffffffdf8c92;
    func_0x000107c4b1dc(uVar10);
    func_0x000107c61180();
    uVar4 = uVar10;
    func_0x000107c5faec();
    func_0x000107c61170(uVar10);
    func_0x000107c5fb78(uVar4,lVar6);
    func_0x000107c6142c(lVar6);
    uVar3 = 0x636f6c20746f6e20;
    uVar8 = 0xeb0000000064656b;
  }
LAB_103408444:
  func_0x000107c5fb78(uVar3,uVar8);
  lVar6 = lStack_68;
  func_0x0001007d6c6c(1,uStack_70,lStack_68,uVar2,&PTR_DAT_110651188);
LAB_10340846c:
  func_0x000107c6142c(lVar6);
  return;
}



/* Entry: 103407ef8; end: 103407f6f;  */

void FUN_103407ef8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0x70);
    if (lVar1 == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      func_0x000107c61174();
      FUN_103407f70();
      func_0x000107c61574(param_2);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 103407f70; end: 103408557;  */

void FUN_103407f70(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  ulong uStack_70;
  long lStack_68;
  
  uVar9 = *unaff_x20;
  lVar7 = unaff_x20[7];
  func_0x0001000a8868();
  func_0x0001000d224c(&uStack_70);
  uVar4 = uStack_70;
  uVar10 = uStack_70;
  func_0x000107c4233c();
  func_0x000107c615e8(uVar4);
  if ((uVar10 & 1) == 0) {
    func_0x0001000d224c(&uStack_70);
    uVar4 = uStack_70;
    uVar10 = uStack_70;
    func_0x000107c49f94();
    func_0x000107c615e8(uVar4);
  }
  else {
    uVar10 = 0;
  }
  uVar4 = unaff_x20[0xf];
  lVar1 = unaff_x20[0x10];
  lVar6 = lVar7;
  if (lVar1 == 0) {
LAB_1034080c8:
    lVar7 = unaff_x20[0x15];
    if (lVar7 != 0) {
      uVar11 = unaff_x20[0x14];
      func_0x000107c61434(lVar7);
      uVar4 = param_1;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar2 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      if ((uVar11 == uVar2) && (lVar7 == lVar6)) {
        func_0x000107c6142c(lVar7);
        func_0x000107c6142c(lVar6);
      }
      else {
        func_0x000107c605b8(uVar11,lVar7,uVar2,lVar6,0);
        func_0x000107c6142c(lVar7);
        func_0x000107c6142c(lVar6);
        if ((uVar11 & 1) == 0) {
          func_0x0001034085ac();
        }
      }
    }
  }
  else {
    func_0x000107c61434(lVar1);
    uVar2 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar11 = uVar2;
    func_0x000107c5faec();
    lVar6 = lVar7;
    func_0x000107c61170(uVar2);
    if ((uVar4 == uVar11) && (lVar1 == lVar7)) {
      func_0x000107c6142c(lVar1);
      func_0x000107c6142c(lVar7);
      if ((uVar10 & 1) != 0) goto LAB_1034080c8;
    }
    else {
      lVar6 = lVar1;
      func_0x000107c605b8(uVar4,lVar1,uVar11,lVar7,0);
      func_0x000107c6142c(lVar1);
      func_0x000107c6142c(lVar7);
      if (((uint)uVar4 & (uint)uVar10 & 1) != 0) goto LAB_1034080c8;
    }
    func_0x0001034085ac();
    uVar3 = unaff_x20[0x10];
    unaff_x20[0xf] = 0;
    unaff_x20[0x10] = 0;
    func_0x000107c6142c(uVar3);
    lVar7 = unaff_x20[10];
    func_0x000107c614f0(unaff_x20[9]);
    (**(code **)(lVar7 + 0x18))();
  }
  puVar5 = unaff_x20 + 4;
  func_0x0001000a8868(puVar5,unaff_x20[7]);
  if (*(char *)(puVar5 + 1) != '\x01') {
    func_0x0001007d6c6c(1,0xd00000000000002b,0x800000010f14b3a0,uVar9,&PTR_DAT_110651188);
    return;
  }
  puVar5 = unaff_x20 + 4;
  func_0x0001000a8868(puVar5,unaff_x20[7]);
  lVar7 = puVar5[3];
  uVar4 = param_1;
  FUN_10340705c();
  if ((uVar4 & 1) == 0) {
    uStack_70 = 0;
    lStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x2b);
    func_0x000107c6142c(lStack_68);
    uStack_70 = 0x656c203a70696b73;
    lStack_68 = -0x14ffffffffdf8c92;
    func_0x000107c4b1dc(param_1);
    func_0x000107c61180();
    uVar4 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c5fb78(uVar4,lVar7);
    func_0x000107c6142c(lVar7);
    uVar3 = 0xd00000000000001e;
    uVar8 = 0x800000010f14b3d0;
  }
  else {
    uVar4 = unaff_x20[0xf];
    lVar1 = unaff_x20[0x10];
    func_0x000107c61434(lVar1);
    uVar2 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar11 = uVar2;
    func_0x000107c5faec();
    lVar6 = lVar7;
    func_0x000107c61170(uVar2);
    if (lVar1 == 0) {
      func_0x000107c6142c(lVar7);
      if ((uVar10 & 1) != 0) {
LAB_103408490:
        if (unaff_x20[0x13] == 0) {
LAB_10340852c:
          puVar5 = unaff_x20 + 4;
          func_0x0001000a8868(puVar5,unaff_x20[7]);
          dVar12 = (double)puVar5[2];
          if (dVar12 < 0.0) {
            dVar12 = 0.0;
          }
          FUN_103408600(dVar12,param_1);
          return;
        }
        uVar4 = unaff_x20[0x14];
        lVar7 = unaff_x20[0x15];
        func_0x000107c61434(lVar7);
        uVar10 = param_1;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar2 = uVar10;
        func_0x000107c5faec();
        func_0x000107c61170(uVar10);
        if (lVar7 == 0) {
          func_0x000107c6142c(lVar6);
          goto LAB_10340852c;
        }
        if ((uVar4 != uVar2) || (lVar7 != lVar6)) {
          func_0x000107c605b8(uVar4,lVar7,uVar2,lVar6,0);
          func_0x000107c6142c(lVar7);
          func_0x000107c6142c(lVar6);
          if ((uVar4 & 1) != 0) {
            return;
          }
          goto LAB_10340852c;
        }
        func_0x000107c6142c(lVar7);
        goto LAB_10340846c;
      }
    }
    else if ((uVar4 == uVar11) && (lVar1 == lVar7)) {
      func_0x000107c6142c(lVar1);
      func_0x000107c6142c(lVar7);
      if ((uVar10 & 1) != 0) {
LAB_10340830c:
        uStack_70 = 0;
        lStack_68 = -0x2000000000000000;
        func_0x000107c602fc(0x3e);
        uVar3 = 0x800000010f14b3f0;
        func_0x000107c5fb78(0xd00000000000001c,0x800000010f14b3f0);
        func_0x000107c4b1dc(param_1);
        func_0x000107c61180();
        uVar4 = param_1;
        func_0x000107c5faec();
        func_0x000107c61170(param_1);
        func_0x000107c5fb78(uVar4,uVar3);
        func_0x000107c6142c(uVar3);
        uVar8 = 0x800000010f14b410;
        uVar3 = 0x1000000000000020;
        goto LAB_103408444;
      }
    }
    else {
      lVar6 = lVar1;
      func_0x000107c605b8(uVar4,lVar1,uVar11,lVar7,0);
      func_0x000107c6142c(lVar1);
      func_0x000107c6142c(lVar7);
      if ((uVar10 & 1) != 0) {
        if ((uVar4 & 1) == 0) goto LAB_103408490;
        goto LAB_10340830c;
      }
    }
    uStack_70 = 0;
    lStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x18);
    func_0x000107c6142c(lStack_68);
    uStack_70 = 0x656c203a70696b73;
    lStack_68 = -0x14ffffffffdf8c92;
    func_0x000107c4b1dc(param_1);
    func_0x000107c61180();
    uVar4 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c5fb78(uVar4,lVar6);
    func_0x000107c6142c(lVar6);
    uVar3 = 0x636f6c20746f6e20;
    uVar8 = 0xeb0000000064656b;
  }
LAB_103408444:
  func_0x000107c5fb78(uVar3,uVar8);
  lVar6 = lStack_68;
  func_0x0001007d6c6c(1,uStack_70,lStack_68,uVar9,&PTR_DAT_110651188);
LAB_10340846c:
  func_0x000107c6142c(lVar6);
  return;
}



/* Entry: 103408558; end: 1034085ff;  */

void FUN_103408558(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x0001034085ac();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103408600; end: 10340885b;  */

void FUN_103408600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar9 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001034085ac();
  uVar4 = param_2;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar3 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar3;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_3;
  func_0x000107c6142c(uVar4);
  puVar5 = &UNK_1106511c8;
  func_0x000107c613fc(&UNK_1106511c8,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar6 = &UNK_110651308;
  func_0x000107c613fc(&UNK_110651308,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = param_2;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10340933c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110651320;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuVar8 = ppuVar7;
  func_0x0001001c7eec();
  func_0x000107c6157c(puVar5);
  func_0x000107c61174(param_2);
  uVar4 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar3 = uVar4;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar9,&puStack_a8,uVar4,uVar3,lVar2,ppuVar8);
  func_0x000107c5f850();
  func_0x000107c613fc();
  func_0x000107c5f844(puVar9,ppuVar7);
  puVar6 = puStack_78;
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined1 **)(unaff_x20 + 0x98) = puVar9;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  pcStack_80 = (code *)0x103409344;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110651348;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar9;
  func_0x000107c60bc4(ppuVar8);
  puVar5 = puStack_78;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar5);
  func_0x000107c4e528(param_1,uVar4);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(puVar9);
  return;
}



/* Entry: 10340885c; end: 1034088cf;  */

void FUN_10340885c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
    func_0x000107c61574(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    func_0x000107c6142c(uVar1);
    FUN_1034088d0(param_2);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1034088d0; end: 103408d03;  */

void FUN_1034088d0(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uVar9 = *unaff_x20;
  uVar6 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar5 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61170(uVar6);
  lVar8 = unaff_x20[0x10];
  if (lVar8 == 0) {
    uVar6 = 0;
    uVar10 = unaff_x20[0xe];
  }
  else {
    uVar6 = unaff_x20[0xf];
    if (uVar6 == uVar5 && lVar8 == param_2) {
      uVar6 = 1;
      uVar10 = unaff_x20[0xe];
    }
    else {
      func_0x000107c605b8(uVar6,lVar8,uVar5,param_2,0);
      uVar10 = unaff_x20[0xe];
    }
  }
  if (uVar10 == 0) {
    uVar13 = 0;
  }
  else {
    func_0x000107c61434(param_2);
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar13 = uVar10;
    func_0x000107c5faec();
    func_0x000107c61170(uVar10);
    if ((uVar13 == uVar5) && (lVar8 == param_2)) {
      uVar13 = 1;
    }
    else {
      func_0x000107c605b8(uVar13,lVar8,uVar5,param_2,0);
    }
    func_0x000107c6142c(lVar8);
    func_0x000107c6142c(param_2);
  }
  func_0x0001000a8868(unaff_x20 + 4,unaff_x20[7]);
  func_0x0001000d224c(&uStack_70);
  uVar10 = uStack_70;
  uVar7 = uStack_70;
  func_0x000107c4233c();
  func_0x000107c615e8(uVar10);
  if ((uVar7 & 1) == 0) {
    func_0x0001000d224c(&uStack_70);
    uVar10 = uStack_70;
    func_0x000107c49f94();
    func_0x000107c615e8(uStack_70);
    uVar3 = (uint)uVar6 | (uint)uVar13 ^ 1;
    uVar14 = uVar3 & (uint)uVar10;
    if (((uVar3 & 1) == 0) && ((uVar10 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      func_0x000103408c00(param_1);
      return;
    }
  }
  else {
    uVar14 = 0;
  }
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x3d);
  func_0x000107c5fb78(0x6572702070696b73,0xed000020746e6573);
  func_0x000107c5fb78(uVar5,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f14b440);
  bVar4 = (uVar6 & 1) == 0;
  uVar11 = 0x65757274;
  uVar12 = 0x65736c6166;
  uVar2 = uVar11;
  if (bVar4) {
    uVar2 = uVar12;
  }
  uVar1 = 0xe400000000000000;
  if (bVar4) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0x63416c6c69747320,0xed00003d65766974);
  bVar4 = (uVar13 & 1) == 0;
  uVar2 = uVar11;
  if (bVar4) {
    uVar2 = uVar12;
  }
  uVar1 = 0xe400000000000000;
  if (bVar4) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0x3d64656b636f6c20,0xe800000000000000);
  bVar4 = (uVar14 & 1) == 0;
  if (bVar4) {
    uVar11 = uVar12;
  }
  uVar2 = 0xe400000000000000;
  if (bVar4) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar11,uVar2);
  func_0x000107c6142c(uVar2);
  uVar2 = uStack_68;
  func_0x0001007d6c6c(1,uStack_70,uStack_68,uVar9,&PTR_DAT_110651188);
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103408d04; end: 103408ddb;  */

void FUN_103408d04(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  puVar1 = &UNK_1106511c8;
  func_0x000107c613fc(&UNK_1106511c8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_1106511f0;
  func_0x000107c613fc(&UNK_1106511f0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  uStack_40 = 0x103409280;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110651208;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103408ddc; end: 103409033;  */

void FUN_103408ddc(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uStack_70;
  undefined1 auStack_68 [24];
  
  puVar3 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar3,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x78);
  puVar5 = *(undefined1 **)(param_1 + 0x80);
  func_0x000107c61434(puVar5);
  uVar7 = param_2;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar1 = uVar7;
  func_0x000107c5faec();
  puVar4 = puVar3;
  func_0x000107c61170(uVar7);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c6142c(puVar3);
LAB_103408ff4:
    func_0x000107c61574(param_1);
  }
  else {
    if ((uVar2 == uVar1) && (puVar5 == puVar3)) {
      func_0x000107c6142c(puVar5);
      func_0x000107c6142c(puVar3);
    }
    else {
      puVar4 = puVar5;
      func_0x000107c605b8(uVar2,puVar5,uVar1,puVar3,0);
      func_0x000107c6142c(puVar5);
      func_0x000107c6142c(puVar3);
      if ((uVar2 & 1) == 0) goto LAB_103408ff4;
    }
    uVar2 = *(ulong *)(param_1 + 0x70);
    if (uVar2 == 0) {
      uVar7 = 0;
      puVar5 = (undefined1 *)0x0;
      puVar3 = puVar4;
    }
    else {
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar7 = uVar2;
      func_0x000107c5faec();
      puVar3 = puVar4;
      func_0x000107c61170(uVar2);
      puVar5 = puVar4;
    }
    uVar2 = param_2;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar1 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    if (puVar5 == (undefined1 *)0x0) {
      func_0x000107c6142c(puVar3);
    }
    else {
      if ((uVar7 == uVar1) && (puVar5 == puVar3)) {
        func_0x000107c6142c(puVar5);
        func_0x000107c6142c(puVar3);
      }
      else {
        func_0x000107c605b8(uVar7,puVar5,uVar1,puVar3,0);
        func_0x000107c6142c(puVar5);
        func_0x000107c6142c(puVar3);
        if ((uVar7 & 1) == 0) goto LAB_103409000;
      }
      func_0x0001000a8868(param_1 + 0x20,*(undefined8 *)(param_1 + 0x38));
      func_0x0001000d224c(&uStack_70);
      uVar2 = uStack_70;
      uVar7 = uStack_70;
      func_0x000107c4233c();
      func_0x000107c615e8(uVar2);
      if ((uVar7 & 1) == 0) {
        func_0x0001000d224c(&uStack_70);
        uVar2 = uStack_70;
        func_0x000107c49f94();
        func_0x000107c615e8(uStack_70);
        if ((int)uVar2 != 0) {
          func_0x000103408c00(param_2);
          goto LAB_103408ff4;
        }
      }
    }
LAB_103409000:
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    *(ulong *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    func_0x000107c61574(param_1);
    func_0x000107c6142c(uVar6);
  }
  return;
}



/* Entry: 103409034; end: 103409257;  */

void FUN_103409034(undefined1 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  ppuVar4 = &puStack_a0;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x60);
    func_0x000107c615f0(uVar5);
    func_0x000107c61574(lVar1);
    puVar2 = &UNK_1106511c8;
    func_0x000107c613fc(&UNK_1106511c8,0x18,7);
    func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648(param_2);
    func_0x000107c61644(puVar2 + 0x10,param_2);
    func_0x000107c61574(param_2);
    puVar3 = &UNK_110651268;
    func_0x000107c613fc(&UNK_110651268,0x29,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    *(undefined8 *)(puVar3 + 0x20) = param_4;
    puVar3[0x28] = param_1;
    pcStack_80 = FUN_1034092e8;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_110651280;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    puVar2 = puStack_78;
    func_0x000107c61434(param_4);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 103409258; end: 1034092af;  */

void FUN_103409258(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000103409268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1034092b0; end: 1034092e7;  */

void FUN_1034092b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1034092e8; end: 10340930f;  */

void FUN_1034092e8(void)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  bVar3 = *(byte *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    uVar5 = *(ulong *)(lVar4 + 0x78);
    lVar1 = *(long *)(lVar4 + 0x80);
    if (((lVar1 == 0) ||
        (((uVar5 != uVar2 || lVar1 != lVar6 &&
          (func_0x000107c605b8(uVar5,lVar1,uVar2,lVar6,0), (uVar5 & 1) == 0)) || (-1 < (char)bVar3))
        )) || ((bVar3 & 0x7f) == 1)) {
      func_0x000107c61574();
    }
    else {
      *(ulong *)(lVar4 + 0x78) = 0;
      *(undefined8 *)(lVar4 + 0x80) = 0;
      func_0x000107c61574();
      func_0x000107c6142c(lVar1);
    }
  }
  return;
}



/* Entry: 103409310; end: 10340933b;  */

void FUN_103409310(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10340933c; end: 1034094fb;  */

void FUN_10340933c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x98);
    *(undefined8 *)(lVar2 + 0x98) = 0;
    func_0x000107c61574(uVar3);
    uVar3 = *(undefined8 *)(lVar2 + 0xa8);
    *(undefined8 *)(lVar2 + 0xa0) = 0;
    *(undefined8 *)(lVar2 + 0xa8) = 0;
    func_0x000107c6142c(uVar3);
    FUN_1034088d0(uVar1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1034094fc; end: 10340953f;  */

void FUN_1034094fc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103409540; end: 103409797;  */

uint FUN_103409540(ulong param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uStack_58 = param_1;
  func_0x000107c614b0();
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar2 = &uStack_68;
  func_0x000107c6147c(puVar2,&uStack_58,uVar1,&UNK_1107ac098,6);
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = param_1;
    uStack_68 = param_1;
    func_0x000107c614b0();
    func_0x000107c6147c();
    if ((uVar3 & 1) == 0) {
      func_0x000107c614cc(param_1,auStack_70,auStack_88);
      FUN_10340e678(uStack_80,uStack_78);
      if ((uStack_80 & 1) == 0) {
        func_0x000107c614cc(param_1,auStack_90,auStack_a8);
        uVar3 = 0;
        func_0x00010340e8e4(0xd000000000000022,0x800000010f14b540,uStack_a0,uStack_98);
        if ((uVar3 & 1) == 0) {
          func_0x000107c614cc(param_1,auStack_b0,auStack_c8);
          uVar3 = 0;
          func_0x00010340e8e4(0xd000000000000022,0x800000010f14b570,uStack_c0,uStack_b8);
          if ((uVar3 & 1) == 0) {
            puVar4 = auStack_d0;
            func_0x000107c614cc(param_1,puVar4,auStack_e8);
            uVar3 = *(ulong *)PTR__NSURLErrorDomain_110345620;
            func_0x000107c5faec();
            func_0x00010340e8e4();
            func_0x000107c6142c(puVar4);
            if ((uVar3 & 1) == 0) {
              func_0x000107c614cc(param_1,auStack_f0,auStack_108);
              uVar3 = 0xd000000000000017;
              func_0x00010340e8e4(0xd000000000000017,0x800000010f14b5a0,uStack_100,uStack_f8);
              func_0x000107c614ac(param_1);
              uVar5 = 7;
              if ((uVar3 & 1) == 0) {
                uVar5 = 0xc;
              }
            }
            else {
              func_0x000107c614ac(param_1);
              uVar5 = 7;
            }
          }
          else {
            func_0x000107c614ac(param_1);
            uVar5 = 6;
          }
        }
        else {
          func_0x000107c614ac(param_1);
          uVar5 = 5;
        }
      }
      else {
        func_0x000107c614ac(param_1);
        uVar5 = 3;
      }
    }
    else {
      func_0x000107c614ac(param_1);
      uVar5 = 1;
    }
  }
  else {
    func_0x000107c614ac(param_1);
    if (uStack_60 < 4) {
      uVar5 = 0x2040404 >> (ulong)(((uint)uStack_60 & 3) << 3);
    }
    else {
      func_0x000101d70adc(uStack_68);
      uVar5 = 4;
    }
  }
  return uVar5;
}



/* Entry: 103409798; end: 10340993b;  */

void FUN_103409798(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  func_0x000103409830(1);
  lVar3 = *(long *)(unaff_x20 + 0xb8);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0xc0);
    lVar1 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar5 = *(code **)(lVar4 + 0x40);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar1,lVar4);
    func_0x000107c615e8(lVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xb8);
  }
  *(long *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  func_0x000107c615e8(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10340993c; end: 103409c6b;  */

void FUN_10340993c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  code *pcVar14;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  lVar13 = *(long *)(unaff_x20 + 0x10);
  lVar1 = lVar13;
  func_0x000107c3cfa8();
  func_0x000107c61180();
  lVar2 = lVar13;
  func_0x000107c3cfa4();
  func_0x000107c61180();
  lVar3 = lVar1;
  lVar9 = lVar2;
  func_0x00010434c30c(lVar1,lVar2,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined1 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),0,0);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
  lVar1 = lVar3;
  func_0x000107c614f0(lVar3);
  (**(code **)(lVar9 + 0x38))();
  (**(code **)(lVar9 + 0x48))(1,0,lVar1,lVar9);
  (**(code **)(lVar9 + 0x58))(0,0,lVar1,lVar9);
  (**(code **)(lVar9 + 0x60))(1,0,lVar1,lVar9);
  pcVar14 = *(code **)(lVar9 + 0x10);
  func_0x000107c615f0();
  (*pcVar14)();
  pcVar14 = *(code **)(lVar9 + 0x28);
  func_0x000107c615f0();
  (*pcVar14)();
  func_0x000107c5214c(lVar13);
  uVar11 = *(undefined8 *)(unaff_x20 + 0xb8);
  *(long *)(unaff_x20 + 0xb8) = lVar3;
  *(long *)(unaff_x20 + 0xc0) = lVar9;
  func_0x000107c615f0(lVar3);
  func_0x000107c615e8(uVar11);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x70);
  puVar8 = &UNK_1106513e8;
  puVar4 = puVar8;
  func_0x000107c613fc(&UNK_1106513e8,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  pcStack_60 = FUN_10340ad48;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100c1de60;
  puStack_68 = &UNK_110651428;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  uVar6 = *(undefined8 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar11;
  func_0x000107c61170(uVar6);
  uVar7 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar11 = *(undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar7;
  func_0x000107c6157c();
  func_0x000107c61574(uVar11);
  plVar12 = *(long **)(unaff_x20 + 0x18);
  puVar4 = puVar8;
  func_0x000107c613fc(&UNK_1106513e8,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  uVar11 = 0x10340ad50;
  puVar10 = puVar4;
  (**(code **)(*plVar12 + 0x60))(0x10340ad50);
  func_0x000107c61574(puVar4);
  uVar6 = uVar11;
  func_0x000107c614f0(uVar11);
  (**(code **)(puVar10 + 0x10))(uVar7,uVar6,puVar10);
  func_0x000107c615e8(uVar11);
  plVar12 = *(long **)(unaff_x20 + 0x30);
  func_0x000107c613fc(&UNK_1106513e8,0x18,7);
  func_0x000107c61644(puVar8 + 0x10);
  uVar11 = 0x10340ad58;
  puVar4 = puVar8;
  (**(code **)(*plVar12 + 0x60))(0x10340ad58);
  func_0x000107c61574(puVar8);
  uVar6 = uVar11;
  func_0x000107c614f0(uVar11);
  (**(code **)(puVar4 + 0x10))(uVar7,uVar6,puVar4);
  func_0x000107c615e8(lVar3);
  func_0x000107c61574(uVar7);
  func_0x000107c615e8(uVar11);
  return;
}



/* Entry: 103409c6c; end: 103409d1f;  */

void FUN_103409c6c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000103409830(0);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103409d20; end: 103409f53;  */

void FUN_103409d20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *unaff_x20;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar8 = *unaff_x20;
  uVar2 = unaff_x20[0x16];
  unaff_x20[0x16] = param_1;
  func_0x000107c61170(uVar2);
  uStack_50 = 0;
  puStack_48 = (undefined *)0xe000000000000000;
  func_0x000107c61174();
  func_0x000107c602fc(0x18);
  func_0x000107c6142c(puStack_48);
  uStack_50 = 0xd000000000000013;
  puStack_48 = (undefined *)0x800000010f14b710;
  lVar3 = param_1;
  func_0x000107c4b1dc(param_1);
  func_0x000107c61180();
  lVar9 = lVar3;
  func_0x000107c5faec();
  func_0x000107c61170(lVar3);
  func_0x000107c5fb78(lVar9,param_2);
  func_0x000107c6142c(param_2);
  uVar2 = 0xe100000000000000;
  func_0x000107c5fb78(0x20,0xe100000000000000);
  lVar3 = param_1;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  if (lVar3 == 0) {
    uVar2 = 0xec000000656d614e;
    lVar9 = 0x736e656c206c696e;
  }
  else {
    lVar9 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
  }
  func_0x000107c5fb78(lVar9,uVar2);
  func_0x000107c6142c(uVar2);
  puVar1 = puStack_48;
  uVar2 = uStack_50;
  func_0x0001007d6c6c(1,uStack_50,puStack_48,uVar8,&PTR_DAT_110651ab8);
  func_0x000107c6142c(puVar1);
  FUN_103409f54(param_1);
  ppuVar6 = &puStack_70;
  func_0x0001000d224c(&puStack_70);
  puVar1 = puStack_70;
  if (puStack_70 != (undefined *)0x0) {
    lVar3 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar9 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    func_0x000107c4045c(param_1);
    func_0x000107c61180();
    func_0x000107c4b1c0(puStack_70);
    puVar4 = puStack_70;
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    puVar5 = &UNK_1106513e8;
    func_0x000107c613fc(&UNK_1106513e8,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,unaff_x20);
    puVar7 = &UNK_110651460;
    func_0x000107c613fc(&UNK_110651460,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar5;
    *(long *)(puVar7 + 0x18) = lVar9;
    *(undefined8 *)(puVar7 + 0x20) = uVar2;
    uStack_50 = 0x10340ad60;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_10134a1dc;
    puStack_58 = &UNK_110651478;
    puStack_48 = puVar7;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x0001000d224c(&puStack_70);
    puVar5 = puStack_70;
    if (puStack_70 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = puStack_70;
      func_0x000107c49824(puStack_70);
      func_0x000107c61180();
      func_0x000107c615e8(puVar5);
    }
    func_0x000107c5dc64(puVar4);
    func_0x000107c615e8(puVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 103409f54; end: 10340a13f;  */

void FUN_103409f54(ulong param_1)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar9 = *(long *)(unaff_x20 + 0xb8);
  if (lVar9 != 0) {
    uVar8 = *(undefined8 *)(unaff_x20 + 0xc0);
    func_0x000107c615f0(lVar9);
    uVar11 = param_1;
    func_0x000107c4a63c();
    if ((int)uVar11 == 0) {
      uVar11 = param_1;
      func_0x000107c4a73c();
      if ((int)uVar11 == 0) {
        uVar3 = param_1;
        func_0x000107c49b94();
        uVar10 = 2;
        uVar11 = 2;
        if ((int)uVar3 == 0) {
          uVar11 = 0;
        }
      }
      else {
        uVar10 = 2;
        uVar11 = 1;
      }
    }
    else {
      uVar11 = param_1;
      func_0x000107c5db58(param_1);
      uVar11 = uVar11 & 0xffffffff;
      uVar10 = 1;
    }
    uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
    lVar1 = *(long *)(unaff_x20 + 0x60);
    func_0x000107c614f0(uVar4);
    uVar2 = *(undefined1 *)(unaff_x20 + 0x68);
    uVar3 = param_1;
    (**(code **)(lVar1 + 0x10))(param_1,uVar11,0,uVar10,uVar2,uVar4,lVar1);
    uVar5 = param_1;
    (**(code **)(lVar1 + 8))(param_1,uVar11,0,uVar10,uVar2,uVar4,lVar1);
    func_0x0001032d9cb0(uVar11,0,uVar10);
    uVar10 = *(undefined8 *)(unaff_x20 + 0xd0);
    puVar6 = &UNK_110651500;
    func_0x000107c613fc(&UNK_110651500,0x41,7);
    *(long *)(puVar6 + 0x10) = lVar9;
    *(undefined8 *)(puVar6 + 0x18) = uVar8;
    *(ulong *)(puVar6 + 0x20) = uVar5;
    uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined8 *)(puVar6 + 0x30) = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(puVar6 + 0x28) = uVar8;
    *(ulong *)(puVar6 + 0x38) = param_1;
    puVar6[0x40] = (byte)uVar3 & 1;
    pcStack_70 = FUN_10340ad78;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110651518;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar6 = puStack_68;
    func_0x000107c615f0(lVar9);
    func_0x000107c615f0(uVar8);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar6);
    func_0x000107c4e524(uVar10);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c615e8(lVar9);
  }
  return;
}



/* Entry: 10340a140; end: 10340a2db;  */

void FUN_10340a140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  func_0x0001000d224c(&puStack_70);
  puVar1 = puStack_70;
  if (puStack_70 != (undefined *)0x0) {
    uVar2 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    func_0x000107c4045c(param_1);
    func_0x000107c61180();
    func_0x000107c4b1c0(puStack_70);
    puVar4 = puStack_70;
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    puVar5 = &UNK_1106513e8;
    func_0x000107c613fc(&UNK_1106513e8,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    puVar7 = &UNK_110651460;
    func_0x000107c613fc(&UNK_110651460,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar5;
    *(undefined8 *)(puVar7 + 0x18) = uVar3;
    *(undefined8 *)(puVar7 + 0x20) = param_2;
    uStack_50 = 0x10340ad60;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_10134a1dc;
    puStack_58 = &UNK_110651478;
    puStack_48 = puVar7;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x0001000d224c(&puStack_70);
    puVar5 = puStack_70;
    if (puStack_70 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = puStack_70;
      func_0x000107c49824(puStack_70);
      func_0x000107c61180();
      func_0x000107c615e8(puVar5);
    }
    func_0x000107c5dc64(puVar4);
    func_0x000107c615e8(puVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 10340a2dc; end: 10340a37f;  */

void FUN_10340a2dc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_48 [24];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c40db8(0x3ff3333333333333);
    func_0x000107c61180();
  }
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    FUN_10340a380(param_1,param_4,param_5);
    func_0x000107c61574(param_3);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10340a380; end: 10340a477;  */

void FUN_10340a380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + 0xd0);
  puVar1 = &UNK_1106513e8;
  func_0x000107c613fc(&UNK_1106513e8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_1106514b0;
  func_0x000107c613fc(&UNK_1106514b0,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  uStack_50 = 0x10340ad6c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1106514c8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10340a478; end: 10340a5a3;  */

void FUN_10340a478(long param_1,ulong param_2,undefined1 *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_78 [24];
  
  puVar3 = auStack_78;
  func_0x000107c61428(param_1 + 0x10,puVar3,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0xb8);
  if ((lVar4 == 0) || (uVar6 = *(ulong *)(param_1 + 0xb0), uVar6 == 0)) {
    func_0x000107c61574();
    return;
  }
  lVar5 = *(long *)(param_1 + 0xc0);
  func_0x000107c615f0(lVar4);
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar1 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61170(uVar6);
  if (uVar1 == param_2 && puVar3 == param_3) {
    func_0x000107c6142c(puVar3);
  }
  else {
    func_0x000107c605b8(uVar1,puVar3,param_2,param_3,0);
    func_0x000107c6142c(puVar3);
    if ((uVar1 & 1) == 0) goto LAB_10340a574;
  }
  lVar2 = lVar4;
  func_0x000107c614f0(lVar4);
  (**(code **)(lVar5 + 0x50))(param_4,lVar2,lVar5);
LAB_10340a574:
  func_0x000107c61574(param_1);
  func_0x000107c615e8(lVar4);
  return;
}



/* Entry: 10340a5a4; end: 10340a677;  */

void FUN_10340a5a4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  FUN_10340ad14(unaff_x20 + 0x80);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 10340a678; end: 10340a743;  */

/* WARNING: Possible PIC construction at 0x00010340a714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340a828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010340a718) */
/* WARNING: Removing unreachable block (ram,0x00010340a82c) */

void FUN_10340a678(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  undefined8 in_stack_ffffffffffffffc8;
  
  if (*(char *)(unaff_x20 + 0x19) == '\x01') {
    func_0x0001007d6c6c(1,0x1000000000000028,0x800000010f14b630,*unaff_x20,&PTR_DAT_110651ab8);
    if (unaff_x20[5] != 0) {
      func_0x0001000d224c(&stack0xffffffffffffffc8);
      func_0x000107c5be9c(in_stack_ffffffffffffffc8);
      func_0x000107c615e8(in_stack_ffffffffffffffc8);
    }
    return;
  }
  lVar1 = unaff_x20[0x16];
  if (lVar1 != 0) {
    func_0x000107c61174();
    FUN_103407698();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  uVar5 = *unaff_x20;
  uVar4 = unaff_x20[9];
  lVar1 = unaff_x20[10];
  func_0x000107c614f0(uVar4);
  lVar2 = 4;
  (**(code **)(lVar1 + 8))(4,uVar4,lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c614f0();
    lVar3 = lVar1;
    func_0x000107c61440();
    if ((lVar3 != 0) && ((**(code **)(lVar3 + 8))(lVar1,lVar3), lVar1 != 0)) {
      func_0x0001007d6c6c(1,0x100000000000002c,0x800000010f14b680,uVar5,&PTR_DAT_110651ab8);
      if (unaff_x20[5] == 0) {
        func_0x000107c615e8(lVar2);
      }
      else {
        func_0x0001000d224c(&uStack_48);
        func_0x000107c3f5b0(uStack_48);
        func_0x000107c615e8(uStack_48);
        func_0x000107c615e8(lVar2);
      }
      goto code_r0x000107c61170;
    }
    func_0x000107c615e8(lVar2);
  }
  func_0x0001007d6c6c(1,0xd000000000000016,0x800000010f14b660,uVar5,&PTR_DAT_110651ab8);
  if (unaff_x20[5] != 0) {
    func_0x0001000d224c(&uStack_48);
    func_0x000107c3f5a8(uStack_48);
    func_0x000107c615e8(uStack_48);
  }
  return;
}



/* Entry: 10340a744; end: 10340a8c7;  */

/* WARNING: Possible PIC construction at 0x00010340a828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010340a82c) */

void FUN_10340a744(void)

{
  long lVar1;
  long lVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_48;
  
  uVar4 = *unaff_x20;
  uVar3 = unaff_x20[9];
  lVar5 = unaff_x20[10];
  func_0x000107c614f0(uVar3);
  lVar1 = 4;
  (**(code **)(lVar5 + 8))(4,uVar3,lVar5);
  if (lVar1 != 0) {
    lVar5 = lVar1;
    func_0x000107c614f0();
    lVar2 = lVar5;
    func_0x000107c61440();
    if ((lVar2 != 0) && ((**(code **)(lVar2 + 8))(lVar5,lVar2), lVar5 != 0)) {
      func_0x0001007d6c6c(1,0x100000000000002c,0x800000010f14b680,uVar4,&PTR_DAT_110651ab8);
      if (unaff_x20[5] == 0) {
        func_0x000107c615e8(lVar1);
      }
      else {
        func_0x0001000d224c(&uStack_48);
        func_0x000107c3f5b0(uStack_48);
        func_0x000107c615e8(uStack_48);
        func_0x000107c615e8(lVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar5);
      return;
    }
    func_0x000107c615e8(lVar1);
  }
  func_0x0001007d6c6c(1,0xd000000000000016,0x800000010f14b660,uVar4,&PTR_DAT_110651ab8);
  if (unaff_x20[5] != 0) {
    func_0x0001000d224c(&uStack_48);
    func_0x000107c3f5a8(uStack_48);
    func_0x000107c615e8(uStack_48);
  }
  return;
}



/* Entry: 10340a8c8; end: 10340aa37;  */

void FUN_10340a8c8(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uStack_38;
  
  uVar4 = *unaff_x20;
  uVar1 = unaff_x20[0x16];
  if (uVar1 != 0) {
    func_0x000107c61174();
    uVar2 = uVar1;
    func_0x000107c4a63c();
    if ((uVar2 & 1) == 0) {
      uVar2 = uVar1;
      func_0x000107c4a73c();
      if ((uVar2 & 1) != 0) {
        func_0x000107c61170(uVar1);
        func_0x00010340ac38(1,0,2);
        func_0x0001007d6c6c(1,0xd000000000000024,0x800000010f14b600,uVar4,&PTR_DAT_110651ab8);
        return;
      }
      uVar2 = uVar1;
      func_0x000107c49b94();
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 2;
      }
      uVar3 = 2;
    }
    else {
      uVar2 = uVar1;
      func_0x000107c5db58(uVar1);
      func_0x000107c61170(uVar1);
      uVar2 = uVar2 & 0xffffffff;
      uVar3 = 1;
    }
    func_0x00010340ac38(uVar2,0,uVar3);
    uVar1 = unaff_x20[0x16];
    if (uVar1 != 0) {
      func_0x000107c61174();
      uVar2 = uVar1;
      FUN_103407698();
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) != 0) {
        return;
      }
    }
  }
  func_0x0001007d6c6c(1,0x1000000000000031,0x800000010f14b5c0,uVar4,&PTR_DAT_110651ab8);
  if (unaff_x20[5] != 0) {
    func_0x0001000d224c(&uStack_38);
    func_0x000107c5bc30(uStack_38);
    func_0x000107c615e8(uStack_38);
  }
  return;
}



/* Entry: 10340aa38; end: 10340aa3f;  */

/* WARNING: Possible PIC construction at 0x00010340a714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010340a828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010340a718) */
/* WARNING: Removing unreachable block (ram,0x00010340a82c) */

void FUN_10340aa38(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  undefined8 in_stack_ffffffffffffffc8;
  
  if (*(char *)(unaff_x20 + 0x19) == '\x01') {
    func_0x0001007d6c6c(1,0x1000000000000028,0x800000010f14b630,*unaff_x20,&PTR_DAT_110651ab8);
    if (unaff_x20[5] != 0) {
      func_0x0001000d224c(&stack0xffffffffffffffc8);
      func_0x000107c5be9c(in_stack_ffffffffffffffc8);
      func_0x000107c615e8(in_stack_ffffffffffffffc8);
    }
    return;
  }
  lVar1 = unaff_x20[0x16];
  if (lVar1 != 0) {
    func_0x000107c61174();
    FUN_103407698();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  uVar5 = *unaff_x20;
  uVar4 = unaff_x20[9];
  lVar1 = unaff_x20[10];
  func_0x000107c614f0(uVar4);
  lVar2 = 4;
  (**(code **)(lVar1 + 8))(4,uVar4,lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c614f0();
    lVar3 = lVar1;
    func_0x000107c61440();
    if ((lVar3 != 0) && ((**(code **)(lVar3 + 8))(lVar1,lVar3), lVar1 != 0)) {
      func_0x0001007d6c6c(1,0x100000000000002c,0x800000010f14b680,uVar5,&PTR_DAT_110651ab8);
      if (unaff_x20[5] == 0) {
        func_0x000107c615e8(lVar2);
      }
      else {
        func_0x0001000d224c(&uStack_48);
        func_0x000107c3f5b0(uStack_48);
        func_0x000107c615e8(uStack_48);
        func_0x000107c615e8(lVar2);
      }
      goto code_r0x000107c61170;
    }
    func_0x000107c615e8(lVar2);
  }
  func_0x0001007d6c6c(1,0xd000000000000016,0x800000010f14b660,uVar5,&PTR_DAT_110651ab8);
  if (unaff_x20[5] != 0) {
    func_0x0001000d224c(&uStack_48);
    func_0x000107c3f5a8(uStack_48);
    func_0x000107c615e8(uStack_48);
  }
  return;
}



/* Entry: 10340aa40; end: 10340aa7f; -[_TtC19GamesLensProcessing28PlayGamesActionBarController actionBarHostWillDisappear:] */

void FUN_10340aa40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_1);
  FUN_10340ac70();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10340aa80; end: 10340ab8f;  */

/* WARNING: Possible PIC construction at 0x00010340ab34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010340ab38) */

void FUN_10340aa80(ulong param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((param_1 & 1) == 0) {
    func_0x000107c54dbc(uVar3,param_2,0,param_2,param_3 & 1,0);
    ppuVar2 = (undefined **)0x0;
  }
  else {
    puVar1 = &UNK_1106513e8;
    func_0x000107c613fc(&UNK_1106513e8,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    uStack_50 = 0x10340ac4c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_110651400;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c54dbc(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_release_11034bcf0)(ppuVar2);
  return;
}



/* Entry: 10340ab90; end: 10340ac1f;  */

void FUN_10340ab90(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0xb8);
    if (lVar2 == 0) {
      func_0x000107c61574();
    }
    else {
      lVar1 = *(long *)(param_1 + 0xc0);
      func_0x000107c615f0(lVar2);
      func_0x000107c61574(param_1);
      func_0x000107c614f0(lVar2);
      (**(code **)(lVar1 + 0x70))();
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10340ac20; end: 10340ac6f;  */

/* WARNING: Possible PIC construction at 0x00010340ab34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010340ab38) */

void FUN_10340ac20(ulong param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((param_1 & 1) == 0) {
    func_0x000107c54dbc(uVar3,param_2,0,param_2,param_3 & 1,0);
    ppuVar2 = (undefined **)0x0;
  }
  else {
    puVar1 = &UNK_1106513e8;
    func_0x000107c613fc(&UNK_1106513e8,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    uStack_50 = 0x10340ac4c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_110651400;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c54dbc(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_release_11034bcf0)(ppuVar2);
  return;
}



/* Entry: 10340ac70; end: 10340ad13;  */

void FUN_10340ac70(void)

{
  long lVar1;
  long lVar2;
  undefined8 *unaff_x20;
  long lVar3;
  code *pcVar4;
  
  func_0x0001007d6c6c(1,0xd00000000000001a,0x800000010f14b6b0,*unaff_x20,&PTR_DAT_110651ab8);
  func_0x000103409830(1);
  lVar3 = unaff_x20[0x17];
  if (lVar3 != 0) {
    lVar2 = unaff_x20[0x18];
    lVar1 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar4 = *(code **)(lVar2 + 0x40);
    func_0x000107c615f0(lVar3);
    (*pcVar4)(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
    return;
  }
  return;
}



/* Entry: 10340ad14; end: 10340ad47;  */

undefined8 FUN_10340ad14(undefined8 param_1)

{
  (*(code *)(undefined *)0x103407508)();
  return param_1;
}



/* Entry: 10340ad48; end: 10340ad77;  */

void FUN_10340ad48(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000103409830(0);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10340ad78; end: 10340ae07;  */

void FUN_10340ad78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar6 = *(undefined1 *)(unaff_x20 + 0x40);
  func_0x000107c614f0(uVar7);
  (**(code **)(lVar3 + 0x68))(uVar1,uVar4,uVar2,uVar5,uVar7,lVar3);
  (**(code **)(lVar3 + 0x60))(uVar6,0,uVar7,lVar3);
  return;
}



/* Entry: 10340ae08; end: 10340ae2f;  */

void FUN_10340ae08(long param_1,long param_2)

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



/* Entry: 10340ae30; end: 10340b553;  */

void FUN_10340ae30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110651560;
  func_0x000107c613fc(&UNK_110651560,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(FUN_10340b554,puVar1);
  return;
}



/* Entry: 10340b554; end: 10340b587;  */

void FUN_10340b554(void)

{
  long unaff_x20;
  
  func_0x00010340af34(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10340b588; end: 10340ba87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10340b588(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  char *pcVar7;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar8;
  long unaff_x20;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  uint uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_12c;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  uStack_100 = param_9;
  lStack_198 = param_3;
  uStack_138 = param_6;
  lStack_128 = param_1;
  lStack_120 = param_5;
  uStack_110 = param_4;
  uStack_108 = param_7;
  lStack_f8 = param_8;
  func_0x000107c613fc();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11306fae0);
  uVar8 = *(undefined8 *)(param_2 + _DAT_11306fae8);
  lStack_118 = unaff_x20;
  func_0x000107c61174(uVar3);
  uStack_12c = (int)uVar8;
  FUN_10341b994();
  func_0x000107c61170(uVar3);
  lVar1 = _DAT_11306fb60;
  uVar13 = *(undefined8 *)(param_2 + _DAT_11306faf0);
  uVar8 = *(undefined8 *)(param_1 + _DAT_11306f9c8);
  uVar11 = *(undefined8 *)(param_5 + _DAT_113070ea8);
  uStack_150 = uVar11;
  uStack_148 = uVar8;
  uStack_140 = uVar13;
  func_0x000107c61428(param_2 + _DAT_11306fb60,auStack_80,0,0);
  uVar12 = *(undefined8 *)(param_2 + lVar1);
  uVar3 = *(undefined8 *)(param_2 + _DAT_11306fb28);
  lVar1 = ((undefined8 *)(param_2 + _DAT_11306fb28))[1];
  func_0x000107c614f0();
  pcVar9 = *(code **)(lVar1 + 0x18);
  func_0x000107c6157c(uVar12);
  func_0x000107c615f0(uVar13);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar11);
  (*pcVar9)(uVar3,lVar1);
  uStack_158 = uVar3;
  func_0x0001000285a8(0x112d3b7c8,&UNK_10da59ea0);
  func_0x000107c4b1cc();
  func_0x000107c61180();
  uVar3 = param_6;
  func_0x0001000bda74();
  uStack_160 = uVar3;
  func_0x000107c61170(param_6);
  puVar4 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168();
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c5d9bc();
  func_0x000107c61170(puVar4);
  uStack_164 = (uint)(puVar5 == (undefined *)0x1);
  func_0x0001000d224c(&uStack_90);
  uStack_178 = uStack_88;
  uStack_180 = uStack_90;
  func_0x0001000d224c(&uStack_a0);
  lVar2 = lStack_198;
  uVar11 = *(undefined8 *)(lStack_198 + _DAT_113091b70);
  uStack_188 = uStack_98;
  uStack_190 = uStack_a0;
  func_0x000107c41b80();
  func_0x000107c61180();
  func_0x0001000285a8(0x112d5a5f8,&UNK_10d921380);
  uVar3 = uStack_108;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar8 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  uVar13 = *(undefined8 *)(param_2 + _DAT_11306fb70);
  uVar3 = *(undefined8 *)(lStack_f8 + _DAT_113036458);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar3);
  func_0x0001000d224c(&uStack_c8);
  func_0x0001000a8868(&uStack_c8,puStack_b0);
  puVar4 = puStack_b0;
  (**(code **)((long)ppuStack_a8 + 0xc0))(puStack_b0,ppuStack_a8);
  func_0x0001000834e4(&uStack_c8);
  puStack_b0 = &UNK_1106510b0;
  ppuStack_a8 = &PTR_DAT_1106510c8;
  bStack_c0 = (byte)puVar4 & 1;
  lVar6 = 0;
  uStack_c8 = uVar3;
  func_0x00010340a658();
  func_0x000107c613fc();
  func_0x0001000c6518(&uStack_c8,&UNK_1106510b0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(9);
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)((long)&uStack_1a0 + lVar1);
  (**(code **)(extraout_x12 + 0x10))(puVar10);
  uStack_f0 = *puVar10;
  uStack_e8 = *(undefined1 *)((long)&lStack_198 + lVar1);
  puStack_d8 = &UNK_1106510b0;
  ppuStack_d0 = &PTR_DAT_1106510c8;
  *(undefined8 *)(lVar6 + 0xb8) = 0;
  *(undefined8 *)(lVar6 + 0xc0) = 0;
  *(undefined8 *)(lVar6 + 0xb0) = 0;
  *(undefined1 *)(lVar6 + 200) = 0;
  pcVar7 = "PlayGamesActionBarController";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined8 *)(lVar6 + 0xd8) = 0;
  *(undefined8 *)(lVar6 + 0xe0) = 0;
  *(char **)(lVar6 + 0xd0) = pcVar7;
  func_0x00010340bae8(&uStack_f0,lVar6 + 0x80);
  *(undefined8 *)(lVar6 + 0xa8) = uVar13;
  *(undefined8 *)(lVar6 + 0x10) = uStack_140;
  *(undefined8 *)(lVar6 + 0x18) = uStack_148;
  *(undefined8 *)(lVar6 + 0x20) = uStack_150;
  *(undefined8 *)(lVar6 + 0x28) = uVar12;
  *(undefined8 *)(lVar6 + 0x30) = uStack_158;
  *(undefined8 *)(lVar6 + 0x38) = uStack_160;
  *(char *)(lVar6 + 0x40) = (char)uStack_164;
  *(undefined8 *)(lVar6 + 0x50) = uStack_178;
  *(undefined8 *)(lVar6 + 0x48) = uStack_180;
  *(undefined8 *)(lVar6 + 0x60) = uStack_188;
  *(undefined8 *)(lVar6 + 0x58) = uStack_190;
  *(char *)(lVar6 + 0x68) = (char)uStack_12c;
  *(undefined8 *)(lVar6 + 0x70) = uVar11;
  *(undefined8 *)(lVar6 + 0x78) = uVar8;
  func_0x0001000834e4(&uStack_c8);
  *(long *)(lStack_118 + 0x10) = lVar6;
  func_0x000107c6157c(lVar6);
  FUN_10340993c();
  func_0x000107c61170(lStack_128);
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uStack_110);
  func_0x000107c61170(lStack_120);
  func_0x000107c61170(uStack_138);
  func_0x000107c61170(uStack_108);
  func_0x000107c61170(lStack_f8);
  func_0x000107c61170(uStack_100);
  func_0x000107c61574(lVar6);
  return lStack_118;
}



/* Entry: 10340ba88; end: 10340baab;  */

void FUN_10340ba88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10340baac; end: 10340bad3;  */

undefined1  [16] FUN_10340baac(void)

{
  FUN_103409798();
  return ZEXT816(0);
}



/* Entry: 10340bad4; end: 10340bb37;  */

void FUN_10340bad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110651578;
  return;
}



/* Entry: 10340bb38; end: 10340bb57;  */

void FUN_10340bb38(void)

{
  func_0x000107c61168(&PTR_PTR_112f65d80);
  return;
}



/* Entry: 10340bb58; end: 10340bbc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340bb58(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c614f0();
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000100087bd4(FUN_10340d6fc,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 10340bbc8; end: 10340bdf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340bbc8(long *param_1,double param_2,double param_3,long param_4)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  param_4 = param_4 + _DAT_112f65de8;
  lVar10 = *(long *)(param_4 + 0x10);
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  uVar11 = *(undefined8 *)(param_4 + 0x20);
  func_0x000107c61434(lVar10);
  func_0x000107c61434(uVar1);
  lVar3 = lVar10;
  FUN_10340cd7c();
  lVar9 = lVar3;
  FUN_10340ce68(uVar11,param_2,param_3);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(lVar10);
  func_0x000107c6142c(lVar3);
  lVar10 = *(long *)(param_4 + 0x28);
  if (lVar10 != 0) {
    bVar2 = false;
    if ((*(double *)(param_4 + 0x30) == param_2) &&
       (bVar2 = false, !NAN(*(double *)(param_4 + 0x38)) && !NAN(param_3))) {
      bVar2 = *(double *)(param_4 + 0x38) == param_3;
    }
    if (bVar2) {
      lVar3 = lVar10;
      func_0x000107c61174();
      func_0x000107c60ad0();
      lVar4 = lVar3;
      func_0x000107c60aa8();
      if (lVar4 != 0) {
        lVar5 = lVar3;
        func_0x000107c60ac8();
        lVar6 = lVar3;
        func_0x000107c60ab8(lVar3);
        lVar7 = lVar3;
        func_0x000107c60ab0(lVar3);
        lVar8 = lVar7;
        func_0x000107c608bc();
        func_0x000107c608a0(lVar4,lVar5,lVar6,8,lVar7,lVar8,0x2002);
        if (lVar4 != 0) {
          func_0x000107c60938(0,(double)lVar6);
          func_0x000107c60908(0x3ff0000000000000,0xbff0000000000000,lVar4);
          lVar7 = lVar9;
          func_0x000107c3ab2c();
          func_0x000107c61180();
          if (lVar7 == 0) {
            func_0x000107c61170(lVar8);
            lVar8 = lVar4;
          }
          else {
            func_0x000107c5ff40(0,0,(double)lVar5,(double)lVar6);
            func_0x000107c61170(lVar8);
            func_0x000107c61170(lVar4);
            lVar8 = lVar7;
          }
        }
        func_0x000107c61170(lVar8);
      }
      func_0x000107c60ae0(lVar3,0);
      goto LAB_10340bdc0;
    }
  }
  lVar10 = lVar9;
  FUN_10340d2fc(param_2,param_3);
  func_0x000107c61170(lVar9);
  lVar9 = *(long *)(param_4 + 0x28);
  *(long *)(param_4 + 0x28) = lVar10;
  *(double *)(param_4 + 0x30) = param_2;
  *(double *)(param_4 + 0x38) = param_3;
  func_0x000107c61174(lVar10);
LAB_10340bdc0:
  func_0x000107c61170(lVar9);
  *param_1 = lVar10;
  return;
}



/* Entry: 10340bdf8; end: 10340be77; -[_TtC19GamesLensProcessing34GamesBackgroundPixelBufferProvider createPixelBufferWithSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340bdf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = param_1;
  uStack_48 = param_2;
  uStack_40 = param_3;
  func_0x000107c61174();
  uVar1 = 0x112f1c688;
  func_0x0001000285a8(0x112f1c688,&UNK_10db54d10);
  func_0x000100087bd4(&uStack_38,FUN_10340c648,auStack_60,uVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_38);
  return;
}



/* Entry: 10340be78; end: 10340c0b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340be78(ulong param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  ulong uVar11;
  
  puVar1 = (ulong *)(param_4 + _DAT_112f65de8);
  uVar8 = puVar1[1];
  if ((param_2 != *puVar1 || param_3 != uVar8) &&
     (uVar2 = param_2, func_0x000107c605b8(), (uVar2 & 1) == 0)) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    func_0x000107c61434(param_3);
    func_0x000107c6142c(uVar8);
    FUN_10340ca34();
    uVar8 = puVar1[2];
    uVar2 = puVar1[3];
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[4] = param_1;
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar8);
    uVar8 = puVar1[5];
    if ((uVar8 != 0) &&
       ((dVar9 = (double)puVar1[6], 0.0 < dVar9 && (dVar10 = (double)puVar1[7], 0.0 < dVar10)))) {
      uVar2 = puVar1[2];
      uVar5 = puVar1[3];
      uVar11 = puVar1[4];
      func_0x000107c61434(uVar2);
      func_0x000107c61434(uVar5);
      func_0x000107c61174();
      uVar3 = uVar2;
      FUN_10340cd7c();
      uVar4 = uVar3;
      FUN_10340ce68(uVar11,dVar9,dVar10);
      func_0x000107c6142c(uVar5);
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(uVar3);
      func_0x000107c60ad0(uVar8,0);
      uVar2 = uVar8;
      func_0x000107c60aa8();
      if (uVar2 != 0) {
        uVar5 = uVar8;
        func_0x000107c60ac8(uVar8);
        uVar3 = uVar8;
        func_0x000107c60ab8(uVar8);
        uVar11 = uVar8;
        func_0x000107c60ab0(uVar8);
        uVar6 = uVar11;
        func_0x000107c608bc();
        func_0x000107c608a0(uVar2,uVar5,uVar3,8,uVar11,uVar6,0x2002);
        if (uVar2 != 0) {
          func_0x000107c60938(0,(double)(long)uVar3);
          func_0x000107c60908(0x3ff0000000000000,0xbff0000000000000,uVar2);
          uVar11 = uVar4;
          func_0x000107c3ab2c();
          func_0x000107c61180();
          uVar7 = uVar6;
          if (uVar11 != 0) {
            func_0x000107c5ff40(0,0,(double)(long)uVar5,(double)(long)uVar3);
            func_0x000107c61170(uVar6);
            uVar7 = uVar2;
            uVar2 = uVar11;
          }
          uVar6 = uVar2;
          func_0x000107c61170(uVar7);
        }
        func_0x000107c61170(uVar6);
      }
      func_0x000107c60ae0(uVar8,0);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar4);
    }
  }
  return;
}



/* Entry: 10340c0b8; end: 10340c2d3;  */

void FUN_10340c0b8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = 0x112f65e20;
  func_0x0001000285a8(0x112f65e20,&UNK_10dbc1ef0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0x12;
  *(undefined8 *)(lVar1 + 0x10) = 9;
  uVar2 = 0x112d51000;
  func_0x0001000285a8(0x112d51000,&UNK_10d917a10);
  uVar3 = uVar2;
  func_0x000107c61538();
  uVar4 = 0x112e93710;
  func_0x0001000285a8(0x112e93710,&UNK_10da9f330);
  uVar5 = uVar4;
  func_0x000107c61538();
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x28) = uVar5;
  *(undefined8 *)(lVar1 + 0x30) = 0x4060e00000000000;
  uVar3 = uVar2;
  func_0x000107c61538(uVar2,0x112f65eb0);
  uVar5 = uVar4;
  func_0x000107c61538(uVar4,0x112f65ef0);
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  *(undefined8 *)(lVar1 + 0x40) = uVar5;
  *(undefined8 *)(lVar1 + 0x48) = 0x4060e00000000000;
  uVar3 = uVar2;
  func_0x000107c61538(uVar2,0x112f65f30);
  uVar5 = uVar4;
  func_0x000107c61538(uVar4,0x112f65f70);
  *(undefined8 *)(lVar1 + 0x50) = uVar3;
  *(undefined8 *)(lVar1 + 0x58) = uVar5;
  *(undefined8 *)(lVar1 + 0x60) = 0x4060e00000000000;
  uVar3 = uVar2;
  func_0x000107c61538(uVar2,0x112f65fb0);
  uVar5 = uVar4;
  func_0x000107c61538(uVar4,0x112f65ff0);
  *(undefined8 *)(lVar1 + 0x68) = uVar3;
  *(undefined8 *)(lVar1 + 0x70) = uVar5;
  *(undefined8 *)(lVar1 + 0x78) = 0x4060e00000000000;
  uVar3 = uVar2;
  func_0x000107c61538(uVar2,0x112f66030);
  uVar5 = uVar4;
  func_0x000107c61538(uVar4,0x112f66070);
  *(undefined8 *)(lVar1 + 0x80) = uVar3;
  *(undefined8 *)(lVar1 + 0x88) = uVar5;
  *(undefined8 *)(lVar1 + 0x90) = 0x4060e00000000000;
  uVar3 = uVar2;
  func_0x000107c61538(uVar2,0x112f660b0);
  uVar5 = uVar4;
  func_0x000107c61538(uVar4,0x112f660f0);
  *(undefined8 *)(lVar1 + 0x98) = uVar3;
  *(undefined8 *)(lVar1 + 0xa0) = uVar5;
  *(undefined8 *)(lVar1 + 0xa8) = 0x4060e00000000000;
  uVar3 = uVar2;
  func_0x000107c61538(uVar2,0x112f66130);
  uVar5 = uVar4;
  func_0x000107c61538(uVar4,0x112f66170);
  *(undefined8 *)(lVar1 + 0xb0) = uVar3;
  *(undefined8 *)(lVar1 + 0xb8) = uVar5;
  *(undefined8 *)(lVar1 + 0xc0) = 0x4060e00000000000;
  uVar3 = uVar2;
  func_0x000107c61538(uVar2,0x112f661b0);
  uVar5 = uVar4;
  func_0x000107c61538(uVar4,0x112f661f0);
  *(undefined8 *)(lVar1 + 200) = uVar3;
  *(undefined8 *)(lVar1 + 0xd0) = uVar5;
  *(undefined8 *)(lVar1 + 0xd8) = 0x4060e00000000000;
  func_0x000107c61538(uVar2,0x112f66230);
  func_0x000107c61538(uVar4,0x112f66270);
  *(undefined8 *)(lVar1 + 0xe0) = uVar2;
  *(undefined8 *)(lVar1 + 0xe8) = uVar4;
  *(undefined8 *)(lVar1 + 0xf0) = 0x4060e00000000000;
  lRam0000000113807318 = lVar1;
  return;
}



/* Entry: 10340c2d4; end: 10340c333; -[_TtC19GamesLensProcessing34GamesBackgroundPixelBufferProvider init] */

void FUN_10340c2d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesLensProcessing.GamesBackgroundPixelBufferProvider",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10340c300);
  (*pcVar1)();
}



/* Entry: 10340c334; end: 10340c397; -[_TtC19GamesLensProcessing34GamesBackgroundPixelBufferProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340c334(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f65de0));
  param_1 = param_1 + _DAT_112f65de8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10340c398; end: 10340c3b7;  */

void FUN_10340c398(void)

{
  func_0x000107c61168(&PTR_PTR_1128d8ae8);
  return;
}



/* Entry: 10340c3b8; end: 10340c41b;  */

long FUN_10340c3b8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10340c41c; end: 10340c52b;  */

undefined8 * FUN_10340c41c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar4 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61174(uVar3);
  return param_1;
}


