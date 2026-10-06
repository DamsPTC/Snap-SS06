/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10311552c; end: 1031155eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10311552c(void)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  long lStack_68;
  undefined1 auStack_60 [16];
  char cStack_38;
  
  uVar1 = 0x112f41998;
  func_0x0001000285a8(0x112f41998,&UNK_10db8ece0);
  func_0x000100087bd4(&lStack_68,0x10311668c,auStack_60,uVar1);
  if (lStack_68 != 0) {
    func_0x000107c61428(lStack_68 + 0x20,auStack_88,0,0);
    FUN_1031164e8(lStack_68 + 0x20,auStack_60);
    func_0x000107c61574(lStack_68);
    if (cStack_38 == '\x02') {
      func_0x0001000834e4();
      return 1;
    }
    func_0x000103116524(auStack_60);
  }
  return 0;
}



/* Entry: 1031155ec; end: 10311572f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1031155ec(undefined *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f41928));
  func_0x000100bc7fa4();
  FUN_103115730(param_1,param_2,param_3,param_4);
  puVar1 = PTR_PTR_1126af5d0;
  if (param_2 == 0) {
    func_0x000107c61168(PTR_PTR_1126af5d0);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar3 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010db8eca0);
    func_0x000107c466bc(puVar2);
    func_0x000107c61170(uVar3);
    param_1 = puVar2;
    func_0x000107c5ed2c(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c42d78(puVar1);
  }
  else {
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c5c3c8(puVar1);
  }
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 103115730; end: 103115b83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103115730(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_100 [8];
  ulong uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_b0 [24];
  long alStack_98 [3];
  long lStack_80;
  long lStack_78;
  
  lVar1 = 0;
  uVar2 = param_2;
  uStack_f0 = param_4;
  func_0x000107c5eec8();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  uVar11 = *(ulong *)(unaff_x20 + _DAT_112f41928);
  func_0x000107c614f0();
  uStack_f8 = uVar11;
  func_0x000100bc7fa4();
  uVar8 = param_2;
  if (param_2 == 0) {
    func_0x000107c5eec4(auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5eeac();
    (**(code **)(lVar10 + 8))(auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    uVar8 = uVar2;
    param_1 = uVar11;
  }
  func_0x000107c61434(param_2);
  uVar7 = 0x112f41998;
  func_0x0001000285a8(0x112f41998,&UNK_10db8ece0);
  func_0x000100087bd4(alStack_98,0x1031166c8,auStack_e0,uVar7);
  if (alStack_98[0] == 0) {
LAB_1031158a4:
    FUN_103114d9c(param_1,uVar8,param_3,uStack_f0);
    func_0x000107c6142c(uVar8);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f41950);
    func_0x000100c82230();
    uVar7 = *(undefined8 *)(param_1 + 0x80);
    puVar3 = &UNK_11060fe80;
    func_0x000107c613fc(&UNK_11060fe80,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    func_0x000107c6157c(uVar7);
    pcVar4 = FUN_10311656c;
    puVar6 = puVar3;
    func_0x0001000b6504(FUN_10311656c);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(puVar3);
    pcVar5 = pcVar4;
    func_0x000107c614f0(pcVar4);
    (**(code **)(puVar6 + 0x18))(uVar9,pcVar5,puVar6);
    func_0x000107c615e8(pcVar4);
    func_0x000107c6157c(param_1);
    func_0x000100087bd4(FUN_103116650,auStack_e0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(param_1);
    FUN_1031167d0();
    func_0x000107c61428(param_1 + 0x20,auStack_b0,0,0);
    FUN_1031164e8(param_1 + 0x20,auStack_e0);
    FUN_103117ed8(alStack_98);
    func_0x000103116524(auStack_e0);
    uStack_e8 = param_1;
    if (lStack_80 != 0) {
      func_0x0001000a8868(alStack_98,lStack_80);
      lVar1 = lStack_80;
      lVar10 = lStack_78;
      (**(code **)(lStack_78 + 0x10))(lStack_80,lStack_78);
      func_0x000107c61574(param_1);
      func_0x0001000834e4(alStack_98);
      goto LAB_103115b5c;
    }
LAB_103115a24:
    func_0x000107c61574(uStack_e8);
    func_0x000103116610(alStack_98,0x112f419a0,&UNK_10db8edf0);
  }
  else {
    func_0x000107c61574();
    func_0x000107c61434(uVar8);
    uVar2 = param_1;
    FUN_103115c14(param_1,uVar8,param_3);
    uVar11 = uVar8;
    func_0x000107c6142c();
    if ((uVar2 & 1) == 0) {
      FUN_103114b90();
      goto LAB_1031158a4;
    }
    FUN_103115418();
    if ((uVar11 & 1) == 0) {
      FUN_10311552c();
      if ((uVar11 & 1) == 0) goto LAB_1031158a4;
      func_0x000107c6142c(uVar8);
      func_0x000100bc7fa4(uStack_f8);
      uVar2 = 0;
      func_0x000100087bd4(alStack_98,0x1031166dc,auStack_e0,uVar7);
      if (alStack_98[0] != 0) {
        FUN_10311552c();
        if ((uVar2 & 1) != 0) {
          FUN_103116a80();
        }
        func_0x000107c61574(alStack_98[0]);
      }
      uVar9 = 0x1031166f0;
    }
    else {
      func_0x000107c6142c(uVar8);
      uVar9 = 0x103116704;
    }
    func_0x000100087bd4(&uStack_e8,uVar9,auStack_e0,uVar7);
    if (uStack_e8 != 0) {
      func_0x000107c61428(uStack_e8 + 0x20,auStack_b0,0,0);
      FUN_1031164e8(uStack_e8 + 0x20,auStack_e0);
      FUN_103117ed8(alStack_98);
      func_0x000103116524(auStack_e0);
      if (lStack_80 != 0) {
        func_0x0001000a8868(alStack_98,lStack_80);
        lVar1 = lStack_80;
        lVar10 = lStack_78;
        (**(code **)(lStack_78 + 0x10))(lStack_80,lStack_78);
        func_0x000107c61574(uStack_e8);
        func_0x0001000834e4(alStack_98);
        goto LAB_103115b5c;
      }
      goto LAB_103115a24;
    }
  }
  lVar1 = 0;
  lVar10 = 0;
LAB_103115b5c:
  auVar12._8_8_ = lVar10;
  auVar12._0_8_ = lVar1;
  return auVar12;
}



/* Entry: 103115b84; end: 103115c13; -[_TtC25SCLensCarouselSessionImpl29LensCarouselSessionController startSessionWithSessionId:sourceType:entranceType:] */

void FUN_103115b84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_1031155ec(param_3,param_2,param_4,param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103115c14; end: 103115dcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103115c14(ulong param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_98 [24];
  long alStack_80 [3];
  ulong uStack_68;
  long lStack_60;
  
  uVar4 = (uint)auStack_d0;
  uVar1 = 0x112f41998;
  func_0x0001000285a8(0x112f41998,&UNK_10db8ece0);
  func_0x000100087bd4(alStack_80,0x10311672c,auStack_d0,uVar1);
  if (alStack_80[0] == 0) {
    return 0;
  }
  if (param_2 == 0) {
LAB_103115d30:
    func_0x000107c61574(alStack_80[0]);
  }
  else {
    func_0x000107c61428(alStack_80[0] + 0x20,auStack_98,0,0);
    FUN_1031164e8(alStack_80[0] + 0x20,auStack_d0);
    FUN_103117ed8(alStack_80);
    func_0x000103116524(auStack_d0);
    if (uStack_68 == 0) {
      func_0x000107c61574(alStack_80[0]);
      func_0x000103116610(alStack_80,0x112f419a0,&UNK_10db8edf0);
      return 0;
    }
    func_0x0001000a8868(alStack_80,uStack_68);
    uVar2 = uStack_68;
    lVar3 = lStack_60;
    (**(code **)(lStack_60 + 0x10))();
    func_0x0001000834e4(alStack_80);
    if (uVar2 == param_1 && param_2 == lVar3) {
      func_0x000107c6142c(lVar3);
    }
    else {
      func_0x000107c605b8(uVar2,lVar3,param_1,param_2,0);
      func_0x000107c6142c(lVar3);
      if ((uVar2 & 1) == 0) goto LAB_103115d30;
    }
    lVar3 = alStack_80[0] + 0x20;
    FUN_1031164e8();
    FUN_103117e10();
    func_0x000107c61574(alStack_80[0]);
    func_0x000103116524(auStack_d0);
    if (((uVar4 & 0xff) != 1) && (lVar3 == param_3)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 103115dcc; end: 103115e73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103115dcc(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_50 [16];
  long lStack_38;
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f41928));
  func_0x000100bc7fa4();
  uVar1 = 0x112f41998;
  func_0x0001000285a8(0x112f41998,&UNK_10db8ece0);
  uVar2 = 0;
  func_0x000100087bd4(&lStack_38,0x103116678,auStack_50,uVar1);
  if (lStack_38 != 0) {
    FUN_10311552c();
    if ((uVar2 & 1) != 0) {
      FUN_103116a80();
    }
    func_0x000107c61574(lStack_38);
  }
  return;
}



/* Entry: 103115e74; end: 103115edf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103115e74(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c4d664(*(undefined8 *)(param_2 + _DAT_112f41958));
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103115ee0; end: 103116233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103115ee0(ulong param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_c0 [16];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  ulong uStack_60;
  long lStack_58;
  long lStack_48;
  
  if (param_2 != 0) {
    uVar1 = 0x112f41998;
    func_0x0001000285a8(0x112f41998,&UNK_10db8ece0);
    func_0x000100087bd4(&lStack_48,0x103116664,auStack_c0,uVar1);
    if (lStack_48 != 0) {
      func_0x000107c61428(lStack_48 + 0x20,auStack_90,0,0);
      FUN_1031164e8(lStack_48 + 0x20,auStack_c0);
      FUN_103117ed8(auStack_78);
      func_0x000103116524(auStack_c0);
      if (uStack_60 == 0) {
        func_0x000107c61574(lStack_48);
        func_0x000103116610(auStack_78,0x112f419a0,&UNK_10db8edf0);
      }
      else {
        func_0x0001000a8868(auStack_78,uStack_60);
        uVar2 = uStack_60;
        lVar3 = lStack_58;
        (**(code **)(lStack_58 + 0x10))();
        func_0x000107c61574(lStack_48);
        func_0x0001000834e4(auStack_78);
        if (uVar2 == param_1 && param_2 == lVar3) {
          func_0x000107c6142c(lVar3);
          return 1;
        }
        func_0x000107c605b8(uVar2,lVar3,param_1,param_2,0);
        func_0x000107c6142c(lVar3);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 103116234; end: 10311623f; -[_TtC25SCLensCarouselSessionImpl29LensCarouselSessionController pauseSessionWithSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103116234(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f41928);
  func_0x000107c614f0(uVar1);
  func_0x000107c61174(param_1);
  func_0x000100bc7fa4(uVar1);
  FUN_103115ee0(param_3,param_2);
  if ((param_3 & 1) != 0) {
    (*(code *)0x103116050)();
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103116240; end: 103116267; -[_TtC25SCLensCarouselSessionImpl29LensCarouselSessionController pauseSession] */

void FUN_103116240(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000103116050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103116268; end: 103116347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103116268(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  long lStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f41928);
  func_0x000107c614f0(uVar2);
  func_0x000100bc7fa4();
  FUN_103115ee0(param_1,param_2);
  if ((param_1 & 1) != 0) {
    func_0x000100bc7fa4(uVar2);
    uVar2 = 0x112f41998;
    func_0x0001000285a8(0x112f41998,&UNK_10db8ece0);
    uVar1 = 0;
    func_0x000100087bd4(&lStack_48,0x1031166a0,auStack_60,uVar2);
    if (lStack_48 != 0) {
      FUN_10311552c();
      if ((uVar1 & 1) != 0) {
        FUN_103116a80();
      }
      func_0x000107c61574(lStack_48);
    }
  }
  return;
}



/* Entry: 103116348; end: 1031163b3; -[_TtC25SCLensCarouselSessionImpl29LensCarouselSessionController resumeSessionWithSessionId:] */

void FUN_103116348(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_103116268(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1031163b4; end: 1031163db; -[_TtC25SCLensCarouselSessionImpl29LensCarouselSessionController resumeSession] */

void FUN_1031163b4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103115dcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031163dc; end: 1031163e7; -[_TtC25SCLensCarouselSessionImpl29LensCarouselSessionController stopSessionWithSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031163dc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f41928);
  func_0x000107c614f0(uVar1);
  func_0x000107c61174(param_1);
  func_0x000100bc7fa4(uVar1);
  FUN_103115ee0(param_3,param_2);
  if ((param_3 & 1) != 0) {
    FUN_103114b90();
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1031163e8; end: 103116497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031163e8(long param_1,undefined8 param_2,ulong param_3,code *param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f41928);
  func_0x000107c614f0(uVar1);
  func_0x000107c61174(param_1);
  func_0x000100bc7fa4(uVar1);
  FUN_103115ee0(param_3,param_2);
  if ((param_3 & 1) != 0) {
    (*param_4)();
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103116498; end: 1031164bf; -[_TtC25SCLensCarouselSessionImpl29LensCarouselSessionController stopSession] */

void FUN_103116498(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103114b90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031164c0; end: 1031164e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031164c0(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f41968);
  func_0x000107c6157c();
  return;
}



/* Entry: 1031164e8; end: 103116557;  */

undefined8 FUN_1031164e8(undefined8 param_1,undefined8 param_2)

{
  FUN_1031179f0(param_2,param_1);
  return param_2;
}



/* Entry: 103116558; end: 10311656b;  */

void FUN_103116558(void)

{
  FUN_103116574();
  return;
}



/* Entry: 10311656c; end: 103116573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311656c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4d664(*(undefined8 *)(lVar1 + _DAT_112f41958));
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103116574; end: 1031165b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103116574(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f41968);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f41968) = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 1031165b4; end: 1031165cb;  */

void FUN_1031165b4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1031126fc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1031165cc; end: 10311664f;  */

long FUN_1031165cc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103116650; end: 103116753;  */

void FUN_103116650(void)

{
  FUN_103116558();
  return;
}



/* Entry: 103116754; end: 1031167a3;  */

void FUN_103116754(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c49820();
  *param_1 = uVar1;
  return;
}



/* Entry: 1031167a4; end: 1031167cf;  */

void FUN_1031167a4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031167d0; end: 103116a7f;  */

void FUN_1031167d0(void)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined8 auStack_98 [6];
  undefined1 auStack_68 [24];
  
  func_0x0001000a8868(unaff_x20 + 0x50,*(undefined8 *)(unaff_x20 + 0x68));
  plVar1 = (long *)0x0;
  func_0x000103112e88();
  plVar2 = plVar1;
  (*(code *)(undefined *)0x103112eec)();
  puVar3 = &UNK_11060ff18;
  func_0x000107c613fc(&UNK_11060ff18,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  pcVar4 = FUN_103117520;
  puVar11 = puVar3;
  (**(code **)(*plVar2 + 0x60))(FUN_103117520);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  pcVar5 = pcVar4;
  func_0x000107c614f0(pcVar4);
  (**(code **)(puVar11 + 0x18))(*(undefined8 *)(unaff_x20 + 0x78),pcVar5,puVar11);
  func_0x000107c615e8(pcVar4);
  uVar6 = *(ulong *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000a8868(unaff_x20 + 0x50,*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61434(uVar10);
  (*(code *)(undefined *)0x103112ea8)(plVar1,&PTR_DAT_11060fa88);
  func_0x000103113bd4(0);
  func_0x000107c613fc();
  FUN_103114408(uVar6,uVar10,plVar1);
  func_0x000107c61170(plVar1);
  func_0x0001044f86dc(0);
  func_0x000107c61428(unaff_x20 + 0x20,auStack_68,0,0);
  uVar7 = unaff_x20 + 0x20;
  FUN_1031164e8(uVar7,auStack_98);
  func_0x000103117754();
  func_0x000103116524(auStack_98);
  func_0x0001044f7c48();
  func_0x000107c61428(unaff_x20 + 0x20,auStack_98,0x21,0);
  uVar8 = uVar6;
  func_0x000107c6157c();
  FUN_10311747c();
  func_0x000107c614a8(auStack_98);
  func_0x000107c61574(uVar6);
  if ((uVar8 & 1) == 0) {
    func_0x000107c61574(uVar6);
  }
  else {
    uVar8 = unaff_x20 + 0x20;
    FUN_1031164e8(uVar8,auStack_98);
    func_0x000103117754();
    func_0x000103116524(auStack_98);
    func_0x0001044f7c48(uVar8);
    uVar9 = uVar7;
    func_0x000107c60118(uVar7,uVar8);
    if ((uVar9 & 1) == 0) {
      func_0x0001044f8b48(0);
      func_0x000107c610f8();
      func_0x000107c61174(uVar8);
      func_0x000107c61174(uVar7);
      uVar10 = 0;
      func_0x0001044f8900(0,uVar7,uVar8);
      auStack_98[0] = uVar10;
      func_0x000100087c34(auStack_98);
      func_0x000107c61574(uVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar10);
      uVar7 = uVar8;
    }
    else {
      func_0x000107c61574(uVar6);
      func_0x000107c61170(uVar7);
      uVar7 = uVar8;
    }
  }
  func_0x000107c61170(uVar7);
  return;
}



/* Entry: 103116a80; end: 103116ddf;  */

void FUN_103116a80(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_128 [24];
  long lStack_110;
  long alStack_100 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte bStack_88;
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_80,0,0);
  FUN_1031164e8(unaff_x20 + 0x20,&uStack_b0);
  if (bStack_88 < 3) {
    if (1 < bStack_88) {
      func_0x0001000834e4(&uStack_b0);
      FUN_1031164e8(unaff_x20 + 0x20,&uStack_b0);
      FUN_103117ed8(auStack_128);
      func_0x000103116524(&uStack_b0);
      if (lStack_110 == 0) {
        FUN_1031173bc(auStack_128,0x112f419a0,&UNK_10db8edf0);
        alStack_100[1] = 0;
        alStack_100[0] = 0;
        alStack_100[3] = 0;
        alStack_100[2] = 0;
        alStack_100[4] = 0;
      }
      else {
        uVar10 = 0x112f41b58;
        func_0x0001000285a8(0x112f41b58,&UNK_10db8ee00);
        uVar5 = 0x112f41b60;
        func_0x0001000285a8(0x112f41b60,&UNK_10db8ee08);
        plVar6 = alStack_100;
        func_0x000107c6147c(plVar6,auStack_128,uVar10,uVar5,6);
        if (((ulong)plVar6 & 1) == 0) {
          alStack_100[4] = 0;
          alStack_100[1] = 0;
          alStack_100[0] = 0;
          alStack_100[3] = 0;
          alStack_100[2] = 0;
        }
        else if (alStack_100[3] != 0) {
          func_0x000100d35d3c(alStack_100,alStack_100 + 5);
          func_0x0001044f86dc(0);
          uVar7 = unaff_x20 + 0x20;
          FUN_1031164e8(uVar7,&uStack_b0);
          func_0x000103117754();
          func_0x000103116524(&uStack_b0);
          func_0x0001044f7c48();
          plVar6 = alStack_100 + 5;
          func_0x0001000a8868(plVar6,uStack_c0);
          lVar12 = *plVar6;
          lVar1 = *(long *)(lVar12 + 0x20) + 1;
          if (*(long *)(lVar12 + 0x20) != -1) {
            *(long *)(lVar12 + 0x20) = lVar1;
            uVar10 = *(undefined8 *)(lVar12 + 0x10);
            uVar5 = *(undefined8 *)(lVar12 + 0x18);
            uStack_b0 = uVar10;
            uStack_a8 = uVar5;
            func_0x000107c61438(uVar5,2);
            func_0x000107c5fb78(0x7e,0xe100000000000000);
            puVar11 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
            alStack_100[0] = lVar1;
            func_0x000107c6057c(PTR___sSuN_11034e220,
                                PTR___sSus23CustomStringConvertiblesWP_11034e240);
            func_0x000107c5fb78();
            func_0x000107c6142c(puVar11);
            uVar3 = uStack_a8;
            uVar2 = uStack_b0;
            uVar13 = *(undefined8 *)(lVar12 + 0x28);
            func_0x0001031147ac(0);
            func_0x000107c613fc();
            func_0x000107c61174(uVar13);
            FUN_10311468c(uVar10,uVar5,uVar2,uVar3,uVar13);
            FUN_103114354();
            func_0x000107c61574(uVar10);
            uVar8 = unaff_x20 + 0x20;
            func_0x000107c61428(uVar8,&uStack_b0,0x21,0);
            func_0x0001031175e4();
            func_0x000107c614a8(&uStack_b0);
            if ((uVar8 & 1) != 0) {
              uVar8 = unaff_x20 + 0x20;
              FUN_1031164e8(uVar8,&uStack_b0);
              func_0x000103117754();
              func_0x000103116524(&uStack_b0);
              func_0x0001044f7c48(uVar8);
              uVar9 = uVar7;
              func_0x000107c60118(uVar7,uVar8);
              if ((uVar9 & 1) == 0) {
                func_0x0001044f8b48(0);
                func_0x000107c610f8();
                func_0x000107c61174(uVar8);
                func_0x000107c61174(uVar7);
                uVar10 = 0;
                func_0x0001044f8900(0,uVar7,uVar8);
                uStack_b0 = uVar10;
                func_0x000100087c34(&uStack_b0);
                func_0x000107c61170(uVar7);
                func_0x000107c61170(uVar10);
                uVar7 = uVar8;
              }
              else {
                func_0x000107c61170(uVar7);
                uVar7 = uVar8;
              }
            }
            func_0x000107c61170(uVar7);
            func_0x0001000834e4(alStack_100 + 5);
            return;
          }
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103116de0);
          (*pcVar4)();
        }
      }
      FUN_1031173bc(alStack_100,0x112f41b50,&UNK_10db8edf8);
      return;
    }
  }
  else if (bStack_88 != 3) {
    return;
  }
  func_0x0001000834e4(&uStack_b0);
  return;
}



/* Entry: 103116de0; end: 103117357;  */

void FUN_103116de0(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [24];
  long lStack_a8;
  long lStack_a0;
  undefined8 auStack_98 [6];
  undefined1 auStack_68 [24];
  
  func_0x0001044f86dc(0);
  func_0x000107c61428(unaff_x20 + 0x20,auStack_68,0,0);
  uVar1 = unaff_x20 + 0x20;
  FUN_1031164e8(uVar1,auStack_98);
  func_0x000103117754();
  func_0x000103116524(auStack_98);
  func_0x0001044f7c48();
  FUN_1031164e8(unaff_x20 + 0x20,auStack_98);
  FUN_103117ed8(auStack_c0);
  func_0x000103116524(auStack_98);
  if (lStack_a8 == 0) {
    FUN_1031173bc(auStack_c0,0x112f419a0,&UNK_10db8edf0);
  }
  else {
    func_0x0001000a8868(auStack_c0,lStack_a8);
    (**(code **)(lStack_a0 + 0x18))(auStack_e8,lStack_a8,lStack_a0);
    func_0x0001000a8868(auStack_e8,uStack_d0);
    (**(code **)(lStack_c8 + 8))(param_1,uStack_d0,lStack_c8);
    func_0x0001000834e4(auStack_e8);
    func_0x0001000834e4(auStack_c0);
  }
  lVar2 = unaff_x20 + 0x20;
  FUN_1031164e8(lVar2,auStack_98);
  func_0x000103117754();
  func_0x000103116524(auStack_98);
  func_0x0001044f7c48(lVar2);
  uVar3 = uVar1;
  func_0x000107c60118(uVar1,lVar2);
  if ((uVar3 & 1) == 0) {
    func_0x0001044f8b48(0);
    func_0x000107c610f8();
    func_0x000107c61174(lVar2);
    func_0x000107c61174(uVar1);
    uVar4 = 1;
    func_0x0001044f8900(1,uVar1,lVar2);
    auStack_98[0] = uVar4;
    func_0x000100087c34(auStack_98);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar4);
  }
  else {
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 103117358; end: 1031173bb;  */

void FUN_103117358(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000103116524(unaff_x20 + 0x20);
  func_0x0001000834e4(unaff_x20 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031173bc; end: 10311747b;  */

undefined8 FUN_1031173bc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10311747c; end: 10311751f;  */

bool FUN_10311747c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  byte bStack_60;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  uVar1 = 0;
  func_0x000103113bd4();
  ppuStack_38 = &PTR_DAT_11060fc90;
  auStack_58[0] = param_1;
  uStack_40 = uVar1;
  FUN_1031164e8(param_2,auStack_88);
  func_0x000107c6157c(param_1);
  if (bStack_60 < 4) {
    func_0x0001000834e4(auStack_88);
    func_0x000100028eb0();
  }
  else {
    func_0x000103116524(param_2);
    FUN_103117528(auStack_58,param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  func_0x0001000834e4(auStack_58);
  return 3 < bStack_60;
}



/* Entry: 103117520; end: 103117527;  */

void FUN_103117520(ulong *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = (uint)(uVar3 >> 0x3e);
    if (uVar2 == 0) {
      func_0x000103116de0(uVar3);
    }
    else if (uVar2 == 1) {
      func_0x000103116fc8();
    }
    else {
      func_0x000103117198(uVar3 & 0x3fffffffffffffff);
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 103117528; end: 10311756b;  */

long FUN_103117528(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10311756c; end: 1031176f3;  */

undefined8 FUN_10311756c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_68 [40];
  byte bStack_40;
  undefined1 auStack_38 [40];
  
  FUN_1031164e8();
  if (bStack_40 < 2) {
    func_0x000103116524();
    FUN_1031176f4(auStack_68,auStack_38);
    FUN_1031176f4(auStack_38);
    *(undefined1 *)(unaff_x20 + 0x28) = 2;
    uVar1 = 1;
  }
  else {
    if (bStack_40 - 2 < 2) {
      func_0x0001000834e4(auStack_68);
    }
    func_0x000100028eb0();
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1031176f4; end: 10311770b;  */

undefined8 * FUN_1031176f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 10311770c; end: 103117887;  */

undefined8 FUN_10311770c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f419a0;
  func_0x0001000285a8(0x112f419a0,&UNK_10db8edf0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103117888; end: 10311799f;  */

undefined8 FUN_103117888(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  uVar1 = param_1;
  lVar7 = param_2;
  (**(code **)(param_2 + 8))();
  uVar2 = param_1;
  lVar8 = param_2;
  (**(code **)(param_2 + 0x10))(param_1,param_2);
  uVar3 = param_1;
  (**(code **)(param_2 + 0x20))(param_1,param_2);
  uVar4 = param_1;
  (**(code **)(param_2 + 0x38))(param_1,param_2);
  (**(code **)(param_2 + 0x18))(auStack_88,param_1,param_2);
  func_0x0001000a8868(auStack_88,uStack_70);
  uVar5 = uStack_70;
  (**(code **)(lStack_68 + 0x10))(uStack_70,lStack_68);
  uVar6 = 0;
  func_0x0001044f9620(0);
  func_0x000107c610f8();
  func_0x0001044f8f98(uVar1,lVar7,uVar2,lVar8,uVar3,uVar4,(uint)uVar5 & 1,uVar6);
  func_0x0001000834e4(auStack_88);
  return uVar1;
}



/* Entry: 1031179a0; end: 1031179cb;  */

long FUN_1031179a0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1031179cc; end: 1031179ef;  */

void FUN_1031179cc(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 10);
  if (3 < *(byte *)(param_1 + 10)) {
    uVar1 = *param_1 + 4;
  }
  if (uVar1 < 4) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 6) + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(param_1 + 6) + -8) + 8))();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)param_1);
    return;
  }
  return;
}



/* Entry: 1031179f0; end: 103117d2f;  */

undefined8 * FUN_1031179f0(undefined8 *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = (uint)*(byte *)(param_2 + 10);
  if (3 < *(byte *)(param_2 + 10)) {
    uVar2 = *param_2 + 4;
  }
  if ((int)uVar2 < 2) {
    if (uVar2 == 0) {
      lVar3 = *(long *)(param_2 + 6);
      param_1[4] = *(undefined8 *)(param_2 + 8);
      param_1[3] = lVar3;
      (*(code *)**(undefined8 **)(lVar3 + -8))(param_1);
      *(undefined1 *)(param_1 + 5) = 0;
      return param_1;
    }
    if (uVar2 != 1) {
LAB_103117a80:
      uVar4 = *(undefined8 *)param_2;
      uVar6 = *(undefined8 *)(param_2 + 6);
      uVar5 = *(undefined8 *)(param_2 + 4);
      param_1[1] = *(undefined8 *)(param_2 + 2);
      *param_1 = uVar4;
      param_1[3] = uVar6;
      param_1[2] = uVar5;
      uVar4 = *(undefined8 *)((long)param_2 + 0x19);
      *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
      *(undefined8 *)((long)param_1 + 0x19) = uVar4;
      return param_1;
    }
    lVar3 = *(long *)(param_2 + 6);
    param_1[4] = *(undefined8 *)(param_2 + 8);
    param_1[3] = lVar3;
    (*(code *)**(undefined8 **)(lVar3 + -8))(param_1);
    uVar1 = 1;
  }
  else if (uVar2 == 2) {
    lVar3 = *(long *)(param_2 + 6);
    param_1[4] = *(undefined8 *)(param_2 + 8);
    param_1[3] = lVar3;
    (*(code *)**(undefined8 **)(lVar3 + -8))(param_1);
    uVar1 = 2;
  }
  else {
    if (uVar2 != 3) goto LAB_103117a80;
    lVar3 = *(long *)(param_2 + 6);
    param_1[4] = *(undefined8 *)(param_2 + 8);
    param_1[3] = lVar3;
    (*(code *)**(undefined8 **)(lVar3 + -8))(param_1);
    uVar1 = 3;
  }
  *(undefined1 *)(param_1 + 5) = uVar1;
  return param_1;
}



/* Entry: 103117d30; end: 103117e0f;  */

int FUN_103117d30(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xfc;
  }
  iVar1 = 0;
  if (4 < *(byte *)(param_1 + 10)) {
    iVar1 = (*(byte *)(param_1 + 10) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Entry: 103117e10; end: 103117ed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103117e10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_b8 [40];
  byte bStack_90;
  undefined1 auStack_88 [40];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  
  FUN_1031164e8();
  if (bStack_90 < 4) {
    FUN_1031176f4(auStack_b8,auStack_88);
    FUN_1031176f4(auStack_88,&uStack_60);
    if (lStack_48 != 0) {
      func_0x0001000a8868(&uStack_60,lStack_48);
      (**(code **)(lStack_40 + 0x20))(lStack_48,lStack_40);
      uVar2 = *(undefined8 *)(lStack_48 + _DAT_113081a28);
      func_0x000107c61170();
      func_0x0001000834e4(&uStack_60);
      uVar1 = 0;
      goto LAB_103117ec4;
    }
  }
  else {
    lStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  FUN_10311770c(&uStack_60);
  uVar2 = 0;
  uVar1 = 1;
LAB_103117ec4:
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 103117ed8; end: 103117f3b;  */

void FUN_103117ed8(undefined8 *param_1)

{
  undefined1 auStack_78 [40];
  byte bStack_50;
  undefined1 auStack_48 [40];
  
  FUN_1031164e8();
  if (bStack_50 < 4) {
    FUN_1031176f4(auStack_78,auStack_48);
    FUN_1031176f4(auStack_48,param_1);
  }
  else {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 103117f3c; end: 103117f43; -[_TtC27LensCarouselTalkIntegration47LensCarouselTalkActivationConfigurationProvider selectionWithActivationSelection:] */

void FUN_103117f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(param_3);
  return;
}



/* Entry: 103117f44; end: 103117f9f; -[_TtC27LensCarouselTalkIntegration47LensCarouselTalkActivationConfigurationProvider activationUIConfigurationFor:] */

void FUN_103117f44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_103117fd4(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103117fa0; end: 103117fb3; -[_TtC27LensCarouselTalkIntegration47LensCarouselTalkActivationConfigurationProvider updateLastAppliedConfiguration:] */

void FUN_103117fa0(void)

{
  return;
}



/* Entry: 103117fb4; end: 103117fd3;  */

void FUN_103117fb4(void)

{
  func_0x000107c61168(&PTR_PTR_112f41ba8);
  return;
}



/* Entry: 103117fd4; end: 103118023;  */

void FUN_103117fd4(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  func_0x00010450e890();
  func_0x000107c610f8();
  uVar1 = 0;
  func_0x00010450e854(0);
  func_0x0001044ff654(0);
  func_0x0001044fca38(0,uVar1);
  return;
}



/* Entry: 103118024; end: 10311817b;  */

/* WARNING: Possible PIC construction at 0x00010311809c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031180b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103118124: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031180b8) */
/* WARNING: Removing unreachable block (ram,0x0001031180a0) */
/* WARNING: Removing unreachable block (ram,0x000103118128) */

void FUN_103118024(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x0001000285a8(0x112f41cc0,&UNK_10db8ef00);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100775284(uVar1,0,1);
  uVar2 = 0x112f41cc8;
  func_0x0001000285a8(0x112f41cc8,&UNK_10db8ef08);
  func_0x0001000d5158(FUN_103118634,0,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10311817c; end: 103118247;  */

void FUN_10311817c(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c(uVar1);
  func_0x000104875e28(auStack_58);
  func_0x000107c61574(uVar1);
  if (lStack_40 == 0) {
    FUN_103118520(auStack_58);
  }
  else {
    func_0x0001000a8868(auStack_58,lStack_40);
    (**(code **)(lStack_38 + 0x18))(lStack_40,lStack_38);
    func_0x0001000834e4(auStack_58);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  auStack_58[0] = 0;
  func_0x000107c6157c(uVar1);
  func_0x0001002a64a8(auStack_58);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 103118248; end: 103118287;  */

void FUN_103118248(void)

{
  FUN_10311817c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103118288; end: 103118327;  */

void FUN_103118288(ulong param_1,code *param_2)

{
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  if ((param_1 & 1) != 0) {
    auStack_68[0] = 1;
    func_0x0001002a64a8(*(undefined8 *)(unaff_x20 + 0x20),auStack_68);
    func_0x0001000d224c(auStack_68);
    func_0x0001000a8868(auStack_68,uStack_50);
    (**(code **)(lStack_48 + 0x10))(uStack_50,lStack_48);
    func_0x0001000834e4(auStack_68);
  }
  if (param_2 != (code *)0x0) {
    (*param_2)(1);
  }
  return;
}



/* Entry: 103118328; end: 10311844f;  */

void FUN_103118328(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_80 [24];
  long lStack_68;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  if ((param_1 & 1) == 0) {
    func_0x000104875e28(auStack_80);
    if (lStack_68 == 0) {
      FUN_103118520(auStack_80);
    }
    else {
      FUN_103118568(auStack_80,auStack_58);
      lVar2 = lStack_38;
      uVar1 = uStack_40;
      func_0x0001000a8868(auStack_58,uStack_40);
      (**(code **)(lVar2 + 0x28))(uVar1,lVar2);
      func_0x0001000a8868(auStack_58,uStack_40);
      (**(code **)(lStack_38 + 0x18))(uStack_40,lStack_38);
      func_0x0001000834e4(auStack_58);
    }
    auStack_58[0] = 0;
    func_0x0001002a64a8(auStack_58);
  }
  return;
}



/* Entry: 103118450; end: 1031184b3;  */

void FUN_103118450(void)

{
  FUN_103118288();
  return;
}



/* Entry: 1031184b4; end: 10311851f;  */

void FUN_1031184b4(undefined8 param_1)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x20))(param_1,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 103118520; end: 103118567;  */

undefined8 FUN_103118520(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f41cb8;
  func_0x0001000285a8(0x112f41cb8,&UNK_10dbccb90);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103118568; end: 10311857f;  */

undefined8 * FUN_103118568(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 103118580; end: 103118633;  */

void FUN_103118580(ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar2 = &lStack_50;
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    func_0x000107c61574();
    func_0x000103118268();
    uVar1 = 0x112f41cd0;
    lStack_50 = param_3;
    func_0x0001000285a8(0x112f41cd0,&UNK_10db8ef10);
    func_0x000107c5fb18(&lStack_50,uVar1);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar1);
    if ((param_1 & 1) == 0) {
      func_0x000107c5d314(param_2);
    }
    else {
      func_0x000107c4d2f4();
    }
    func_0x000107c61170(plVar2);
  }
  return;
}



/* Entry: 103118634; end: 1031186c7;  */

void FUN_103118634(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  if (*(char *)(param_2 + 1) == '\x01') {
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&uStack_28,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    *param_1 = 0;
    return;
  }
  *param_1 = uStack_28;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1031186c8; end: 1031186cf;  */

void FUN_1031186c8(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar3 = &lStack_50;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c61574();
    func_0x000103118268();
    uVar2 = 0x112f41cd0;
    lStack_50 = lVar1;
    func_0x0001000285a8(0x112f41cd0,&UNK_10db8ef10);
    func_0x000107c5fb18(&lStack_50,uVar2);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar2);
    if ((param_1 & 1) == 0) {
      func_0x000107c5d314(param_2);
    }
    else {
      func_0x000107c4d2f4();
    }
    func_0x000107c61170(plVar3);
  }
  return;
}



/* Entry: 1031186d0; end: 1031186fb;  */

void FUN_1031186d0(undefined1 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1031186fc; end: 1031188f3;  */

long FUN_1031186fc(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_40 = FUN_1031188f4;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_103118914;
  puStack_48 = &UNK_110610128;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  func_0x000100b5e6d0(0);
  func_0x000107c610f8();
  func_0x000103f957fc(puVar1,uVar3);
  uVar3 = 0;
  func_0x000103f95710(0);
  func_0x000107c610f8();
  func_0x000103f9542c(puVar1,uVar3);
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 1031188f4; end: 103118913;  */

void FUN_1031188f4(void)

{
  FUN_103117fb4(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 103118914; end: 10311894b;  */

void FUN_103118914(long param_1)

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



/* Entry: 10311894c; end: 103118977;  */

void FUN_10311894c(long param_1,long param_2)

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



/* Entry: 103118978; end: 103118a17;  */

void FUN_103118978(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103118a18; end: 103118a2b;  */

void FUN_103118a18(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103118a2c; end: 103118a8f;  */

undefined8
FUN_103118a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_103118a90(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 103118a90; end: 103118b43;  */

void FUN_103118a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  puVar1 = &UNK_1106101a0;
  func_0x000107c613fc(&UNK_1106101a0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  func_0x0001000285a8(0x112f41da8,&UNK_10db8ef70);
  func_0x000107c613fc();
  pcVar2 = FUN_103118d48;
  func_0x0001000bdd8c(FUN_103118d48,puVar1);
  unaff_x20[2] = pcVar2;
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 103118b44; end: 103118d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103118b44(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  long lStack_48;
  
  ppuVar2 = &puStack_70;
  uVar5 = *(undefined8 *)(*(long *)(param_2 + _DAT_1130387f8) + _DAT_1130387c8);
  func_0x000107c6157c(uVar5);
  func_0x000107c4b364(param_3);
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x000107c4afac();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar6 = uVar4;
  func_0x000107c4ae00(uVar4);
  func_0x000107c61180();
  func_0x000107c615e8(uVar4);
  func_0x0001000285a8(0x112f41e80,&UNK_10db8efb8);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  pcStack_50 = FUN_103118ed4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_103118d98;
  puStack_58 = &UNK_1106101b8;
  lStack_48 = lVar1;
  func_0x000107c60bc4(&puStack_70);
  lVar3 = lStack_48;
  func_0x000107c6157c(lVar1);
  func_0x000107c61574(lVar3);
  func_0x000107c4db94(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c60bd0(ppuVar2);
  uVar6 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(lVar1);
  lVar1 = 0;
  func_0x000103118268();
  lVar3 = lVar1;
  func_0x000107c613fc();
  uVar4 = 0x112ea35c0;
  func_0x0001000285a8(0x112ea35c0,&UNK_10dab5c00);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  *(undefined8 *)(lVar3 + 0x10) = uVar5;
  *(undefined8 *)(lVar3 + 0x18) = uVar6;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  FUN_103118024();
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1106100a0;
  *param_1 = lVar3;
  return;
}



/* Entry: 103118d48; end: 103118d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103118d48(long *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  long lStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar2 = &puStack_70;
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130387f8) + _DAT_1130387c8);
  func_0x000107c6157c(uVar5,uVar4,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c4b364(uVar4);
  func_0x000107c61180();
  uVar6 = uVar4;
  func_0x000107c4afac();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = uVar6;
  func_0x000107c4ae00(uVar6);
  func_0x000107c61180();
  func_0x000107c615e8(uVar6);
  func_0x0001000285a8(0x112f41e80,&UNK_10db8efb8);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  pcStack_50 = FUN_103118ed4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_103118d98;
  puStack_58 = &UNK_1106101b8;
  lStack_48 = lVar1;
  func_0x000107c60bc4(&puStack_70);
  lVar3 = lStack_48;
  func_0x000107c6157c(lVar1);
  func_0x000107c61574(lVar3);
  func_0x000107c4db94(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c60bd0(ppuVar2);
  uVar6 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(lVar1);
  lVar1 = 0;
  func_0x000103118268();
  lVar3 = lVar1;
  func_0x000107c613fc();
  uVar4 = 0x112ea35c0;
  func_0x0001000285a8(0x112ea35c0,&UNK_10dab5c00);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  *(undefined8 *)(lVar3 + 0x10) = uVar5;
  *(undefined8 *)(lVar3 + 0x18) = uVar6;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  FUN_103118024();
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1106100a0;
  *param_1 = lVar3;
  return;
}



/* Entry: 103118d54; end: 103118d97;  */

void FUN_103118d54(long param_1)

{
  long lStack_28;
  
  if (param_1 != 0) {
    lStack_28 = param_1;
    func_0x000107c615f0();
    func_0x000100b60084(&lStack_28);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 103118d98; end: 103118ddf;  */

void FUN_103118d98(long param_1,undefined8 param_2)

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



/* Entry: 103118de0; end: 103118de7;  */

void FUN_103118de0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103118de8; end: 103118e87;  */

void FUN_103118de8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103118e88; end: 103118ed3;  */

void FUN_103118e88(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000103f94e34(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000103f94d78();
  *param_1 = uVar1;
  return;
}



/* Entry: 103118ed4; end: 103118ef7;  */

void FUN_103118ed4(long param_1)

{
  long lStack_28;
  
  if (param_1 != 0) {
    lStack_28 = param_1;
    func_0x000107c615f0();
    func_0x000100b60084(&lStack_28);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 103118ef8; end: 103119277;  */

long FUN_103118ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_110610208;
  func_0x000107c613fc(&UNK_110610208,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  func_0x0001000285a8(0x112f41e88,&UNK_10db8efc0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  pcVar2 = FUN_10311938c;
  func_0x0001000bdd8c(FUN_10311938c,puVar1);
  func_0x0001000285a8(0x112f41e90,&UNK_10db8f3b0);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar2);
  uVar3 = 0x103119398;
  func_0x0001000bdd8c(0x103119398,pcVar2);
  func_0x0001000285a8(0x112f41e98,&UNK_10db8efd0);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar2);
  uVar5 = 0x1031193a4;
  func_0x0001000bdd8c(0x1031193a4,pcVar2);
  uVar4 = 0;
  func_0x000103f94a38(0);
  func_0x000107c610f8();
  func_0x000103f9493c(uVar3,uVar5,uVar4);
  uVar5 = 0;
  func_0x000103f94bc8(0);
  func_0x000107c610f8();
  func_0x000103f94ab4(uVar3,uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(pcVar2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  return unaff_x20;
}



/* Entry: 103119278; end: 10311938b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103119278(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c4b33c();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c4ae48();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x0001000285a8(0x112ef5518,&UNK_10db24030);
  uVar2 = *(undefined8 *)(*(long *)(param_3 + _DAT_113038d08) + _DAT_113038d60);
  func_0x000107c61174(uVar2);
  uVar3 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  func_0x0001000285a8(0x112f41f70,&UNK_10db8f018);
  uVar2 = *(undefined8 *)(param_4 + _DAT_113038b28);
  func_0x0001000bda74(uVar2);
  uVar4 = 0;
  FUN_10311fed0(0);
  func_0x000107c613fc();
  func_0x00010311f1d8(uVar1,uVar3,uVar2,0,uVar4);
  *param_1 = uVar1;
  return;
}



/* Entry: 10311938c; end: 1031193af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311938c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c4b33c();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4ae48();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x0001000285a8(0x112ef5518,&UNK_10db24030);
  uVar4 = *(undefined8 *)(*(long *)(lVar1 + _DAT_113038d08) + _DAT_113038d60);
  func_0x000107c61174(uVar4);
  uVar2 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  func_0x0001000285a8(0x112f41f70,&UNK_10db8f018);
  uVar4 = *(undefined8 *)(lVar6 + _DAT_113038b28);
  func_0x0001000bda74(uVar4);
  uVar5 = 0;
  FUN_10311fed0(0);
  func_0x000107c613fc();
  func_0x00010311f1d8(uVar3,uVar2,uVar4,0,uVar5);
  *param_1 = uVar3;
  return;
}



/* Entry: 1031193b0; end: 1031193e3;  */

void FUN_1031193b0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031193e4; end: 10311941b;  */

void FUN_1031193e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = 0;
  FUN_10311fed0();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  uStack_40 = *(undefined8 *)(*unaff_x20 + 0x50);
  (*(code *)&SUB_100075034)(param_1,&UNK_1000ca6b0,auStack_50);
  return;
}



/* Entry: 10311941c; end: 10311942b;  */

void FUN_10311941c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10311942c; end: 1031194cb;  */

void FUN_10311942c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031194cc; end: 1031194e3;  */

void FUN_1031194cc(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1031194e4; end: 103119503;  */

void FUN_1031194e4(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 103119504; end: 1031195e7;  */

undefined * FUN_103119504(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  
  ppuVar2 = &puStack_50;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_30 = FUN_1031195e8;
  uStack_28 = 0;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  pcStack_40 = FUN_103119608;
  puStack_38 = &UNK_110610260;
  func_0x000107c60bc4(&puStack_50);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x00010073d1f4(0);
  func_0x000107c610f8();
  func_0x000107c61174(puVar1);
  puVar3 = puVar1;
  func_0x00010073d268();
  uVar4 = 0;
  func_0x00010450d32c(0);
  func_0x000107c610f8();
  func_0x00010450d218(puVar3,uVar4);
  func_0x000107c61170(puVar1);
  return puVar3;
}



/* Entry: 1031195e8; end: 103119607;  */

void FUN_1031195e8(void)

{
  FUN_10311aac8(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 103119608; end: 10311963f;  */

void FUN_103119608(long param_1)

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



/* Entry: 103119640; end: 10311966b;  */

void FUN_103119640(long param_1,long param_2)

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



/* Entry: 10311966c; end: 1031196d7;  */

void FUN_10311966c(undefined8 param_1)

{
  if (lRam0000000112f41fa0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e74964c);
  return;
}



/* Entry: 1031196d8; end: 1031197cb;  */

void FUN_1031196d8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_40 = FUN_1031195e8;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_103119608;
  puStack_48 = &UNK_110610288;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x00010073d1f4(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x00010073d268();
  uVar4 = 0;
  func_0x00010450d32c(0);
  func_0x000107c610f8();
  func_0x00010450d218(puVar3,uVar4);
  func_0x000107c61170(puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1031197cc; end: 1031197d3;  */

void FUN_1031197cc(long param_1,long param_2)

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



/* Entry: 1031197d4; end: 103119877;  */

undefined8 FUN_1031197d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_103119a9c(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 103119878; end: 1031198e3;  */

void FUN_103119878(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      func_0x000107c615f0(param_1);
      FUN_1031198e4();
      func_0x000107c61574(param_2);
      func_0x000107c615e8(param_1);
    }
  }
  return;
}



/* Entry: 1031198e4; end: 103119a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031198e4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = uVar6;
  func_0x000107c4b5dc();
  func_0x000107c61180();
  func_0x000107c4b4cc(uVar6);
  func_0x000107c61180();
  lVar3 = 0;
  FUN_10311ac40();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112f42350;
  func_0x000107c61614(lVar4 + _DAT_112f42350,0);
  *(undefined8 *)(lVar4 + _DAT_112f42348) = uVar7;
  func_0x000107c61604(lVar4 + lVar2,uVar6);
  *(undefined8 *)(lVar4 + _DAT_112f42358) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c61174(uVar7);
  func_0x000107c615f0(param_1);
  func_0x000107c61154(&lStack_60,puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c615e8(uVar6);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  *(long **)(unaff_x20 + 0x18) = plVar5;
  func_0x000107c61174();
  func_0x000107c61170(uVar7);
  lVar2 = _DAT_112f42358;
  func_0x000107c54e60(*(undefined8 *)((long)plVar5 + _DAT_112f42358));
  func_0x000107c54e58(*(undefined8 *)((long)plVar5 + lVar2));
  func_0x000107c61170(plVar5);
  return;
}



/* Entry: 103119a1c; end: 103119a63;  */

void FUN_103119a1c(long param_1,undefined8 param_2)

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



/* Entry: 103119a64; end: 103119a8f;  */

void FUN_103119a64(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103119a90; end: 103119a9b;  */

void FUN_103119a90(void)

{
  return;
}


