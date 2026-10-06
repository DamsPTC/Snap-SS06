/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10146f700; end: 10146f783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146f700(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2 + _DAT_112da0f58;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x00010035ce64(param_1);
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10146f784; end: 10146f7cf; -[_TtC22SCManagedCaptureDevice31CaptureDeviceAnimatedZoomHelper updateZoom:] */

/* WARNING: Possible PIC construction at 0x00010146f7b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010146f7bc) */

void FUN_10146f784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10146f8d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10146f7d0; end: 10146f82f; -[_TtC22SCManagedCaptureDevice31CaptureDeviceAnimatedZoomHelper init] */

void FUN_10146f7d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCManagedCaptureDevice.CaptureDeviceAnimatedZoomHelper",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10146f7fc);
  (*pcVar1)();
}



/* Entry: 10146f830; end: 10146f88b; -[_TtC22SCManagedCaptureDevice31CaptureDeviceAnimatedZoomHelper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146f830(long param_1)

{
  FUN_10146faf0(param_1 + _DAT_112da0f58);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da0f60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112da0f88));
  if (*(long *)(param_1 + _DAT_112da0f98) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112da0f98))[1]);
    return;
  }
  return;
}



/* Entry: 10146f88c; end: 10146f8ab;  */

void FUN_10146f88c(void)

{
  func_0x000107c61168(&PTR_PTR_1127d8f58);
  return;
}



/* Entry: 10146f8ac; end: 10146f8d3;  */

void FUN_10146f8ac(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103c2250;
  if (lRam0000000112da0fc8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112da0fc8 = param_1;
  }
  return;
}



/* Entry: 10146f8d4; end: 10146fabf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146f8d4(double param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  double dVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000107c5ee58();
  lVar1 = _DAT_112da0f88;
  param_1 = param_1 - *(double *)(unaff_x20 + _DAT_112da0f90);
  if (*(double *)(unaff_x20 + _DAT_112da0f80) <= param_1) {
    uVar5 = 0;
    if (*(long *)(unaff_x20 + _DAT_112da0f88) != 0) {
      func_0x000107c498f8();
      uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    }
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    func_0x000107c61170(uVar5);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112da0f60);
    puVar3 = &UNK_1103c22c0;
    func_0x000107c613fc(&UNK_1103c22c0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_50 = (code *)0x10146fae8;
    puStack_58 = &UNK_1103c2328;
    puStack_48 = puVar3;
  }
  else {
    param_1 = param_1 / *(double *)(unaff_x20 + _DAT_112da0f80);
    dVar6 = *(double *)(unaff_x20 + _DAT_112da0f70) +
            param_1 * param_1 * (3.0 - (param_1 + param_1)) *
            (*(double *)(unaff_x20 + _DAT_112da0f78) - *(double *)(unaff_x20 + _DAT_112da0f70));
    if (ABS(dVar6 - *(double *)(unaff_x20 + _DAT_112da0f68)) <= 0.001) {
      return;
    }
    *(double *)(unaff_x20 + _DAT_112da0f68) = dVar6;
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112da0f60);
    puVar3 = &UNK_1103c22c0;
    func_0x000107c613fc(&UNK_1103c22c0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar2 = &UNK_1103c22e8;
    func_0x000107c613fc(&UNK_1103c22e8,0x20,7);
    *(undefined **)(puVar2 + 0x10) = puVar3;
    *(double *)(puVar2 + 0x18) = dVar6;
    pcStack_50 = FUN_10146fac0;
    puStack_58 = &UNK_1103c2300;
    puStack_48 = puVar2;
  }
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c4e524(uVar5);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 10146fac0; end: 10146faef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146fac0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar1 = lVar2 + _DAT_112da0f58;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x00010035ce64(uVar3);
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10146faf0; end: 10146fb13;  */

undefined8 FUN_10146faf0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10146fb14; end: 10146fb1b;  */

void FUN_10146fb14(long param_1,long param_2)

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



/* Entry: 10146fb1c; end: 10146fb7b; -[_TtC22SCManagedCaptureDevice31CaptureDeviceAutoExposureHelper init] */

void FUN_10146fb1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCManagedCaptureDevice.CaptureDeviceAutoExposureHelper",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10146fb48);
  (*pcVar1)();
}



/* Entry: 10146fb7c; end: 10146fb8b; -[_TtC22SCManagedCaptureDevice31CaptureDeviceAutoExposureHelper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146fb7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112da0fe0));
  return;
}



/* Entry: 10146fb8c; end: 10146fbab;  */

void FUN_10146fb8c(void)

{
  func_0x000107c61168(&PTR_PTR_1127d9058);
  return;
}



/* Entry: 10146fbac; end: 10146fc3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146fbac(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_112da1030;
  uVar3 = 1;
  if (*(char *)(param_2 + _DAT_112da1030) != '\0') {
    uVar3 = 2;
  }
  uVar2 = param_1;
  func_0x000107c49dbc(param_1,param_2,uVar3);
  if (((int)uVar2 != 0) && (uVar3 = param_1, func_0x000107c49dc0(), (int)uVar3 != 0)) {
    func_0x000107c54aac(*(undefined8 *)(param_2 + _DAT_112da1028),
                        ((undefined8 *)(param_2 + _DAT_112da1028))[1],param_1);
    uVar3 = 1;
    if (*(char *)(param_2 + lVar1) != '\0') {
      uVar3 = 2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c19e0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFocusMode__112645250,uVar3);
    return;
  }
  return;
}



/* Entry: 10146fc3c; end: 10146fc9b; -[_TtC22SCManagedCaptureDevice28CaptureDeviceAutoFocusHelper init] */

void FUN_10146fc3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCManagedCaptureDevice.CaptureDeviceAutoFocusHelper",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10146fc68);
  (*pcVar1)();
}



/* Entry: 10146fc9c; end: 10146fcab; -[_TtC22SCManagedCaptureDevice28CaptureDeviceAutoFocusHelper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146fc9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112da1020));
  return;
}



/* Entry: 10146fcac; end: 10146fccb;  */

void FUN_10146fcac(void)

{
  func_0x000107c61168(&PTR_PTR_1127d9128);
  return;
}



/* Entry: 10146fccc; end: 10146fd77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10146fccc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112da1098;
  lVar2 = *(long *)(unaff_x20 + _DAT_112da1098);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112da1130);
    FUN_10146f88c();
    func_0x000107c610f8();
    func_0x000107c615f0(uVar4);
    lVar2 = unaff_x20;
    func_0x000107c61174();
    lVar3 = lVar2;
    FUN_1014734a0();
    func_0x000107c61170(lVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 10146fd78; end: 10146ff1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10146fd78(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  lVar3 = _DAT_112da10a0;
  ppuVar6 = &puStack_40;
  puVar4 = *(undefined1 **)(unaff_x20 + _DAT_112da10a0);
  puVar5 = puVar4;
  if (puVar4 == (undefined1 *)0x0) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112da1130);
    FUN_10146fb8c();
    puVar5 = puVar4;
    func_0x000107c610f8();
    auVar8 = NEON_fmov(0x3fe0000000000000,8);
    puVar1 = (undefined8 *)(puVar5 + _DAT_112da0fe8);
    puVar1[1] = auVar8._8_8_;
    *puVar1 = auVar8._0_8_;
    puVar5[_DAT_112da0ff0] = 0;
    *(undefined8 *)(puVar5 + _DAT_112da0fe0) = uVar7;
    puVar2 = PTR_s_init_1125d9248;
    puStack_40 = puVar5;
    puStack_38 = puVar4;
    func_0x000107c615f0(uVar7);
    func_0x000107c61154(&puStack_40,puVar2);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined1 ***)(unaff_x20 + lVar3) = ppuVar6;
    func_0x000107c61174();
    func_0x000107c61170(uVar7);
    puVar4 = (undefined1 *)0x0;
    puVar5 = (undefined1 *)ppuVar6;
  }
  func_0x000107c61174(puVar4);
  return puVar5;
}



/* Entry: 10146ff1c; end: 10146ffa3;  */

void FUN_10146ff1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107c610f8();
  func_0x00010023841c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 10146ffa4; end: 10147014f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10146ffa4(double param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  double dVar3;
  undefined1 auStack_48 [24];
  
  puVar2 = PTR__AVCaptureDeviceTypeBuiltInUltraWideCamera_110347f18;
  func_0x0001002ea81c(PTR__AVCaptureDeviceTypeBuiltInUltraWideCamera_110347f18,
                      PTR__AVCaptureDeviceTypeBuiltInDualWideCamera_110347ef0);
  lVar1 = _DAT_112da10b8;
  func_0x000107c61428(unaff_x20 + _DAT_112da10b8,auStack_48,0,0);
  if (*(char *)(unaff_x20 + lVar1) == '\x01') {
    param_1 = *(double *)(unaff_x20 + _DAT_112da10c0);
  }
  else {
    func_0x000107c5de60(*(undefined8 *)(unaff_x20 + _DAT_112da1120));
  }
  dVar3 = 2.0;
  if (((ulong)puVar2 & 1) == 0) {
    dVar3 = 1.0;
  }
  return param_1 / dVar3;
}



/* Entry: 101470150; end: 101470237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101470150(double param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  if ((param_2 & 1) != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    lVar1 = _DAT_112da10e0;
    if (param_3 != 0) {
      func_0x000107c61428(param_3 + _DAT_112da10e0,auStack_70,0,0);
      if (*(char *)(param_3 + lVar1) == '\x01') {
        func_0x000100083b20(&lStack_78);
        lVar1 = lStack_78;
        func_0x000107c41948();
        func_0x000107c61180();
        func_0x000107c615e8(lStack_78);
        if (lVar1 != 0) {
          func_0x000107c41a8c((float)param_1,lVar1);
          func_0x000107c615e8(lVar1);
        }
      }
      func_0x000107c61170(param_3);
    }
  }
  return;
}



/* Entry: 101470238; end: 10147041f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101470238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  long param_5,undefined *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 auStack_258 [2];
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined *apuStack_1d8 [2];
  undefined *apuStack_1c8 [2];
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  undefined *apuStack_168 [2];
  undefined *puStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined *apuStack_e8 [2];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *apuStack_68 [2];
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c3e208(*(undefined8 *)(param_5 + _DAT_112da1130));
  puStack_58 = (undefined *)0x0;
  uStack_50 = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  func_0x000107c5fb78(param_3);
  func_0x000107c6142c(uStack_50);
  uVar10 = *(undefined8 *)(param_5 + _DAT_112da1120);
  puStack_58 = (undefined *)0x0;
  uVar2 = uVar10;
  func_0x000107c4b948();
  puVar3 = puStack_58;
  if ((int)uVar2 == 0) {
    puVar7 = puStack_58;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(puVar7);
    func_0x000107c61654();
    puStack_58 = (undefined *)0x0;
    uStack_50 = 0xe000000000000000;
    func_0x000107c602fc(0x41);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    lVar6 = 0x112d393f0;
    apuStack_68[0] = puVar3;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    param_4 = &puStack_58;
    param_6 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
    func_0x000107c603d0(apuStack_68);
    func_0x000107c614ac(puVar3);
    uVar10 = uStack_50;
    func_0x000107c6142c();
  }
  else {
    func_0x000107c61174();
    lVar6 = 2;
    uVar2 = uVar10;
    func_0x000107c49dbc();
    if (((int)uVar2 != 0) && (uVar2 = uVar10, func_0x000107c49dc0(), (int)uVar2 != 0)) {
      param_1 = 0x3fe0000000000000;
      param_2 = 0x3fe0000000000000;
      func_0x000107c54aac(0x3fe0000000000000,0x3fe0000000000000,uVar10);
      lVar6 = 2;
      func_0x000107c54aa4(uVar10);
    }
    func_0x000107c5d284();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  pcStack_78 = FUN_101470420;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000107c3e208(*(undefined8 *)(lVar6 + _DAT_112da1130));
  puStack_d8 = (undefined *)0x0;
  uStack_d0 = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  func_0x000107c5fb78(uVar10);
  func_0x000107c6142c(uStack_d0);
  uVar10 = *(undefined8 *)(lVar6 + _DAT_112da1120);
  puStack_d8 = (undefined *)0x0;
  uVar2 = uVar10;
  func_0x000107c4b948();
  puVar3 = puStack_d8;
  if ((int)uVar2 == 0) {
    puVar7 = puStack_d8;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(puVar7);
    func_0x000107c61654();
    puStack_d8 = (undefined *)0x0;
    uStack_d0 = 0xe000000000000000;
    func_0x000107c602fc(0x41);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    puVar7 = (undefined *)0x112d393f0;
    apuStack_e8[0] = puVar3;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    param_4 = &puStack_d8;
    param_6 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
    func_0x000107c603d0(apuStack_e8);
    func_0x000107c614ac(puVar3);
    uVar10 = uStack_d0;
    func_0x000107c6142c();
  }
  else {
    func_0x000107c61174();
    puVar7 = (undefined *)0x1;
    uVar2 = uVar10;
    func_0x000107c49dbc();
    if (((int)uVar2 != 0) && (uVar2 = uVar10, func_0x000107c49dc0(), (int)uVar2 != 0)) {
      func_0x000107c54aac(param_1,param_2,uVar10);
      puVar7 = (undefined *)0x1;
      func_0x000107c54aa4(uVar10);
    }
    func_0x000107c5d284();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  func_0x000107c60e78();
  pcStack_f8 = FUN_101470618;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_100 = &puStack_80;
  func_0x000107c3e208(*(undefined8 *)(puVar7 + _DAT_112da1130));
  puStack_158 = (undefined *)0x0;
  ppuStack_150 = (undefined **)0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  ppuVar5 = param_4;
  func_0x000107c5fb78(uVar10);
  func_0x000107c6142c(ppuStack_150);
  ppuVar11 = *(undefined ***)(puVar7 + _DAT_112da1120);
  puStack_158 = (undefined *)0x0;
  ppuVar4 = ppuVar11;
  func_0x000107c4b948();
  puStack_188 = puStack_158;
  if ((int)ppuVar4 == 0) {
    puVar3 = puStack_158;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(puVar3);
    func_0x000107c61654();
    puStack_158 = (undefined *)0x0;
    ppuStack_150 = (undefined **)0xe000000000000000;
    func_0x000107c602fc(0x41);
    ppuVar11 = &puStack_158;
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    uVar8 = 0x112d393f0;
    apuStack_168[0] = puStack_188;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    ppuVar5 = &puStack_158;
    func_0x000107c603d0(apuStack_168,ppuVar5,uVar8,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(puStack_188);
    ppuVar4 = ppuStack_150;
    func_0x000107c6142c();
    puStack_198 = puStack_188;
  }
  else {
    func_0x000107c61174();
    ppuVar4 = ppuVar11;
    func_0x000107c4a444();
    uVar1 = (uint)param_6 & 1;
    uVar8 = (ulong)uVar1;
    if (uVar1 != (uint)ppuVar4) {
      func_0x000107c59318(ppuVar11);
    }
    ppuVar4 = ppuVar11;
    func_0x000107c5d284();
    puStack_188 = param_6;
    puStack_198 = puVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  func_0x000107c60e78();
  uStack_1b0 = 0xd00000000000003e;
  pcStack_178 = FUN_1014707f0;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1a8 = uVar10;
  ppuStack_1a0 = param_4;
  ppuStack_190 = ppuVar11;
  pppuStack_180 = &ppuStack_100;
  func_0x000107c3e208(*(undefined8 *)(uVar8 + _DAT_112da1130));
  apuStack_1c8[0] = (undefined *)0x0;
  apuStack_1c8[1] = (undefined *)0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  func_0x000107c5fb78(ppuVar4,ppuVar5);
  func_0x000107c6142c(apuStack_1c8[1]);
  puVar7 = *(undefined **)(uVar8 + _DAT_112da1120);
  apuStack_1c8[0] = (undefined *)0x0;
  uVar2 = puVar7;
  func_0x000107c4b948();
  puVar3 = apuStack_1c8[0];
  if ((int)uVar2 == 0) {
    puVar7 = apuStack_1c8[0];
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(puVar7);
    func_0x000107c61654();
    apuStack_1c8[0] = (undefined *)0x0;
    apuStack_1c8[1] = (undefined *)0xe000000000000000;
    func_0x000107c602fc(0x41);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    pcVar9 = (code *)0x112d393f0;
    apuStack_1d8[0] = puVar3;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    ppuVar5 = apuStack_1c8;
    func_0x000107c603d0(apuStack_1d8,ppuVar5,pcVar9,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(puVar3);
    puVar7 = apuStack_1c8[1];
    func_0x000107c6142c(apuStack_1c8[1]);
  }
  else {
    func_0x000107c61174();
    pcVar9 = (code *)0x0;
    uVar2 = puVar7;
    func_0x000107c49dbc();
    if ((int)uVar2 != 0) {
      pcVar9 = (code *)0x0;
      func_0x000107c54aa4(puVar7);
    }
    func_0x000107c5d284(puVar7);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  func_0x000107c60e78();
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c3e208(*(undefined8 *)((long)apuStack_1c8 + _DAT_112da1130));
  uStack_248 = 0;
  uStack_240 = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  func_0x000107c5fb78(puVar7,ppuVar5);
  func_0x000107c6142c(uStack_240);
  uVar12 = *(undefined8 *)((long)apuStack_1c8 + _DAT_112da1120);
  uStack_248 = 0;
  uVar10 = uVar12;
  func_0x000107c4b948();
  uVar2 = uStack_248;
  if ((int)uVar10 == 0) {
    uVar10 = uStack_248;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar10);
    func_0x000107c61654();
    uStack_248 = 0;
    uStack_240 = 0xe000000000000000;
    func_0x000107c602fc(0x41);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    uVar10 = 0x112d393f0;
    auStack_258[0] = uVar2;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(auStack_258,&uStack_248,uVar10,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(uVar2);
    func_0x000107c6142c(uStack_240);
  }
  else {
    func_0x000107c61174();
    (*pcVar9)(uVar12);
    func_0x000107c5d284(uVar12);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 101470420; end: 101470617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101470420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  long param_5,undefined *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  ulong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 auStack_1e8 [2];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined *apuStack_168 [2];
  undefined *apuStack_158 [2];
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined *apuStack_f8 [2];
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *apuStack_78 [2];
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c3e208(*(undefined8 *)(param_5 + _DAT_112da1130));
  puStack_68 = (undefined *)0x0;
  uStack_60 = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  func_0x000107c5fb78(param_3);
  func_0x000107c6142c(uStack_60);
  uVar9 = *(undefined8 *)(param_5 + _DAT_112da1120);
  puStack_68 = (undefined *)0x0;
  uVar2 = uVar9;
  func_0x000107c4b948();
  puVar3 = puStack_68;
  if ((int)uVar2 == 0) {
    puVar6 = puStack_68;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(puVar6);
    func_0x000107c61654();
    puStack_68 = (undefined *)0x0;
    uStack_60 = 0xe000000000000000;
    func_0x000107c602fc(0x41);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    puVar6 = (undefined *)0x112d393f0;
    apuStack_78[0] = puVar3;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    param_4 = &puStack_68;
    param_6 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
    func_0x000107c603d0(apuStack_78);
    func_0x000107c614ac(puVar3);
    uVar9 = uStack_60;
    func_0x000107c6142c();
  }
  else {
    func_0x000107c61174();
    puVar6 = (undefined *)0x1;
    uVar2 = uVar9;
    func_0x000107c49dbc();
    if (((int)uVar2 != 0) && (uVar2 = uVar9, func_0x000107c49dc0(), (int)uVar2 != 0)) {
      func_0x000107c54aac(param_1,param_2,uVar9);
      puVar6 = (undefined *)0x1;
      func_0x000107c54aa4(uVar9);
    }
    func_0x000107c5d284();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  pcStack_88 = FUN_101470618;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x000107c3e208(*(undefined8 *)(puVar6 + _DAT_112da1130));
  puStack_e8 = (undefined *)0x0;
  ppuStack_e0 = (undefined **)0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  ppuVar5 = param_4;
  func_0x000107c5fb78(uVar9);
  func_0x000107c6142c(ppuStack_e0);
  ppuVar10 = *(undefined ***)(puVar6 + _DAT_112da1120);
  puStack_e8 = (undefined *)0x0;
  ppuVar4 = ppuVar10;
  func_0x000107c4b948();
  puStack_118 = puStack_e8;
  if ((int)ppuVar4 == 0) {
    puVar3 = puStack_e8;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(puVar3);
    func_0x000107c61654();
    puStack_e8 = (undefined *)0x0;
    ppuStack_e0 = (undefined **)0xe000000000000000;
    func_0x000107c602fc(0x41);
    ppuVar10 = &puStack_e8;
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    uVar7 = 0x112d393f0;
    apuStack_f8[0] = puStack_118;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    ppuVar5 = &puStack_e8;
    func_0x000107c603d0(apuStack_f8,ppuVar5,uVar7,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(puStack_118);
    ppuVar4 = ppuStack_e0;
    func_0x000107c6142c();
    puStack_128 = puStack_118;
  }
  else {
    func_0x000107c61174();
    ppuVar4 = ppuVar10;
    func_0x000107c4a444();
    uVar1 = (uint)param_6 & 1;
    uVar7 = (ulong)uVar1;
    if (uVar1 != (uint)ppuVar4) {
      func_0x000107c59318(ppuVar10);
    }
    ppuVar4 = ppuVar10;
    func_0x000107c5d284();
    puStack_118 = param_6;
    puStack_128 = puVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  func_0x000107c60e78();
  uStack_140 = 0xd00000000000003e;
  pcStack_108 = FUN_1014707f0;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_138 = uVar9;
  ppuStack_130 = param_4;
  ppuStack_120 = ppuVar10;
  ppuStack_110 = &puStack_90;
  func_0x000107c3e208(*(undefined8 *)(uVar7 + _DAT_112da1130));
  apuStack_158[0] = (undefined *)0x0;
  apuStack_158[1] = (undefined *)0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  func_0x000107c5fb78(ppuVar4,ppuVar5);
  func_0x000107c6142c(apuStack_158[1]);
  puVar6 = *(undefined **)(uVar7 + _DAT_112da1120);
  apuStack_158[0] = (undefined *)0x0;
  uVar2 = puVar6;
  func_0x000107c4b948();
  puVar3 = apuStack_158[0];
  if ((int)uVar2 == 0) {
    puVar6 = apuStack_158[0];
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(puVar6);
    func_0x000107c61654();
    apuStack_158[0] = (undefined *)0x0;
    apuStack_158[1] = (undefined *)0xe000000000000000;
    func_0x000107c602fc(0x41);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    pcVar8 = (code *)0x112d393f0;
    apuStack_168[0] = puVar3;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    ppuVar5 = apuStack_158;
    func_0x000107c603d0(apuStack_168,ppuVar5,pcVar8,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(puVar3);
    puVar6 = apuStack_158[1];
    func_0x000107c6142c(apuStack_158[1]);
  }
  else {
    func_0x000107c61174();
    pcVar8 = (code *)0x0;
    uVar2 = puVar6;
    func_0x000107c49dbc();
    if ((int)uVar2 != 0) {
      pcVar8 = (code *)0x0;
      func_0x000107c54aa4(puVar6);
    }
    func_0x000107c5d284(puVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  func_0x000107c60e78();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c3e208(*(undefined8 *)((long)apuStack_158 + _DAT_112da1130));
  uStack_1d8 = 0;
  uStack_1d0 = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  func_0x000107c5fb78(puVar6,ppuVar5);
  func_0x000107c6142c(uStack_1d0);
  uVar11 = *(undefined8 *)((long)apuStack_158 + _DAT_112da1120);
  uStack_1d8 = 0;
  uVar9 = uVar11;
  func_0x000107c4b948();
  uVar2 = uStack_1d8;
  if ((int)uVar9 == 0) {
    uVar9 = uStack_1d8;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar9);
    func_0x000107c61654();
    uStack_1d8 = 0;
    uStack_1d0 = 0xe000000000000000;
    func_0x000107c602fc(0x41);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    uVar9 = 0x112d393f0;
    auStack_1e8[0] = uVar2;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(auStack_1e8,&uStack_1d8,uVar9,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(uVar2);
    func_0x000107c6142c(uStack_1d0);
  }
  else {
    func_0x000107c61174();
    (*pcVar8)(uVar11);
    func_0x000107c5d284(uVar11);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 101470618; end: 1014707ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101470618(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 auStack_168 [2];
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long alStack_e8 [2];
  long alStack_d8 [5];
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long alStack_78 [2];
  long lStack_68;
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c3e208(*(undefined8 *)(param_3 + _DAT_112da1130));
  lStack_68 = 0;
  plStack_60 = (long *)0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  plVar6 = param_2;
  func_0x000107c5fb78(param_1);
  func_0x000107c6142c(plStack_60);
  plVar10 = *(long **)(param_3 + _DAT_112da1120);
  lStack_68 = 0;
  plVar2 = plVar10;
  func_0x000107c4b948();
  lStack_98 = lStack_68;
  if ((int)plVar2 == 0) {
    lVar3 = lStack_68;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar3);
    func_0x000107c61654();
    lStack_68 = 0;
    plStack_60 = (long *)0xe000000000000000;
    func_0x000107c602fc(0x41);
    plVar10 = &lStack_68;
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    uVar7 = 0x112d393f0;
    alStack_78[0] = lStack_98;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar6 = &lStack_68;
    func_0x000107c603d0(alStack_78,plVar6,uVar7,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(lStack_98);
    plVar2 = plStack_60;
    func_0x000107c6142c();
    lStack_a8 = lStack_98;
  }
  else {
    func_0x000107c61174();
    plVar2 = plVar10;
    func_0x000107c4a444();
    uVar1 = (uint)param_4 & 1;
    uVar7 = (ulong)uVar1;
    if (uVar1 != (uint)plVar2) {
      func_0x000107c59318(plVar10);
    }
    plVar2 = plVar10;
    func_0x000107c5d284();
    lStack_98 = param_4;
    lStack_a8 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  alStack_d8[3] = 0xd00000000000003e;
  pcStack_88 = FUN_1014707f0;
  alStack_d8[2] = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_d8[4] = param_1;
  plStack_b0 = param_2;
  plStack_a0 = plVar10;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x000107c3e208(*(undefined8 *)(uVar7 + _DAT_112da1130));
  alStack_d8[0] = 0;
  alStack_d8[1] = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  func_0x000107c5fb78(plVar2,plVar6);
  func_0x000107c6142c(alStack_d8[1]);
  lVar9 = *(undefined8 *)(uVar7 + _DAT_112da1120);
  alStack_d8[0] = 0;
  uVar4 = lVar9;
  func_0x000107c4b948();
  lVar3 = alStack_d8[0];
  if ((int)uVar4 == 0) {
    lVar9 = alStack_d8[0];
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar9);
    func_0x000107c61654();
    alStack_d8[0] = 0;
    alStack_d8[1] = 0xe000000000000000;
    func_0x000107c602fc(0x41);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    pcVar8 = (code *)0x112d393f0;
    alStack_e8[0] = lVar3;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar6 = alStack_d8;
    func_0x000107c603d0(alStack_e8,plVar6,pcVar8,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(lVar3);
    lVar9 = alStack_d8[1];
    func_0x000107c6142c(alStack_d8[1]);
  }
  else {
    func_0x000107c61174();
    pcVar8 = (code *)0x0;
    uVar4 = lVar9;
    func_0x000107c49dbc();
    if ((int)uVar4 != 0) {
      pcVar8 = (code *)0x0;
      func_0x000107c54aa4(lVar9);
    }
    func_0x000107c5d284(lVar9);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_d8[2]) {
    return;
  }
  func_0x000107c60e78();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c3e208(*(undefined8 *)((long)alStack_d8 + _DAT_112da1130));
  uStack_158 = 0;
  uStack_150 = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  func_0x000107c5fb78(lVar9,plVar6);
  func_0x000107c6142c(uStack_150);
  uVar11 = *(undefined8 *)((long)alStack_d8 + _DAT_112da1120);
  uStack_158 = 0;
  uVar5 = uVar11;
  func_0x000107c4b948();
  uVar4 = uStack_158;
  if ((int)uVar5 == 0) {
    uVar5 = uStack_158;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar5);
    func_0x000107c61654();
    uStack_158 = 0;
    uStack_150 = 0xe000000000000000;
    func_0x000107c602fc(0x41);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    uVar5 = 0x112d393f0;
    auStack_168[0] = uVar4;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(auStack_168,&uStack_158,uVar5,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(uVar4);
    func_0x000107c6142c(uStack_150);
  }
  else {
    func_0x000107c61174();
    (*pcVar8)(uVar11);
    func_0x000107c5d284(uVar11);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1014707f0; end: 1014709bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014707f0(undefined8 param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 auStack_e8 [2];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long alStack_68 [2];
  long alStack_58 [3];
  
  alStack_58[2] = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c3e208(*(undefined8 *)(param_3 + _DAT_112da1130));
  alStack_58[0] = 0;
  alStack_58[1] = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c6142c(alStack_58[1]);
  lVar5 = *(undefined8 *)(param_3 + _DAT_112da1120);
  alStack_58[0] = 0;
  uVar1 = lVar5;
  func_0x000107c4b948();
  lVar2 = alStack_58[0];
  if ((int)uVar1 == 0) {
    lVar5 = alStack_58[0];
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar5);
    func_0x000107c61654();
    alStack_58[0] = 0;
    alStack_58[1] = 0xe000000000000000;
    func_0x000107c602fc(0x41);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    pcVar4 = (code *)0x112d393f0;
    alStack_68[0] = lVar2;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    param_2 = alStack_58;
    func_0x000107c603d0(alStack_68,param_2,pcVar4,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(lVar2);
    lVar5 = alStack_58[1];
    func_0x000107c6142c(alStack_58[1]);
  }
  else {
    func_0x000107c61174();
    pcVar4 = (code *)0x0;
    uVar1 = lVar5;
    func_0x000107c49dbc();
    if ((int)uVar1 != 0) {
      pcVar4 = (code *)0x0;
      func_0x000107c54aa4(lVar5);
    }
    func_0x000107c5d284(lVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_58[2]) {
    return;
  }
  func_0x000107c60e78();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c3e208(*(undefined8 *)((long)alStack_58 + _DAT_112da1130));
  uStack_d8 = 0;
  uStack_d0 = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  func_0x000107c5fb78(lVar5,param_2);
  func_0x000107c6142c(uStack_d0);
  uVar6 = *(undefined8 *)((long)alStack_58 + _DAT_112da1120);
  uStack_d8 = 0;
  uVar3 = uVar6;
  func_0x000107c4b948();
  uVar1 = uStack_d8;
  if ((int)uVar3 == 0) {
    uVar3 = uStack_d8;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar3);
    func_0x000107c61654();
    uStack_d8 = 0;
    uStack_d0 = 0xe000000000000000;
    func_0x000107c602fc(0x41);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    uVar3 = 0x112d393f0;
    auStack_e8[0] = uVar1;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(auStack_e8,&uStack_d8,uVar3,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(uVar1);
    func_0x000107c6142c(uStack_d0);
  }
  else {
    func_0x000107c61174();
    (*pcVar4)(uVar6);
    func_0x000107c5d284(uVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1014709bc; end: 101470b87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014709bc(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 auStack_78 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112da1130));
  uStack_68 = 0;
  uStack_60 = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c6142c(uStack_60);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112da1120);
  uStack_68 = 0;
  uVar1 = uVar3;
  func_0x000107c4b948();
  uVar2 = uStack_68;
  if ((int)uVar1 == 0) {
    uVar1 = uStack_68;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar1);
    func_0x000107c61654();
    uStack_68 = 0;
    uStack_60 = 0xe000000000000000;
    func_0x000107c602fc(0x41);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    uVar1 = 0x112d393f0;
    auStack_78[0] = uVar2;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(auStack_78,&uStack_68,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(uVar2);
    func_0x000107c6142c(uStack_60);
  }
  else {
    func_0x000107c61174();
    (*param_3)(uVar3);
    func_0x000107c5d284(uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 101470b88; end: 101470b8b;  */

void FUN_101470b88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 101470b8c; end: 101470dd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101470b8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong auStack_78 [2];
  ulong uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0;
  uStack_60 = 0xe000000000000000;
  func_0x000107c602fc(0x2a);
  func_0x000107c5fb78(0xd000000000000028,0x800000010ef83340);
  uVar8 = param_1;
  func_0x000107c5fe00(&uStack_68,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_60);
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112da1130));
  uStack_68 = 0;
  uStack_60 = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  puVar6 = (ulong *)0x800000010ef83370;
  func_0x000107c5fb78(0xd000000000000011);
  func_0x000107c6142c(uStack_60);
  uVar7 = *(ulong *)(unaff_x20 + _DAT_112da1120);
  uStack_68 = 0;
  uVar3 = uVar7;
  func_0x000107c4b948();
  uVar4 = uStack_68;
  if ((int)uVar3 == 0) {
    uVar3 = uStack_68;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar3);
    func_0x000107c61654();
    uStack_68 = 0;
    uStack_60 = 0xe000000000000000;
    func_0x000107c602fc(0x41);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    uVar5 = 0x112d393f0;
    auStack_78[0] = uVar4;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar6 = &uStack_68;
    func_0x000107c603d0(auStack_78,puVar6,uVar5,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c6142c(uStack_60);
    func_0x000107c614ac();
  }
  else {
    func_0x000107c61174();
    func_0x000107c4cee0(uVar7);
    if (((float)uVar8 < (float)param_1) &&
       (func_0x000107c4c834(uVar7), (float)param_1 < (float)uVar8)) {
      func_0x000107c547c4(uVar7);
      uVar8 = param_1;
    }
    func_0x000107c5d284();
    uVar4 = uVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  uStack_100 = 0;
  uStack_f8 = 0xe000000000000000;
  func_0x000107c602fc(0x6c);
  func_0x000107c5fb78(0xd000000000000033,0x800000010ef83390);
  uVar5 = 0;
  uStack_110 = uVar8;
  uStack_108 = param_2;
  func_0x000100f6e714(0);
  func_0x000107c603d0(&uStack_110,&uStack_100,uVar5,PTR___ss26DefaultStringInterpolationVN_11034ec00
                      ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0xd000000000000015,0x800000010ef820a0);
  bVar2 = (uVar4 & 1) == 0;
  uVar5 = 0x65757274;
  if (bVar2) {
    uVar5 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0xd00000000000001e,0x800000010ef833d0);
  bVar2 = ((ulong)puVar6 & 1) == 0;
  uVar5 = 0x65757274;
  if (bVar2) {
    uVar5 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  uVar5 = uStack_f8;
  func_0x000107c6142c(uStack_f8);
  FUN_10146fd78();
  FUN_1014725fc(uVar8,param_2,&uStack_68,uVar4,puVar6,uVar5);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 101470dd4; end: 101470f6b;  */

void FUN_101470dd4(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x6c);
  func_0x000107c5fb78(0xd000000000000033,0x800000010ef83390);
  uVar3 = 0;
  uStack_90 = param_1;
  uStack_88 = param_2;
  func_0x000100f6e714(0);
  func_0x000107c603d0(&uStack_90,&uStack_80,uVar3,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0xd000000000000015,0x800000010ef820a0);
  bVar2 = (param_3 & 1) == 0;
  uVar3 = 0x65757274;
  if (bVar2) {
    uVar3 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0xd00000000000001e,0x800000010ef833d0);
  bVar2 = (param_4 & 1) == 0;
  uVar3 = 0x65757274;
  if (bVar2) {
    uVar3 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  uVar3 = uStack_78;
  func_0x000107c6142c(uStack_78);
  FUN_10146fd78();
  FUN_1014725fc(param_1,param_2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101470f6c; end: 101471037;  */

void FUN_101470f6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x36);
  func_0x000107c5fb78(0xd000000000000034,0x800000010ef833f0);
  uVar1 = 0;
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000100f6e714(0);
  func_0x000107c603d0(&uStack_50,&uStack_40,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_38;
  func_0x000107c6142c(uStack_38);
  func_0x00010146fe3c();
  FUN_101472ca0(param_1,param_2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101471038; end: 1014711cf;  */

void FUN_101471038(ulong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  
  func_0x000107c602fc(0x29);
  func_0x000107c6142c(0xe000000000000000);
  bVar2 = (param_1 & 1) == 0;
  uVar3 = 0x65757274;
  if (bVar2) {
    uVar3 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  uVar3 = 0x800000010ef83430;
  func_0x000107c6142c(0x800000010ef83430);
  func_0x00010146fe3c();
  FUN_101472ec4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1014711d0; end: 10147158b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014711d0(uint param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  long unaff_x20;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  undefined8 ***unaff_x23;
  undefined8 unaff_x24;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_208;
  undefined8 **ppuStack_200;
  undefined8 **ppuStack_1f8;
  undefined8 **ppuStack_1f0;
  undefined8 **ppuStack_1e8;
  undefined8 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined8 **appuStack_1c8 [2];
  undefined8 **ppuStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 **ppuStack_198;
  undefined8 **ppuStack_190;
  undefined8 **ppuStack_188;
  undefined8 **ppuStack_180;
  undefined8 **ppuStack_178;
  undefined8 **ppuStack_170;
  undefined8 uStack_168;
  undefined8 **appuStack_158 [2];
  undefined8 **ppuStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 **ppuStack_128;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined1 **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 **appuStack_e8 [2];
  undefined8 **ppuStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 **ppuStack_b8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  pppuVar9 = (undefined8 ***)(ulong)(param_1 & 1);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar10 = *(undefined8 ****)(unaff_x20 + _DAT_112da1120);
  pppuVar11 = pppuVar10;
  func_0x000107c43698();
  if ((param_1 & 1) != (uint)(pppuVar11 == (undefined8 ***)0x1)) {
    unaff_x24 = 0xd00000000000003e;
    ppuStack_70 = (undefined8 **)0x0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x23);
    func_0x000107c6142c(uStack_68);
    ppuStack_70 = (undefined8 ***)0xd000000000000021;
    uStack_68 = 0x800000010ef83490;
    bVar3 = (param_1 & 1) == 0;
    uVar4 = 0x65757274;
    if (bVar3) {
      uVar4 = 0x65736c6166;
    }
    unaff_x23 = (undefined8 ***)0xe400000000000000;
    if (bVar3) {
      unaff_x23 = (undefined8 ***)0xe500000000000000;
    }
    pppuVar9 = &ppuStack_70;
    func_0x000107c5fb78(uVar4,unaff_x23);
    func_0x000107c6142c(unaff_x23);
    func_0x000107c6142c(uStack_68);
    pppuVar11 = pppuVar10;
    func_0x000107c448b0();
    if (((int)pppuVar11 != 0) && (pppuVar11 = pppuVar10, func_0x000107c49dac(), (int)pppuVar11 != 0)
       ) {
      if ((param_1 & 1) == 0) {
        pppuVar9 = pppuVar10;
        func_0x000107c49db0();
        if ((int)pppuVar9 != 0) {
          func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112da1130));
          ppuStack_70 = (undefined8 **)0x0;
          uStack_68 = 0xe000000000000000;
          func_0x000107c602fc(0x40);
          func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
          func_0x000107c5fb78(0x73616c6620746553,0xed000066666f2068);
          func_0x000107c6142c(uStack_68);
          ppuStack_70 = (undefined8 ***)0x0;
          pppuVar9 = pppuVar10;
          func_0x000107c4b948();
          if ((int)pppuVar9 == 0) goto LAB_10147143c;
          func_0x000107c61174(ppuStack_70);
LAB_10147142c:
          func_0x000107c54a6c(pppuVar10);
          func_0x000107c5d284(pppuVar10);
        }
      }
      else {
        pppuVar9 = pppuVar10;
        func_0x000107c49db0();
        if ((int)pppuVar9 != 0) {
          func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112da1130));
          ppuStack_70 = (undefined8 **)0x0;
          uStack_68 = 0xe000000000000000;
          func_0x000107c602fc(0x40);
          func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
          func_0x000107c5fb78(0x73616c6620746553,0xec0000006e6f2068);
          func_0x000107c6142c(uStack_68);
          ppuStack_70 = (undefined8 ***)0x0;
          pppuVar9 = pppuVar10;
          func_0x000107c4b948();
          if ((int)pppuVar9 != 0) {
            func_0x000107c61174(ppuStack_70);
            goto LAB_10147142c;
          }
LAB_10147143c:
          unaff_x23 = (undefined8 ***)ppuStack_70;
          pppuVar9 = (undefined8 ***)ppuStack_70;
          func_0x000107c61174(ppuStack_70);
          func_0x000107c5ed30();
          func_0x000107c61170(pppuVar9);
          func_0x000107c61654();
          ppuStack_70 = (undefined8 ***)0x0;
          uStack_68 = 0xe000000000000000;
          func_0x000107c602fc(0x41);
          func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
          uVar4 = 0x112d393f0;
          ppuStack_78 = unaff_x23;
          func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
          func_0x000107c603d0(&ppuStack_78,&ppuStack_70,uVar4,
                              PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          func_0x000107c6142c(uStack_68);
          func_0x000107c614ac(unaff_x23);
        }
      }
      pppuVar9 = _DAT_112da10e0;
      pppuVar11 = (undefined8 ***)(unaff_x20 + (long)_DAT_112da10e0);
      func_0x000107c61428(pppuVar11,&ppuStack_70,0,0);
      if (*(char *)(unaff_x20 + (long)pppuVar9) == '\x01') {
        func_0x000100083b20(&ppuStack_78);
        pppuVar11 = (undefined8 ***)ppuStack_78;
        pppuVar9 = (undefined8 ***)ppuStack_78;
        func_0x000107c41948();
        func_0x000107c61180();
        func_0x000107c615e8();
        if (pppuVar9 != (undefined8 ***)0x0) {
          func_0x000107c41a48(pppuVar9);
          pppuVar11 = pppuVar9;
          func_0x000107c615e8();
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  uStack_c0 = unaff_x24;
  ppuStack_b8 = unaff_x23;
  puStack_90 = &stack0xfffffffffffffff0;
  pcStack_88 = FUN_10147158c;
  uVar1 = (uint)pppuVar11 & 1;
  pppuVar10 = (undefined8 ***)(ulong)uVar1;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar7 = *(undefined8 ****)((long)pppuVar9 + _DAT_112da1120);
  pppuVar5 = pppuVar7;
  func_0x000107c5cc8c();
  if (uVar1 == (pppuVar5 == (undefined8 ***)0x1)) goto LAB_101471898;
  unaff_x24 = 0xd00000000000003e;
  ppuStack_d8 = (undefined8 **)0x0;
  uStack_d0 = 0xe000000000000000;
  func_0x000107c602fc(0x23);
  func_0x000107c6142c(uStack_d0);
  ppuStack_d8 = (undefined8 ***)0xd000000000000021;
  uStack_d0 = 0x800000010ef834c0;
  bVar3 = ((ulong)pppuVar11 & 1) == 0;
  uVar4 = 0x65757274;
  if (bVar3) {
    uVar4 = 0x65736c6166;
  }
  unaff_x23 = (undefined8 ***)0xe400000000000000;
  if (bVar3) {
    unaff_x23 = (undefined8 ***)0xe500000000000000;
  }
  pppuVar10 = &ppuStack_d8;
  func_0x000107c5fb78(uVar4,unaff_x23);
  func_0x000107c6142c(unaff_x23);
  func_0x000107c6142c(uStack_d0);
  pppuVar5 = pppuVar7;
  func_0x000107c44bc8();
  if (((int)pppuVar5 == 0) || (pppuVar5 = pppuVar7, func_0x000107c4a600(), (int)pppuVar5 == 0))
  goto LAB_101471898;
  if (((ulong)pppuVar11 & 1) == 0) {
    pppuVar5 = pppuVar7;
    func_0x000107c4a604();
    if ((int)pppuVar5 == 0) goto LAB_101471898;
    func_0x000107c3e208(*(undefined8 *)((long)pppuVar9 + _DAT_112da1130));
    ppuStack_d8 = (undefined8 **)0x0;
    uStack_d0 = 0xe000000000000000;
    func_0x000107c602fc(0x40);
    func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
    func_0x000107c5fb78(0x63726f7420746553,0xed000066666f2068);
    func_0x000107c6142c(uStack_d0);
    ppuStack_d8 = (undefined8 ***)0x0;
    pppuVar11 = pppuVar7;
    func_0x000107c4b948();
    if ((int)pppuVar11 == 0) goto LAB_1014717f4;
    func_0x000107c61174();
  }
  else {
    pppuVar5 = pppuVar7;
    func_0x000107c4a604();
    if ((int)pppuVar5 == 0) goto LAB_101471898;
    func_0x000107c3e208(*(undefined8 *)((long)pppuVar9 + _DAT_112da1130));
    ppuStack_d8 = (undefined8 **)0x0;
    uStack_d0 = 0xe000000000000000;
    func_0x000107c602fc(0x40);
    func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
    func_0x000107c5fb78(0x63726f7420746553,0xec0000006e6f2068);
    func_0x000107c6142c(uStack_d0);
    ppuStack_d8 = (undefined8 ***)0x0;
    pppuVar11 = pppuVar7;
    func_0x000107c4b948();
    if ((int)pppuVar11 == 0) {
LAB_1014717f4:
      pppuVar7 = (undefined8 ***)ppuStack_d8;
      pppuVar11 = (undefined8 ***)0xe000000000000000;
      pppuVar9 = (undefined8 ***)ppuStack_d8;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(pppuVar9);
      func_0x000107c61654();
      ppuStack_d8 = (undefined8 ***)0x0;
      uStack_d0 = 0xe000000000000000;
      func_0x000107c602fc(0x41);
      pppuVar10 = &ppuStack_d8;
      func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
      uVar4 = 0x112d393f0;
      appuStack_e8[0] = pppuVar7;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c603d0(appuStack_e8,&ppuStack_d8,uVar4,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c6142c(uStack_d0);
      func_0x000107c614ac(pppuVar7);
      pppuVar9 = pppuVar7;
      goto LAB_101471898;
    }
    func_0x000107c61174();
  }
  pppuVar10 = &ppuStack_d8;
  pppuVar11 = (undefined8 ***)0xe000000000000000;
  func_0x000107c59f28(pppuVar7);
  func_0x000107c5d284(pppuVar7);
LAB_101471898:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  func_0x000107c60e78();
  uStack_f8 = 0x1014718cc;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = *(undefined8 ****)((long)pppuVar10 + _DAT_112da1120);
  pppuVar5 = pppuVar8;
  uStack_130 = unaff_x24;
  ppuStack_128 = unaff_x23;
  ppuStack_120 = pppuVar11;
  ppuStack_118 = pppuVar9;
  ppuStack_110 = pppuVar10;
  ppuStack_108 = pppuVar7;
  ppuStack_100 = &puStack_90;
  func_0x000107c3d188();
  pppuVar7 = pppuVar8;
  if (pppuVar5 != (undefined8 ***)0x0) {
    pppuVar11 = (undefined8 ***)0xd00000000000003c;
    func_0x000107c3e208(*(undefined8 *)((long)pppuVar10 + _DAT_112da1130));
    unaff_x23 = (undefined8 ***)0xe000000000000000;
    ppuStack_148 = (undefined8 **)0x0;
    uStack_140 = 0xe000000000000000;
    func_0x000107c602fc(0x40);
    func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
    pppuVar10 = &ppuStack_148;
    func_0x000107c5fb78(0xd00000000000003c,0x800000010ef83510);
    func_0x000107c6142c(uStack_140);
    ppuStack_148 = (undefined8 ***)0x0;
    pppuVar9 = pppuVar8;
    func_0x000107c4b948();
    pppuVar7 = (undefined8 ***)ppuStack_148;
    if ((int)pppuVar9 == 0) {
      pppuVar9 = (undefined8 ***)ppuStack_148;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(pppuVar9);
      func_0x000107c61654();
      ppuStack_148 = (undefined8 ***)0x0;
      uStack_140 = 0xe000000000000000;
      func_0x000107c602fc(0x41);
      pppuVar10 = &ppuStack_148;
      func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
      uVar4 = 0x112d393f0;
      appuStack_158[0] = pppuVar7;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c603d0(appuStack_158,&ppuStack_148,uVar4,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c6142c(uStack_140);
      func_0x000107c614ac(pppuVar7);
      pppuVar9 = pppuVar7;
    }
    else {
      func_0x000107c61174();
      func_0x000107c57834(pppuVar8);
      func_0x000107c5d284(pppuVar8);
      pppuVar7 = pppuVar8;
      pppuVar9 = (undefined8 ***)"Update device format";
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  func_0x000107c60e78();
  uStack_168 = 0x101471a98;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = *(undefined8 ****)((long)pppuVar10 + _DAT_112da1120);
  pppuVar5 = pppuVar8;
  uStack_1a0 = unaff_x24;
  ppuStack_198 = unaff_x23;
  ppuStack_190 = pppuVar11;
  ppuStack_188 = pppuVar9;
  ppuStack_180 = pppuVar10;
  ppuStack_178 = pppuVar7;
  ppuStack_170 = &ppuStack_100;
  func_0x000107c3d188();
  pppuVar7 = pppuVar8;
  if (pppuVar5 != (undefined8 ***)0x0) {
    pppuVar11 = (undefined8 ***)0xd000000000000036;
    func_0x000107c3e208(*(undefined8 *)((long)pppuVar10 + _DAT_112da1130));
    ppuStack_1b8 = (undefined8 **)0x0;
    uStack_1b0 = 0xe000000000000000;
    func_0x000107c602fc(0x40);
    func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
    pppuVar10 = &ppuStack_1b8;
    func_0x000107c5fb78(0xd000000000000036,0x800000010ef83550);
    func_0x000107c6142c(uStack_1b0);
    ppuStack_1b8 = (undefined8 ***)0x0;
    pppuVar9 = pppuVar8;
    func_0x000107c4b948();
    pppuVar7 = (undefined8 ***)ppuStack_1b8;
    if ((int)pppuVar9 == 0) {
      pppuVar9 = (undefined8 ***)ppuStack_1b8;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(pppuVar9);
      func_0x000107c61654();
      ppuStack_1b8 = (undefined8 ***)0x0;
      uStack_1b0 = 0xe000000000000000;
      func_0x000107c602fc(0x41);
      pppuVar10 = &ppuStack_1b8;
      func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
      uVar4 = 0x112d393f0;
      appuStack_1c8[0] = pppuVar7;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c603d0(appuStack_1c8,&ppuStack_1b8,uVar4,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c6142c(uStack_1b0);
      func_0x000107c614ac(pppuVar7);
      pppuVar9 = pppuVar7;
    }
    else {
      func_0x000107c61174();
      func_0x000107c57834(pppuVar8);
      func_0x000107c5d284(pppuVar8);
      pppuVar7 = pppuVar8;
      pppuVar9 = (undefined8 ***)0x10ef83550;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  func_0x000107c60e78();
  pcStack_1d8 = FUN_101471c64;
  uStack_220 = 0;
  uStack_218 = 0xe000000000000000;
  ppuStack_200 = pppuVar11;
  ppuStack_1f8 = pppuVar9;
  ppuStack_1f0 = pppuVar10;
  ppuStack_1e8 = pppuVar7;
  ppuStack_1e0 = &ppuStack_170;
  func_0x000107c602fc(0x49);
  func_0x000107c5fb78(0xd000000000000047,0x800000010ef83630);
  lStack_208 = *(long *)((long)pppuVar10 + _DAT_112da1128);
  func_0x000107c603d0(&lStack_208,&uStack_220,&UNK_11077dd00,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_218);
  pppuVar9 = _DAT_112da10e0;
  func_0x000107c61428((char *)((long)pppuVar10 + (long)_DAT_112da10e0),&uStack_220,1,0);
  *(char *)((long)pppuVar10 + (long)pppuVar9) = '\0';
  func_0x000100083b20(&lStack_208);
  lVar2 = lStack_208;
  lVar6 = lStack_208;
  func_0x000107c52094();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  if (lVar6 != 0) {
    func_0x000107c41cb4(lVar6);
    func_0x000107c615e8(lVar6);
  }
  return;
}



/* Entry: 10147158c; end: 101471c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10147158c(ulong param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  char *unaff_x20;
  char **ppcVar9;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_188;
  ulong uStack_180;
  char *pcStack_178;
  char **ppcStack_170;
  char *pcStack_168;
  undefined1 ***pppuStack_160;
  code *pcStack_158;
  char *apcStack_148 [2];
  char *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  char *pcStack_108;
  char **ppcStack_100;
  char *pcStack_f8;
  undefined1 **ppuStack_f0;
  undefined8 uStack_e8;
  char *apcStack_d8 [2];
  char *pcStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  char *pcStack_98;
  char **ppcStack_90;
  char *pcStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  char *apcStack_68 [2];
  char *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar1 = (uint)param_1 & 1;
  ppcVar9 = (char **)(ulong)uVar1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = *(char **)(unaff_x20 + _DAT_112da1120);
  pcVar4 = pcVar7;
  func_0x000107c5cc8c();
  if (uVar1 == (pcVar4 == (char *)0x1)) goto LAB_101471898;
  unaff_x24 = 0xd00000000000003e;
  pcStack_58 = (char *)0x0;
  uStack_50 = 0xe000000000000000;
  func_0x000107c602fc(0x23);
  func_0x000107c6142c(uStack_50);
  pcStack_58 = (char *)0xd000000000000021;
  uStack_50 = 0x800000010ef834c0;
  bVar3 = (param_1 & 1) == 0;
  uVar5 = 0x65757274;
  if (bVar3) {
    uVar5 = 0x65736c6166;
  }
  unaff_x23 = 0xe400000000000000;
  if (bVar3) {
    unaff_x23 = 0xe500000000000000;
  }
  ppcVar9 = &pcStack_58;
  func_0x000107c5fb78(uVar5,unaff_x23);
  func_0x000107c6142c(unaff_x23);
  func_0x000107c6142c(uStack_50);
  pcVar4 = pcVar7;
  func_0x000107c44bc8();
  if (((int)pcVar4 == 0) || (pcVar4 = pcVar7, func_0x000107c4a600(), (int)pcVar4 == 0))
  goto LAB_101471898;
  if ((param_1 & 1) == 0) {
    pcVar4 = pcVar7;
    func_0x000107c4a604();
    if ((int)pcVar4 == 0) goto LAB_101471898;
    func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112da1130));
    pcStack_58 = (char *)0x0;
    uStack_50 = 0xe000000000000000;
    func_0x000107c602fc(0x40);
    func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
    func_0x000107c5fb78(0x63726f7420746553,0xed000066666f2068);
    func_0x000107c6142c(uStack_50);
    pcStack_58 = (char *)0x0;
    pcVar4 = pcVar7;
    func_0x000107c4b948();
    if ((int)pcVar4 == 0) goto LAB_1014717f4;
    func_0x000107c61174();
  }
  else {
    pcVar4 = pcVar7;
    func_0x000107c4a604();
    if ((int)pcVar4 == 0) goto LAB_101471898;
    func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112da1130));
    pcStack_58 = (char *)0x0;
    uStack_50 = 0xe000000000000000;
    func_0x000107c602fc(0x40);
    func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
    func_0x000107c5fb78(0x63726f7420746553,0xec0000006e6f2068);
    func_0x000107c6142c(uStack_50);
    pcStack_58 = (char *)0x0;
    pcVar4 = pcVar7;
    func_0x000107c4b948();
    if ((int)pcVar4 == 0) {
LAB_1014717f4:
      pcVar7 = pcStack_58;
      param_1 = 0xe000000000000000;
      pcVar4 = pcStack_58;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(pcVar4);
      func_0x000107c61654();
      pcStack_58 = (char *)0x0;
      uStack_50 = 0xe000000000000000;
      func_0x000107c602fc(0x41);
      ppcVar9 = &pcStack_58;
      func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
      uVar5 = 0x112d393f0;
      apcStack_68[0] = pcVar7;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c603d0(apcStack_68,&pcStack_58,uVar5,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c6142c(uStack_50);
      func_0x000107c614ac(pcVar7);
      unaff_x20 = pcVar7;
      goto LAB_101471898;
    }
    func_0x000107c61174();
  }
  ppcVar9 = &pcStack_58;
  param_1 = 0xe000000000000000;
  func_0x000107c59f28(pcVar7);
  func_0x000107c5d284(pcVar7);
LAB_101471898:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  uStack_78 = 0x1014718cc;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = *(char **)((long)ppcVar9 + _DAT_112da1120);
  pcVar4 = pcVar8;
  uStack_b0 = unaff_x24;
  uStack_a8 = unaff_x23;
  uStack_a0 = param_1;
  pcStack_98 = unaff_x20;
  ppcStack_90 = ppcVar9;
  pcStack_88 = pcVar7;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000107c3d188();
  pcVar7 = pcVar8;
  if (pcVar4 != (char *)0x0) {
    param_1 = 0xd00000000000003c;
    func_0x000107c3e208(*(undefined8 *)((long)ppcVar9 + _DAT_112da1130));
    unaff_x23 = 0xe000000000000000;
    pcStack_c8 = (char *)0x0;
    uStack_c0 = 0xe000000000000000;
    func_0x000107c602fc(0x40);
    func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
    ppcVar9 = &pcStack_c8;
    func_0x000107c5fb78(0xd00000000000003c,0x800000010ef83510);
    func_0x000107c6142c(uStack_c0);
    pcStack_c8 = (char *)0x0;
    pcVar4 = pcVar8;
    func_0x000107c4b948();
    pcVar7 = pcStack_c8;
    if ((int)pcVar4 == 0) {
      pcVar4 = pcStack_c8;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(pcVar4);
      func_0x000107c61654();
      pcStack_c8 = (char *)0x0;
      uStack_c0 = 0xe000000000000000;
      func_0x000107c602fc(0x41);
      ppcVar9 = &pcStack_c8;
      func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
      uVar5 = 0x112d393f0;
      apcStack_d8[0] = pcVar7;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c603d0(apcStack_d8,&pcStack_c8,uVar5,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c6142c(uStack_c0);
      func_0x000107c614ac(pcVar7);
      unaff_x20 = pcVar7;
    }
    else {
      func_0x000107c61174();
      func_0x000107c57834(pcVar8);
      func_0x000107c5d284(pcVar8);
      pcVar7 = pcVar8;
      unaff_x20 = "Update device format";
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  func_0x000107c60e78();
  uStack_e8 = 0x101471a98;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = *(char **)((long)ppcVar9 + _DAT_112da1120);
  pcVar4 = pcVar8;
  uStack_120 = unaff_x24;
  uStack_118 = unaff_x23;
  uStack_110 = param_1;
  pcStack_108 = unaff_x20;
  ppcStack_100 = ppcVar9;
  pcStack_f8 = pcVar7;
  ppuStack_f0 = &puStack_80;
  func_0x000107c3d188();
  pcVar7 = pcVar8;
  if (pcVar4 != (char *)0x0) {
    param_1 = 0xd000000000000036;
    func_0x000107c3e208(*(undefined8 *)((long)ppcVar9 + _DAT_112da1130));
    pcStack_138 = (char *)0x0;
    uStack_130 = 0xe000000000000000;
    func_0x000107c602fc(0x40);
    func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
    ppcVar9 = &pcStack_138;
    func_0x000107c5fb78(0xd000000000000036,0x800000010ef83550);
    func_0x000107c6142c(uStack_130);
    pcStack_138 = (char *)0x0;
    pcVar4 = pcVar8;
    func_0x000107c4b948();
    pcVar7 = pcStack_138;
    if ((int)pcVar4 == 0) {
      pcVar4 = pcStack_138;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(pcVar4);
      func_0x000107c61654();
      pcStack_138 = (char *)0x0;
      uStack_130 = 0xe000000000000000;
      func_0x000107c602fc(0x41);
      ppcVar9 = &pcStack_138;
      func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
      uVar5 = 0x112d393f0;
      apcStack_148[0] = pcVar7;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c603d0(apcStack_148,&pcStack_138,uVar5,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c6142c(uStack_130);
      func_0x000107c614ac(pcVar7);
      unaff_x20 = pcVar7;
    }
    else {
      func_0x000107c61174();
      func_0x000107c57834(pcVar8);
      func_0x000107c5d284(pcVar8);
      pcVar7 = pcVar8;
      unaff_x20 = "witching behavior restricted";
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  func_0x000107c60e78();
  pcStack_158 = FUN_101471c64;
  uStack_1a0 = 0;
  uStack_198 = 0xe000000000000000;
  uStack_180 = param_1;
  pcStack_178 = unaff_x20;
  ppcStack_170 = ppcVar9;
  pcStack_168 = pcVar7;
  pppuStack_160 = &ppuStack_f0;
  func_0x000107c602fc(0x49);
  func_0x000107c5fb78(0xd000000000000047,0x800000010ef83630);
  lStack_188 = *(long *)((long)ppcVar9 + _DAT_112da1128);
  func_0x000107c603d0(&lStack_188,&uStack_1a0,&UNK_11077dd00,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_198);
  lVar2 = _DAT_112da10e0;
  func_0x000107c61428((long)ppcVar9 + _DAT_112da10e0,&uStack_1a0,1,0);
  *(undefined1 *)((long)ppcVar9 + lVar2) = 0;
  func_0x000100083b20(&lStack_188);
  lVar2 = lStack_188;
  lVar6 = lStack_188;
  func_0x000107c52094();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  if (lVar6 != 0) {
    func_0x000107c41cb4(lVar6);
    func_0x000107c615e8(lVar6);
  }
  return;
}



/* Entry: 101471c64; end: 101471d73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101471c64(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x49);
  func_0x000107c5fb78(0xd000000000000047,0x800000010ef83630);
  lStack_38 = *(long *)(unaff_x20 + _DAT_112da1128);
  func_0x000107c603d0(&lStack_38,&uStack_50,&UNK_11077dd00,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_48);
  lVar1 = _DAT_112da10e0;
  func_0x000107c61428(unaff_x20 + _DAT_112da10e0,&uStack_50,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = 0;
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  lVar2 = lStack_38;
  func_0x000107c52094();
  func_0x000107c61180();
  func_0x000107c615e8(lVar1);
  if (lVar2 != 0) {
    func_0x000107c41cb4(lVar2);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 101471d74; end: 101471dd3; -[_TtC22SCManagedCaptureDevice24ManagedCaptureDeviceImpl init] */

void FUN_101471d74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCManagedCaptureDevice.ManagedCaptureDeviceImpl",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101471da0);
  (*pcVar1)();
}



/* Entry: 101471dd4; end: 101471f1b; -[_TtC22SCManagedCaptureDevice24ManagedCaptureDeviceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101471e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101471e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101471e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101471eb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101471e94) */
/* WARNING: Removing unreachable block (ram,0x000101471e74) */
/* WARNING: Removing unreachable block (ram,0x000101471e54) */
/* WARNING: Removing unreachable block (ram,0x000101471eb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101471dd4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da1130));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da1138));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da1140));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da1148));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da1150));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da1090));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da1098));
  return;
}



/* Entry: 101471f1c; end: 101471f67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101471f1c(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112da10b8;
  func_0x000107c61428(unaff_x20 + _DAT_112da10b8,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 101471f68; end: 101471fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101471f68(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112da10b8;
  func_0x000107c61428(unaff_x20 + _DAT_112da10b8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1014739ec;
  return auVar2;
}



/* Entry: 101471fa8; end: 101471fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101471fa8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c0cd550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112da1120),PTR_s_minAvailableVideoZoomFactor_112610f68
            );
  return;
}



/* Entry: 101471fb8; end: 10147201f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101471fb8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112da10b8;
  func_0x000107c61428(unaff_x20 + _DAT_112da10b8,auStack_38,0,0);
  if (*(char *)(unaff_x20 + lVar1) != '\x01') {
    func_0x000107c5de60(*(undefined8 *)(unaff_x20 + _DAT_112da1120));
  }
  return;
}



/* Entry: 101472020; end: 101472023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_101472020(double param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  double dVar3;
  undefined1 auStack_48 [24];
  
  puVar2 = PTR__AVCaptureDeviceTypeBuiltInUltraWideCamera_110347f18;
  func_0x0001002ea81c(PTR__AVCaptureDeviceTypeBuiltInUltraWideCamera_110347f18,
                      PTR__AVCaptureDeviceTypeBuiltInDualWideCamera_110347ef0);
  lVar1 = _DAT_112da10b8;
  func_0x000107c61428(unaff_x20 + _DAT_112da10b8,auStack_48,0,0);
  if (*(char *)(unaff_x20 + lVar1) == '\x01') {
    param_1 = *(double *)(unaff_x20 + _DAT_112da10c0);
  }
  else {
    func_0x000107c5de60(*(undefined8 *)(unaff_x20 + _DAT_112da1120));
  }
  dVar3 = 2.0;
  if (((ulong)puVar2 & 1) == 0) {
    dVar3 = 1.0;
  }
  return param_1 / dVar3;
}



/* Entry: 101472024; end: 101472063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101472024(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112da10d0;
  func_0x000107c61428(unaff_x20 + _DAT_112da10d0,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Entry: 101472064; end: 101472087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101472064(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112da10d8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112da10d8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 101472088; end: 1014720a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101472088(void)

{
  long unaff_x20;
  
  func_0x000107c49b8c(*(undefined8 *)(unaff_x20 + _DAT_112da1120));
  return;
}



/* Entry: 1014720a8; end: 101472117;  */

/* WARNING: Possible PIC construction at 0x0001014720cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014720e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014720d0) */
/* WARNING: Removing unreachable block (ram,0x000101472100) */
/* WARNING: Removing unreachable block (ram,0x0001014720d4) */
/* WARNING: Removing unreachable block (ram,0x0001014720e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014720a8(void)

{
  long unaff_x20;
  
  func_0x000107c3d184(*(undefined8 *)(unaff_x20 + _DAT_112da1120));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101472118; end: 101472137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101472118(void)

{
  long unaff_x20;
  
  func_0x000107c4a1f0(*(undefined8 *)(unaff_x20 + _DAT_112da1120));
  return;
}



/* Entry: 101472138; end: 101472147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101472138(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + _DAT_112da10e8));
  return;
}



/* Entry: 101472148; end: 1014721c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101472148(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112da10f0;
  func_0x000107c61428(unaff_x20 + _DAT_112da10f0,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 1014721c8; end: 1014721e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014721c8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c0c2170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112da1120),PTR_s_maxExposureTargetBias_11260e270);
  return;
}



/* Entry: 1014721e8; end: 10147220b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014721e8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c49d28(*(undefined8 *)(unaff_x20 + _DAT_112da1120),param_2,param_1);
  return;
}



/* Entry: 10147220c; end: 101472223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10147220c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong auStack_78 [2];
  ulong uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0;
  uStack_60 = 0xe000000000000000;
  func_0x000107c602fc(0x2a);
  func_0x000107c5fb78(0xd000000000000028,0x800000010ef83340);
  uVar8 = param_1;
  func_0x000107c5fe00(&uStack_68,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_60);
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112da1130));
  uStack_68 = 0;
  uStack_60 = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  puVar6 = (ulong *)0x800000010ef83370;
  func_0x000107c5fb78(0xd000000000000011);
  func_0x000107c6142c(uStack_60);
  uVar7 = *(ulong *)(unaff_x20 + _DAT_112da1120);
  uStack_68 = 0;
  uVar3 = uVar7;
  func_0x000107c4b948();
  uVar4 = uStack_68;
  if ((int)uVar3 == 0) {
    uVar3 = uStack_68;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar3);
    func_0x000107c61654();
    uStack_68 = 0;
    uStack_60 = 0xe000000000000000;
    func_0x000107c602fc(0x41);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    uVar5 = 0x112d393f0;
    auStack_78[0] = uVar4;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar6 = &uStack_68;
    func_0x000107c603d0(auStack_78,puVar6,uVar5,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c6142c(uStack_60);
    func_0x000107c614ac();
  }
  else {
    func_0x000107c61174();
    func_0x000107c4cee0(uVar7);
    if (((float)uVar8 < (float)param_1) &&
       (func_0x000107c4c834(uVar7), (float)param_1 < (float)uVar8)) {
      func_0x000107c547c4(uVar7);
      uVar8 = param_1;
    }
    func_0x000107c5d284();
    uVar4 = uVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  uStack_100 = 0;
  uStack_f8 = 0xe000000000000000;
  func_0x000107c602fc(0x6c);
  func_0x000107c5fb78(0xd000000000000033,0x800000010ef83390);
  uVar5 = 0;
  uStack_110 = uVar8;
  uStack_108 = param_2;
  func_0x000100f6e714(0);
  func_0x000107c603d0(&uStack_110,&uStack_100,uVar5,PTR___ss26DefaultStringInterpolationVN_11034ec00
                      ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0xd000000000000015,0x800000010ef820a0);
  bVar2 = (uVar4 & 1) == 0;
  uVar5 = 0x65757274;
  if (bVar2) {
    uVar5 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0xd00000000000001e,0x800000010ef833d0);
  bVar2 = ((ulong)puVar6 & 1) == 0;
  uVar5 = 0x65757274;
  if (bVar2) {
    uVar5 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  uVar5 = uStack_f8;
  func_0x000107c6142c(uStack_f8);
  FUN_10146fd78();
  FUN_1014725fc(uVar8,param_2,&uStack_68,uVar4,puVar6,uVar5);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 101472224; end: 101472243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101472224(void)

{
  long unaff_x20;
  
  func_0x000107c4a448(*(undefined8 *)(unaff_x20 + _DAT_112da1120));
  return;
}



/* Entry: 101472244; end: 101472273;  */

void FUN_101472244(undefined8 param_1)

{
  func_0x00010146fe3c();
  FUN_101472ae4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101472274; end: 10147227f;  */

void FUN_101472274(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x36);
  func_0x000107c5fb78(0xd000000000000034,0x800000010ef833f0);
  uVar1 = 0;
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000100f6e714(0);
  func_0x000107c603d0(&uStack_50,&uStack_40,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_38;
  func_0x000107c6142c(uStack_38);
  func_0x00010146fe3c();
  FUN_101472ca0(param_1,param_2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101472280; end: 1014722df;  */

void FUN_101472280(undefined8 param_1)

{
  func_0x00010146fe3c();
  FUN_1014732d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014722e0; end: 1014722e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014722e0(uint param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  long unaff_x20;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  undefined8 ***unaff_x23;
  undefined8 unaff_x24;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_208;
  undefined8 **ppuStack_200;
  undefined8 **ppuStack_1f8;
  undefined8 **ppuStack_1f0;
  undefined8 **ppuStack_1e8;
  undefined8 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined8 **appuStack_1c8 [2];
  undefined8 **ppuStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 **ppuStack_198;
  undefined8 **ppuStack_190;
  undefined8 **ppuStack_188;
  undefined8 **ppuStack_180;
  undefined8 **ppuStack_178;
  undefined8 **ppuStack_170;
  undefined8 uStack_168;
  undefined8 **appuStack_158 [2];
  undefined8 **ppuStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 **ppuStack_128;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined1 **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 **appuStack_e8 [2];
  undefined8 **ppuStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 **ppuStack_b8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  pppuVar9 = (undefined8 ***)(ulong)(param_1 & 1);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar10 = *(undefined8 ****)(unaff_x20 + _DAT_112da1120);
  pppuVar11 = pppuVar10;
  func_0x000107c43698();
  if ((param_1 & 1) != (uint)(pppuVar11 == (undefined8 ***)0x1)) {
    unaff_x24 = 0xd00000000000003e;
    ppuStack_70 = (undefined8 **)0x0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x23);
    func_0x000107c6142c(uStack_68);
    ppuStack_70 = (undefined8 ***)0xd000000000000021;
    uStack_68 = 0x800000010ef83490;
    bVar3 = (param_1 & 1) == 0;
    uVar4 = 0x65757274;
    if (bVar3) {
      uVar4 = 0x65736c6166;
    }
    unaff_x23 = (undefined8 ***)0xe400000000000000;
    if (bVar3) {
      unaff_x23 = (undefined8 ***)0xe500000000000000;
    }
    pppuVar9 = &ppuStack_70;
    func_0x000107c5fb78(uVar4,unaff_x23);
    func_0x000107c6142c(unaff_x23);
    func_0x000107c6142c(uStack_68);
    pppuVar11 = pppuVar10;
    func_0x000107c448b0();
    if (((int)pppuVar11 != 0) && (pppuVar11 = pppuVar10, func_0x000107c49dac(), (int)pppuVar11 != 0)
       ) {
      if ((param_1 & 1) == 0) {
        pppuVar9 = pppuVar10;
        func_0x000107c49db0();
        if ((int)pppuVar9 != 0) {
          func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112da1130));
          ppuStack_70 = (undefined8 **)0x0;
          uStack_68 = 0xe000000000000000;
          func_0x000107c602fc(0x40);
          func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
          func_0x000107c5fb78(0x73616c6620746553,0xed000066666f2068);
          func_0x000107c6142c(uStack_68);
          ppuStack_70 = (undefined8 ***)0x0;
          pppuVar9 = pppuVar10;
          func_0x000107c4b948();
          if ((int)pppuVar9 == 0) goto LAB_10147143c;
          func_0x000107c61174(ppuStack_70);
LAB_10147142c:
          func_0x000107c54a6c(pppuVar10);
          func_0x000107c5d284(pppuVar10);
        }
      }
      else {
        pppuVar9 = pppuVar10;
        func_0x000107c49db0();
        if ((int)pppuVar9 != 0) {
          func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112da1130));
          ppuStack_70 = (undefined8 **)0x0;
          uStack_68 = 0xe000000000000000;
          func_0x000107c602fc(0x40);
          func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
          func_0x000107c5fb78(0x73616c6620746553,0xec0000006e6f2068);
          func_0x000107c6142c(uStack_68);
          ppuStack_70 = (undefined8 ***)0x0;
          pppuVar9 = pppuVar10;
          func_0x000107c4b948();
          if ((int)pppuVar9 != 0) {
            func_0x000107c61174(ppuStack_70);
            goto LAB_10147142c;
          }
LAB_10147143c:
          unaff_x23 = (undefined8 ***)ppuStack_70;
          pppuVar9 = (undefined8 ***)ppuStack_70;
          func_0x000107c61174(ppuStack_70);
          func_0x000107c5ed30();
          func_0x000107c61170(pppuVar9);
          func_0x000107c61654();
          ppuStack_70 = (undefined8 ***)0x0;
          uStack_68 = 0xe000000000000000;
          func_0x000107c602fc(0x41);
          func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
          uVar4 = 0x112d393f0;
          ppuStack_78 = unaff_x23;
          func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
          func_0x000107c603d0(&ppuStack_78,&ppuStack_70,uVar4,
                              PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          func_0x000107c6142c(uStack_68);
          func_0x000107c614ac(unaff_x23);
        }
      }
      pppuVar9 = _DAT_112da10e0;
      pppuVar11 = (undefined8 ***)(unaff_x20 + (long)_DAT_112da10e0);
      func_0x000107c61428(pppuVar11,&ppuStack_70,0,0);
      if (*(char *)(unaff_x20 + (long)pppuVar9) == '\x01') {
        func_0x000100083b20(&ppuStack_78);
        pppuVar11 = (undefined8 ***)ppuStack_78;
        pppuVar9 = (undefined8 ***)ppuStack_78;
        func_0x000107c41948();
        func_0x000107c61180();
        func_0x000107c615e8();
        if (pppuVar9 != (undefined8 ***)0x0) {
          func_0x000107c41a48(pppuVar9);
          pppuVar11 = pppuVar9;
          func_0x000107c615e8();
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  uStack_c0 = unaff_x24;
  ppuStack_b8 = unaff_x23;
  puStack_90 = &stack0xfffffffffffffff0;
  pcStack_88 = FUN_10147158c;
  uVar1 = (uint)pppuVar11 & 1;
  pppuVar10 = (undefined8 ***)(ulong)uVar1;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar7 = *(undefined8 ****)((long)pppuVar9 + _DAT_112da1120);
  pppuVar5 = pppuVar7;
  func_0x000107c5cc8c();
  if (uVar1 == (pppuVar5 == (undefined8 ***)0x1)) goto LAB_101471898;
  unaff_x24 = 0xd00000000000003e;
  ppuStack_d8 = (undefined8 **)0x0;
  uStack_d0 = 0xe000000000000000;
  func_0x000107c602fc(0x23);
  func_0x000107c6142c(uStack_d0);
  ppuStack_d8 = (undefined8 ***)0xd000000000000021;
  uStack_d0 = 0x800000010ef834c0;
  bVar3 = ((ulong)pppuVar11 & 1) == 0;
  uVar4 = 0x65757274;
  if (bVar3) {
    uVar4 = 0x65736c6166;
  }
  unaff_x23 = (undefined8 ***)0xe400000000000000;
  if (bVar3) {
    unaff_x23 = (undefined8 ***)0xe500000000000000;
  }
  pppuVar10 = &ppuStack_d8;
  func_0x000107c5fb78(uVar4,unaff_x23);
  func_0x000107c6142c(unaff_x23);
  func_0x000107c6142c(uStack_d0);
  pppuVar5 = pppuVar7;
  func_0x000107c44bc8();
  if (((int)pppuVar5 == 0) || (pppuVar5 = pppuVar7, func_0x000107c4a600(), (int)pppuVar5 == 0))
  goto LAB_101471898;
  if (((ulong)pppuVar11 & 1) == 0) {
    pppuVar5 = pppuVar7;
    func_0x000107c4a604();
    if ((int)pppuVar5 == 0) goto LAB_101471898;
    func_0x000107c3e208(*(undefined8 *)((long)pppuVar9 + _DAT_112da1130));
    ppuStack_d8 = (undefined8 **)0x0;
    uStack_d0 = 0xe000000000000000;
    func_0x000107c602fc(0x40);
    func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
    func_0x000107c5fb78(0x63726f7420746553,0xed000066666f2068);
    func_0x000107c6142c(uStack_d0);
    ppuStack_d8 = (undefined8 ***)0x0;
    pppuVar11 = pppuVar7;
    func_0x000107c4b948();
    if ((int)pppuVar11 == 0) goto LAB_1014717f4;
    func_0x000107c61174();
  }
  else {
    pppuVar5 = pppuVar7;
    func_0x000107c4a604();
    if ((int)pppuVar5 == 0) goto LAB_101471898;
    func_0x000107c3e208(*(undefined8 *)((long)pppuVar9 + _DAT_112da1130));
    ppuStack_d8 = (undefined8 **)0x0;
    uStack_d0 = 0xe000000000000000;
    func_0x000107c602fc(0x40);
    func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
    func_0x000107c5fb78(0x63726f7420746553,0xec0000006e6f2068);
    func_0x000107c6142c(uStack_d0);
    ppuStack_d8 = (undefined8 ***)0x0;
    pppuVar11 = pppuVar7;
    func_0x000107c4b948();
    if ((int)pppuVar11 == 0) {
LAB_1014717f4:
      pppuVar7 = (undefined8 ***)ppuStack_d8;
      pppuVar11 = (undefined8 ***)0xe000000000000000;
      pppuVar9 = (undefined8 ***)ppuStack_d8;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(pppuVar9);
      func_0x000107c61654();
      ppuStack_d8 = (undefined8 ***)0x0;
      uStack_d0 = 0xe000000000000000;
      func_0x000107c602fc(0x41);
      pppuVar10 = &ppuStack_d8;
      func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
      uVar4 = 0x112d393f0;
      appuStack_e8[0] = pppuVar7;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c603d0(appuStack_e8,&ppuStack_d8,uVar4,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c6142c(uStack_d0);
      func_0x000107c614ac(pppuVar7);
      pppuVar9 = pppuVar7;
      goto LAB_101471898;
    }
    func_0x000107c61174();
  }
  pppuVar10 = &ppuStack_d8;
  pppuVar11 = (undefined8 ***)0xe000000000000000;
  func_0x000107c59f28(pppuVar7);
  func_0x000107c5d284(pppuVar7);
LAB_101471898:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  func_0x000107c60e78();
  uStack_f8 = 0x1014718cc;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = *(undefined8 ****)((long)pppuVar10 + _DAT_112da1120);
  pppuVar5 = pppuVar8;
  uStack_130 = unaff_x24;
  ppuStack_128 = unaff_x23;
  ppuStack_120 = pppuVar11;
  ppuStack_118 = pppuVar9;
  ppuStack_110 = pppuVar10;
  ppuStack_108 = pppuVar7;
  ppuStack_100 = &puStack_90;
  func_0x000107c3d188();
  pppuVar7 = pppuVar8;
  if (pppuVar5 != (undefined8 ***)0x0) {
    pppuVar11 = (undefined8 ***)0xd00000000000003c;
    func_0x000107c3e208(*(undefined8 *)((long)pppuVar10 + _DAT_112da1130));
    unaff_x23 = (undefined8 ***)0xe000000000000000;
    ppuStack_148 = (undefined8 **)0x0;
    uStack_140 = 0xe000000000000000;
    func_0x000107c602fc(0x40);
    func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
    pppuVar10 = &ppuStack_148;
    func_0x000107c5fb78(0xd00000000000003c,0x800000010ef83510);
    func_0x000107c6142c(uStack_140);
    ppuStack_148 = (undefined8 ***)0x0;
    pppuVar9 = pppuVar8;
    func_0x000107c4b948();
    pppuVar7 = (undefined8 ***)ppuStack_148;
    if ((int)pppuVar9 == 0) {
      pppuVar9 = (undefined8 ***)ppuStack_148;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(pppuVar9);
      func_0x000107c61654();
      ppuStack_148 = (undefined8 ***)0x0;
      uStack_140 = 0xe000000000000000;
      func_0x000107c602fc(0x41);
      pppuVar10 = &ppuStack_148;
      func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
      uVar4 = 0x112d393f0;
      appuStack_158[0] = pppuVar7;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c603d0(appuStack_158,&ppuStack_148,uVar4,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c6142c(uStack_140);
      func_0x000107c614ac(pppuVar7);
      pppuVar9 = pppuVar7;
    }
    else {
      func_0x000107c61174();
      func_0x000107c57834(pppuVar8);
      func_0x000107c5d284(pppuVar8);
      pppuVar7 = pppuVar8;
      pppuVar9 = (undefined8 ***)"Update device format";
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  func_0x000107c60e78();
  uStack_168 = 0x101471a98;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = *(undefined8 ****)((long)pppuVar10 + _DAT_112da1120);
  pppuVar5 = pppuVar8;
  uStack_1a0 = unaff_x24;
  ppuStack_198 = unaff_x23;
  ppuStack_190 = pppuVar11;
  ppuStack_188 = pppuVar9;
  ppuStack_180 = pppuVar10;
  ppuStack_178 = pppuVar7;
  ppuStack_170 = &ppuStack_100;
  func_0x000107c3d188();
  pppuVar7 = pppuVar8;
  if (pppuVar5 != (undefined8 ***)0x0) {
    pppuVar11 = (undefined8 ***)0xd000000000000036;
    func_0x000107c3e208(*(undefined8 *)((long)pppuVar10 + _DAT_112da1130));
    ppuStack_1b8 = (undefined8 **)0x0;
    uStack_1b0 = 0xe000000000000000;
    func_0x000107c602fc(0x40);
    func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
    pppuVar10 = &ppuStack_1b8;
    func_0x000107c5fb78(0xd000000000000036,0x800000010ef83550);
    func_0x000107c6142c(uStack_1b0);
    ppuStack_1b8 = (undefined8 ***)0x0;
    pppuVar9 = pppuVar8;
    func_0x000107c4b948();
    pppuVar7 = (undefined8 ***)ppuStack_1b8;
    if ((int)pppuVar9 == 0) {
      pppuVar9 = (undefined8 ***)ppuStack_1b8;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(pppuVar9);
      func_0x000107c61654();
      ppuStack_1b8 = (undefined8 ***)0x0;
      uStack_1b0 = 0xe000000000000000;
      func_0x000107c602fc(0x41);
      pppuVar10 = &ppuStack_1b8;
      func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
      uVar4 = 0x112d393f0;
      appuStack_1c8[0] = pppuVar7;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c603d0(appuStack_1c8,&ppuStack_1b8,uVar4,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c6142c(uStack_1b0);
      func_0x000107c614ac(pppuVar7);
      pppuVar9 = pppuVar7;
    }
    else {
      func_0x000107c61174();
      func_0x000107c57834(pppuVar8);
      func_0x000107c5d284(pppuVar8);
      pppuVar7 = pppuVar8;
      pppuVar9 = (undefined8 ***)0x10ef83550;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  func_0x000107c60e78();
  pcStack_1d8 = FUN_101471c64;
  uStack_220 = 0;
  uStack_218 = 0xe000000000000000;
  ppuStack_200 = pppuVar11;
  ppuStack_1f8 = pppuVar9;
  ppuStack_1f0 = pppuVar10;
  ppuStack_1e8 = pppuVar7;
  ppuStack_1e0 = &ppuStack_170;
  func_0x000107c602fc(0x49);
  func_0x000107c5fb78(0xd000000000000047,0x800000010ef83630);
  lStack_208 = *(long *)((long)pppuVar10 + _DAT_112da1128);
  func_0x000107c603d0(&lStack_208,&uStack_220,&UNK_11077dd00,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_218);
  pppuVar9 = _DAT_112da10e0;
  func_0x000107c61428((char *)((long)pppuVar10 + (long)_DAT_112da10e0),&uStack_220,1,0);
  *(char *)((long)pppuVar10 + (long)pppuVar9) = '\0';
  func_0x000100083b20(&lStack_208);
  lVar2 = lStack_208;
  lVar6 = lStack_208;
  func_0x000107c52094();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  if (lVar6 != 0) {
    func_0x000107c41cb4(lVar6);
    func_0x000107c615e8(lVar6);
  }
  return;
}



/* Entry: 1014722e8; end: 101472383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014722e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112da1120);
  func_0x000107c3d11c(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c43878();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101472384; end: 10147238b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101472384(void)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x20;
  undefined8 unaff_x22;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 auStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x52);
  func_0x000107c5fb78(0xd000000000000050,0x800000010ef83280);
  puVar10 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  func_0x000107c603d0(unaff_x20 + _DAT_112da1128,&uStack_70,&UNK_11077dd00,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00);
  func_0x000107c6142c(uStack_68);
  lVar13 = *(long *)(unaff_x20 + _DAT_112da1120);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___AVCaptureDeviceInput_1126d4280;
  func_0x000107c610f8();
  uStack_70 = 0;
  func_0x000107c61174();
  func_0x000107c46530();
  uVar8 = uStack_70;
  func_0x000107c61174();
  if (puVar1 == (undefined8 *)0x0) {
    unaff_x22 = uVar8;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar8);
    func_0x000107c61654();
    func_0x000107c61170(lVar13);
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x60);
    lVar7 = -0x7ffffffef107cd20;
    func_0x000107c5fb78(0xd000000000000053);
    func_0x000107c417f0();
    func_0x000107c61180();
    lVar3 = lVar13;
    func_0x000107c5faec();
    func_0x000107c61170(lVar13);
    func_0x000107c5fb78(lVar3,lVar7);
    func_0x000107c6142c(lVar7);
    puVar1 = &uStack_70;
    func_0x000107c5fb78(0x3a726f727265202c,0xe900000000000020);
    uVar8 = 0x112d393f0;
    auStack_80[0] = unaff_x22;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar9 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
    puVar10 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
    func_0x000107c603d0(auStack_80,&uStack_70);
    func_0x000107c6142c(uStack_68);
    puVar2 = *(undefined1 **)(unaff_x20 + _DAT_112da1108);
    *(undefined8 *)(unaff_x20 + _DAT_112da1108) = unaff_x22;
    func_0x000107c614ac();
  }
  else {
    func_0x000107c61170(lVar13);
    lVar3 = _DAT_112da1110;
    uVar8 = 1;
    puVar9 = (undefined *)0x0;
    func_0x000107c61428(unaff_x20 + _DAT_112da1110,&uStack_70);
    puVar2 = *(undefined1 **)(unaff_x20 + lVar3);
    *(undefined8 **)(unaff_x20 + lVar3) = puVar1;
    func_0x000107c61170();
    lVar7 = lVar13;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  func_0x000107c60e78();
  ppuVar4 = &puStack_d0;
  uStack_c0 = 0xd000000000000050;
  lStack_b8 = lVar7;
  uStack_b0 = unaff_x22;
  lStack_a8 = lVar3;
  puStack_a0 = puVar1;
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar9);
  func_0x000107c61174(puVar10);
  puStack_c8 = PTR_PTR_1126f4c80;
  puStack_d0 = puVar2;
  func_0x000107c61154(&puStack_d0,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    uVar5 = uVar8;
    func_0x000107c40794();
    uVar11 = *(undefined8 *)((long)ppuVar4 + 8);
    *(undefined8 *)((long)ppuVar4 + 8) = uVar5;
    func_0x000107c61170(uVar11);
    func_0x000107c61174(puVar9);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined **)((long)ppuVar4 + 0x10) = puVar9;
    func_0x000107c61170(uVar5);
    uVar11 = 5;
    func_0x000107c60b04(5,1,1);
    func_0x000107c61180();
    uVar5 = uVar11;
    func_0x000107c43638();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)((long)ppuVar4 + 0x18);
    *(undefined8 *)((long)ppuVar4 + 0x18) = uVar5;
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar11);
    puVar6 = puVar10;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x20);
    *(undefined **)((long)ppuVar4 + 0x20) = puVar6;
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar8);
  return (undefined1 *)ppuVar4;
}



/* Entry: 10147238c; end: 1014723b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10147238c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112da1120);
  func_0x000107c3d188(lVar1);
  return lVar1 != 0;
}



/* Entry: 1014723b4; end: 1014723bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014723b4(void)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  char **unaff_x20;
  char *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_118;
  undefined8 uStack_110;
  char *pcStack_108;
  char **ppcStack_100;
  char *pcStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  char *apcStack_d8 [2];
  char *pcStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  char *apcStack_68 [2];
  char *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)((long)unaff_x20 + _DAT_112da1120);
  lVar1 = lVar5;
  func_0x000107c3d188();
  if (lVar1 != 0) {
    unaff_x22 = 0xd00000000000003c;
    func_0x000107c3e208(*(undefined8 *)((long)unaff_x20 + _DAT_112da1130));
    pcStack_58 = (char *)0x0;
    uStack_50 = 0xe000000000000000;
    func_0x000107c602fc(0x40);
    func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
    unaff_x20 = &pcStack_58;
    func_0x000107c5fb78(0xd00000000000003c,0x800000010ef83510);
    func_0x000107c6142c(uStack_50);
    pcStack_58 = (char *)0x0;
    lVar1 = lVar5;
    func_0x000107c4b948();
    unaff_x21 = pcStack_58;
    if ((int)lVar1 == 0) {
      pcVar2 = pcStack_58;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(pcVar2);
      func_0x000107c61654();
      pcStack_58 = (char *)0x0;
      uStack_50 = 0xe000000000000000;
      func_0x000107c602fc(0x41);
      unaff_x20 = &pcStack_58;
      func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
      uVar3 = 0x112d393f0;
      apcStack_68[0] = unaff_x21;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c603d0(apcStack_68,&pcStack_58,uVar3,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c6142c(uStack_50);
      func_0x000107c614ac(unaff_x21);
    }
    else {
      func_0x000107c61174();
      func_0x000107c57834(lVar5);
      func_0x000107c5d284(lVar5);
      unaff_x21 = "Update device format";
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  uStack_78 = 0x101471a98;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = *(char **)((long)unaff_x20 + _DAT_112da1120);
  pcVar4 = pcVar6;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000107c3d188();
  pcVar2 = pcVar6;
  if (pcVar4 != (char *)0x0) {
    unaff_x22 = 0xd000000000000036;
    func_0x000107c3e208(*(undefined8 *)((long)unaff_x20 + _DAT_112da1130));
    pcStack_c8 = (char *)0x0;
    uStack_c0 = 0xe000000000000000;
    func_0x000107c602fc(0x40);
    func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
    unaff_x20 = &pcStack_c8;
    func_0x000107c5fb78(0xd000000000000036,0x800000010ef83550);
    func_0x000107c6142c(uStack_c0);
    pcStack_c8 = (char *)0x0;
    pcVar4 = pcVar6;
    func_0x000107c4b948();
    pcVar2 = pcStack_c8;
    if ((int)pcVar4 == 0) {
      pcVar4 = pcStack_c8;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(pcVar4);
      func_0x000107c61654();
      pcStack_c8 = (char *)0x0;
      uStack_c0 = 0xe000000000000000;
      func_0x000107c602fc(0x41);
      unaff_x20 = &pcStack_c8;
      func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
      uVar3 = 0x112d393f0;
      apcStack_d8[0] = pcVar2;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c603d0(apcStack_d8,&pcStack_c8,uVar3,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c6142c(uStack_c0);
      func_0x000107c614ac(pcVar2);
      unaff_x21 = pcVar2;
    }
    else {
      func_0x000107c61174();
      func_0x000107c57834(pcVar6);
      func_0x000107c5d284(pcVar6);
      pcVar2 = pcVar6;
      unaff_x21 = "witching behavior restricted";
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  func_0x000107c60e78();
  pcStack_e8 = FUN_101471c64;
  uStack_130 = 0;
  uStack_128 = 0xe000000000000000;
  uStack_110 = unaff_x22;
  pcStack_108 = unaff_x21;
  ppcStack_100 = unaff_x20;
  pcStack_f8 = pcVar2;
  ppuStack_f0 = &puStack_80;
  func_0x000107c602fc(0x49);
  func_0x000107c5fb78(0xd000000000000047,0x800000010ef83630);
  lStack_118 = *(long *)((long)unaff_x20 + _DAT_112da1128);
  func_0x000107c603d0(&lStack_118,&uStack_130,&UNK_11077dd00,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_128);
  lVar1 = _DAT_112da10e0;
  func_0x000107c61428((long)unaff_x20 + _DAT_112da10e0,&uStack_130,1,0);
  *(undefined1 *)((long)unaff_x20 + lVar1) = 0;
  func_0x000100083b20(&lStack_118);
  lVar1 = lStack_118;
  lVar5 = lStack_118;
  func_0x000107c52094();
  func_0x000107c61180();
  func_0x000107c615e8(lVar1);
  if (lVar5 != 0) {
    func_0x000107c41cb4(lVar5);
    func_0x000107c615e8(lVar5);
  }
  return;
}



/* Entry: 1014723bc; end: 1014723f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014723bc(void)

{
  int iVar1;
  long unaff_x20;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar1 != 0) {
    func_0x000107c49b08(*(undefined8 *)(unaff_x20 + _DAT_112da1120));
  }
  return;
}



/* Entry: 1014723f4; end: 101472403; -[_TtC22SCManagedCaptureDevice24ManagedCaptureDeviceImpl getAVCaptureDevicePosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014723f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c104270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112da1120),PTR_s_position_11261eab8);
  return;
}



/* Entry: 101472404; end: 10147242b; -[_TtC22SCManagedCaptureDevice24ManagedCaptureDeviceImpl getDeviceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101472404(long param_1)

{
  func_0x000107c41970(*(undefined8 *)(param_1 + _DAT_112da1120));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10147242c; end: 1014725fb; -[_TtC22SCManagedCaptureDevice24ManagedCaptureDeviceImpl captureSessionDidRemoveDevice] */

void FUN_10147242c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101471c64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014725fc; end: 101472ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014725fc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
                  uint param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_158;
  undefined **ppuStack_150;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  uint uStack_d8;
  uint uStack_d4;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_b8;
  undefined **ppuStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar8 = *puVar7;
  puStack_d0 = puVar7;
  func_0x000107c61174(uVar8);
  uVar9 = 0xd00000000000003c;
  func_0x0001000a9a18(0xd00000000000003c,0x800000010ef83af0);
  uStack_c8 = uVar9;
  func_0x000107c61170(uVar8);
  func_0x000107c3e208(*(undefined8 *)(param_6 + _DAT_112da0fe0));
  puStack_a8 = (undefined8 *)0x0;
  uStack_a0 = 0xe000000000000000;
  func_0x000107c602fc(0x8e);
  func_0x000107c5fb78(0xd000000000000042,0x800000010ef83b30);
  uVar9 = 0;
  puStack_b8 = param_1;
  ppuStack_b0 = (undefined **)param_2;
  func_0x000100f6e714(0);
  puVar2 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar1 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c603d0(&puStack_b8,&puStack_a8,uVar9,PTR___ss26DefaultStringInterpolationVN_11034ec00
                      ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x766564206e6f202c,0xed0000203a656369);
  ppuStack_b0 = &PTR_DAT_1103c23b0;
  uVar9 = 0x112da11c0;
  puStack_b8 = param_3;
  func_0x0001000285a8(0x112da11c0,&UNK_10d944358);
  func_0x000107c603d0(&puStack_b8,&puStack_a8,uVar9,puVar1,puVar2);
  func_0x000107c5fb78(0xd000000000000015,0x800000010ef83b80);
  bVar5 = (param_4 & 1) == 0;
  puVar16 = (undefined8 *)0x65736c6166;
  puVar7 = (undefined8 *)0x65757274;
  if (bVar5) {
    puVar7 = puVar16;
  }
  puVar17 = (undefined8 *)0xe500000000000000;
  uVar8 = 0xe400000000000000;
  uVar9 = 0xe400000000000000;
  if (bVar5) {
    uVar9 = 0xe500000000000000;
  }
  uStack_d4 = param_4;
  func_0x000107c5fb78(puVar7,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c5fb78(0xd000000000000022,0x800000010ef83ba0);
  bVar5 = (param_5 & 1) == 0;
  puVar7 = (undefined8 *)0x65757274;
  if (bVar5) {
    puVar7 = puVar16;
  }
  uVar9 = 0xe400000000000000;
  if (bVar5) {
    uVar9 = 0xe500000000000000;
  }
  uStack_d8 = param_5;
  func_0x000107c5fb78(puVar7,uVar9);
  func_0x000107c6142c(uVar9);
  uVar9 = uStack_a0;
  func_0x000107c6142c();
  iVar6 = (int)uVar9;
  puVar7 = (undefined8 *)(param_6 + _DAT_112da0fe8);
  func_0x000107c6099c();
  puVar11 = puVar16;
  if (iVar6 != 0) goto LAB_101472a70;
  uVar9 = *(undefined8 *)((long)param_3 + _DAT_112da1130);
  func_0x000107c61174();
  func_0x000107c3e208(uVar9);
  puStack_a8 = (undefined8 *)0x0;
  uStack_a0 = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  func_0x000107c5fb78(0x6f70786520746553,0xec00000065727573);
  func_0x000107c6142c(uStack_a0);
  uVar15 = *(ulong *)((long)param_3 + _DAT_112da1120);
  puStack_a8 = (undefined8 *)0x0;
  uVar10 = uVar15;
  func_0x000107c4b948();
  puVar11 = puStack_a8;
  if ((int)uVar10 == 0) {
    puVar16 = puStack_a8;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(puVar16);
    func_0x000107c61654();
    puStack_a8 = (undefined8 *)0x0;
    uStack_a0 = 0xe000000000000000;
    func_0x000107c602fc(0x41);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    uVar9 = 0x112d393f0;
    puStack_b8 = puVar11;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&puStack_b8,&puStack_a8,uVar9,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(puVar11);
    uVar9 = uStack_a0;
    func_0x000107c61170(param_6);
    func_0x000107c6142c(uVar9);
    puVar17 = puVar11;
  }
  else {
    func_0x000107c61174();
    uVar10 = uVar15;
    func_0x000107c49d28();
    if (((uVar10 & 1) != 0) &&
       (uVar10 = uVar15, func_0x000107c49d2c(), uVar4 = uStack_d4, (int)uVar10 != 0)) {
      uVar8 = 0x112da0000;
      puVar16 = (undefined8 *)(ulong)uStack_d4;
      if (((uStack_d4 & 1) == 0) && ((uStack_d8 & 1) != 0)) {
        iVar6 = 2;
        func_0x000100029b9c(2,0xf,4,0);
        if (iVar6 == 0) goto LAB_101472a34;
        if ((*(byte *)(param_6 + _DAT_112da0ff0) & 1) != 0) {
          func_0x000107c547bc(0x3fe0000000000000,0x3fe0000000000000,uVar15);
          func_0x000107c547b8(uVar15);
        }
        func_0x000107c52a98(uVar15);
        func_0x000107c5483c(uVar15);
      }
      else {
LAB_101472a34:
        func_0x000107c547bc(uVar15);
      }
      func_0x000107c547b8(uVar15);
      *(byte *)(param_6 + _DAT_112da0ff0) = (byte)uVar4 & 1;
    }
    func_0x000107c5d284(uVar15);
    func_0x000107c61170(param_6);
    puVar11 = puVar16;
  }
  *puVar7 = param_1;
  puVar7[1] = param_2;
LAB_101472a70:
  puVar16 = puStack_d0;
  ppuVar14 = &puStack_a8;
  func_0x000107c61428(puStack_d0,ppuVar14,0,0);
  puVar12 = (undefined8 *)*puVar16;
  func_0x000107c61174();
  func_0x0001000aa0a8(uStack_c8);
  puVar13 = puVar12;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  func_0x000107c60e78();
  puStack_f8 = puVar16;
  pcStack_e8 = FUN_101472ae4;
  puVar16 = puVar13;
  puStack_130 = puVar7;
  puStack_128 = param_3;
  lStack_120 = param_6;
  puStack_118 = puVar17;
  uStack_110 = uVar8;
  puStack_108 = puVar11;
  puStack_100 = puVar12;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar8 = *puVar16;
  func_0x000107c61174(uVar8);
  uVar9 = 0xd000000000000043;
  func_0x0001000a9a18(0xd000000000000043,0x800000010ef83a30);
  func_0x000107c61170(uVar8);
  func_0x000107c3e208(*(undefined8 *)((long)ppuVar14 + _DAT_112da1020));
  lVar3 = _DAT_112da1030;
  if (((*(byte *)((long)ppuVar14 + _DAT_112da1030) & 1) == 0) &&
     (*(char *)((long)ppuVar14 + _DAT_112da1040) != '\x01')) {
    uStack_170 = 0;
    uStack_168 = 0xe000000000000000;
    func_0x000107c602fc(0x47);
    func_0x000107c5fb78(0xd000000000000045,0x800000010ef83a80);
    ppuStack_150 = &PTR_DAT_1103c23b0;
    uVar8 = 0x112da11c0;
    puStack_158 = puVar13;
    func_0x0001000285a8(0x112da11c0,&UNK_10d944358);
    func_0x000107c603d0(&puStack_158,&uStack_170,uVar8,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c6142c(uStack_168);
    if ((*(byte *)((long)ppuVar14 + _DAT_112da1038) & 1) == 0) {
      FUN_101470238(0xd000000000000018,0x800000010ef83ad0,puVar13);
    }
    auVar18 = NEON_fmov(0x3fe0000000000000,8);
    ((undefined8 *)((long)ppuVar14 + _DAT_112da1028))[1] = auVar18._8_8_;
    *(undefined8 *)((long)ppuVar14 + _DAT_112da1028) = auVar18._0_8_;
    *(undefined1 *)((long)ppuVar14 + lVar3) = 1;
  }
  func_0x000107c61428(puVar16,&uStack_170,0,0);
  uVar8 = *puVar16;
  func_0x000107c61174(uVar8);
  func_0x0001000aa0a8(uVar9);
  func_0x000107c61170(uVar8);
  return;
}



/* Entry: 101472ae4; end: 101472c9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101472ae4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_78;
  undefined **ppuStack_70;
  
  puVar3 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000043;
  func_0x0001000a9a18(0xd000000000000043,0x800000010ef83a30);
  func_0x000107c61170(uVar4);
  func_0x000107c3e208(*(undefined8 *)(param_2 + _DAT_112da1020));
  lVar2 = _DAT_112da1030;
  if (((*(byte *)(param_2 + _DAT_112da1030) & 1) == 0) &&
     (*(char *)(param_2 + _DAT_112da1040) != '\x01')) {
    uStack_90 = 0;
    uStack_88 = 0xe000000000000000;
    func_0x000107c602fc(0x47);
    func_0x000107c5fb78(0xd000000000000045,0x800000010ef83a80);
    ppuStack_70 = &PTR_DAT_1103c23b0;
    uVar4 = 0x112da11c0;
    puStack_78 = param_1;
    func_0x0001000285a8(0x112da11c0,&UNK_10d944358);
    func_0x000107c603d0(&puStack_78,&uStack_90,uVar4,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c6142c(uStack_88);
    if ((*(byte *)(param_2 + _DAT_112da1038) & 1) == 0) {
      FUN_101470238(0xd000000000000018,0x800000010ef83ad0,param_1);
    }
    auVar6 = NEON_fmov(0x3fe0000000000000,8);
    puVar1 = (undefined8 *)(param_2 + _DAT_112da1028);
    puVar1[1] = auVar6._8_8_;
    *puVar1 = auVar6._0_8_;
    *(undefined1 *)(param_2 + lVar2) = 1;
  }
  func_0x000107c61428(puVar3,&uStack_90,0,0);
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  func_0x0001000aa0a8(uVar5);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101472ca0; end: 101472ec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101472ca0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_88;
  undefined **ppuStack_80;
  
  puVar5 = param_3;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar6 = *puVar5;
  func_0x000107c61174(uVar6);
  uVar7 = 0xd00000000000003a;
  func_0x0001000a9a18(0xd00000000000003a,0x800000010ef839b0);
  func_0x000107c61170(uVar6);
  func_0x000107c3e208(*(undefined8 *)(param_4 + _DAT_112da1020));
  uStack_a0 = 0;
  uStack_98 = 0xe000000000000000;
  func_0x000107c602fc(0x4f);
  func_0x000107c5fb78(0xd00000000000003f,0x800000010ef839f0);
  uVar6 = 0;
  puStack_88 = param_1;
  ppuStack_80 = (undefined **)param_2;
  func_0x000100f6e714(0);
  puVar3 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar2 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c603d0(&puStack_88,&uStack_a0,uVar6,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x766564206e6f202c,0xec00000020656369);
  ppuStack_80 = &PTR_DAT_1103c23b0;
  uVar6 = 0x112da11c0;
  puStack_88 = param_3;
  func_0x0001000285a8(0x112da11c0,&UNK_10d944358);
  func_0x000107c603d0(&puStack_88,&uStack_a0,uVar6,puVar2,puVar3);
  uVar6 = uStack_98;
  func_0x000107c6142c();
  iVar4 = (int)uVar6;
  puVar1 = (undefined8 *)(param_4 + _DAT_112da1028);
  func_0x000107c6099c(param_1,param_2,*puVar1,puVar1[1]);
  if ((iVar4 == 0) || ((*(byte *)(param_4 + _DAT_112da1030) & 1) != 0)) {
    FUN_101470420(param_1,param_2,0x6f74756120746553,0xed00007375636f66,param_3);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(undefined1 *)(param_4 + _DAT_112da1030) = 0;
  }
  func_0x000107c61428(puVar5,&uStack_a0,0,0);
  uVar6 = *puVar5;
  func_0x000107c61174(uVar6);
  func_0x0001000aa0a8(uVar7);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 101472ec4; end: 10147309b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101472ec4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  
  puVar3 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd00000000000002d;
  func_0x0001000a9a18(0xd00000000000002d,0x800000010ef83920);
  func_0x000107c61170(uVar4);
  func_0x000107c3e208(*(undefined8 *)(param_3 + _DAT_112da1020));
  uStack_90 = 0;
  uStack_88 = 0xe000000000000000;
  func_0x000107c602fc(0x3f);
  func_0x000107c5fb78(0xd000000000000030,0x800000010ef83950);
  bVar2 = ((ulong)param_1 & 1) == 0;
  uVar4 = 0x65757274;
  if (bVar2) {
    uVar4 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0x69766564206e6f20,0xeb00000000206563);
  ppuStack_70 = &PTR_DAT_1103c23b0;
  uVar4 = 0x112da11c0;
  uStack_78 = param_2;
  func_0x0001000285a8(0x112da11c0,&UNK_10d944358);
  func_0x000107c603d0(&uStack_78,&uStack_90,uVar4,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_88);
  FUN_101470618(0xd000000000000014,0x800000010ef83990,param_2,param_1);
  func_0x000107c61428(puVar3,&uStack_90,0,0);
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  func_0x0001000aa0a8(uVar5);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 10147309c; end: 1014732d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10147309c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar4 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar5 = *puVar4;
  func_0x000107c61174(uVar5);
  uVar6 = 0xd00000000000002b;
  func_0x0001000a9a18(0xd00000000000002b,0x800000010ef83880);
  func_0x000107c61170(uVar5);
  func_0x000107c3e208(*(undefined8 *)(param_3 + _DAT_112da1020));
  lVar2 = _DAT_112da1038;
  if (((uint)param_1 & 1) != (uint)*(byte *)(param_3 + _DAT_112da1038)) {
    uStack_90 = 0;
    uStack_88 = 0xe000000000000000;
    func_0x000107c602fc(0x3d);
    func_0x000107c5fb78(0xd00000000000002e,0x800000010ef838b0);
    bVar3 = ((ulong)param_1 & 1) == 0;
    uVar5 = 0x65757274;
    if (bVar3) {
      uVar5 = 0x65736c6166;
    }
    uVar1 = 0xe400000000000000;
    if (bVar3) {
      uVar1 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar5,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c5fb78(0x69766564206e6f20,0xeb00000000206563);
    ppuStack_98 = &PTR_DAT_1103c23b0;
    uVar5 = 0x112da11c0;
    uStack_a0 = param_2;
    func_0x0001000285a8(0x112da11c0,&UNK_10d944358);
    func_0x000107c603d0(&uStack_a0,&uStack_90,uVar5,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c6142c(uStack_88);
    if (((ulong)param_1 & 1) == 0) {
      lVar7 = param_3;
      func_0x000107c61174(param_3);
      FUN_1014737d4(0xd000000000000012,0x800000010ef838e0,param_2,lVar7);
      func_0x000107c61170(lVar7);
    }
    else {
      FUN_1014707f0(0xd000000000000011,0x800000010ef83900,param_2);
    }
    *(byte *)(param_3 + lVar2) = (byte)param_1 & 1;
  }
  func_0x000107c61428(puVar4,&uStack_90,0,0);
  uVar5 = *puVar4;
  func_0x000107c61174(uVar5);
  func_0x0001000aa0a8(uVar6);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 1014732d4; end: 10147349f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014732d4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [48];
  
  puVar1 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000048;
  func_0x0001000a9a18(0xd000000000000048,0x800000010ef83830);
  func_0x000107c61170(uVar2);
  func_0x000107c3e208(*(undefined8 *)(param_2 + _DAT_112da1020));
  *(undefined1 *)(param_2 + _DAT_112da1040) = 1;
  FUN_101472ca0(*(undefined8 *)(param_2 + _DAT_112da1028),
                ((undefined8 *)(param_2 + _DAT_112da1028))[1],param_1,param_2);
  func_0x000107c61428(puVar1,auStack_70,0,0);
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  func_0x0001000aa0a8(uVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1014734a0; end: 101473583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014734a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_3;
  func_0x000107c614f0();
  lVar3 = param_3 + _DAT_112da0f58;
  *(undefined8 *)(lVar3 + 8) = 0;
  func_0x000107c61614(lVar3,0);
  *(undefined8 *)(param_3 + _DAT_112da0f68) = 0;
  *(undefined8 *)(param_3 + _DAT_112da0f70) = 0;
  *(undefined8 *)(param_3 + _DAT_112da0f78) = 0;
  *(undefined8 *)(param_3 + _DAT_112da0f80) = 0;
  *(undefined8 *)(param_3 + _DAT_112da0f88) = 0;
  *(undefined8 *)(param_3 + _DAT_112da0f90) = 0;
  puVar1 = (undefined8 *)(param_3 + _DAT_112da0f98);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined ***)(lVar3 + 8) = &PTR_DAT_1103c25a8;
  func_0x000107c61604();
  *(undefined8 *)(param_3 + _DAT_112da0f60) = param_2;
  lStack_40 = param_3;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101473584; end: 1014737d3;  */

undefined * FUN_101473584(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar10 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar10 = param_1;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar10 != (undefined *)0x0) {
    uVar3 = 0x112da11c8;
    func_0x0001000285a8(0x112da11c8,&UNK_10d944360);
    func_0x000107c602e8(puVar10,uVar3);
    puVar1 = puVar10;
  }
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar10 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar10 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar10 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1014737d4);
          (*pcVar2)();
        }
        puVar13 = *(undefined **)(param_1 + (long)puVar11 * 8 + 0x20);
        func_0x000107c6157c(puVar13);
      }
      else {
        puVar13 = puVar11;
        func_0x000101472454(puVar11,param_1);
      }
      if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014737cc);
        (*pcVar2)();
      }
      puVar11 = puVar11 + 1;
      uVar12 = *(ulong *)(puVar1 + 0x28);
      uVar4 = 0;
      puStack_68 = puVar13;
      func_0x000107c5f1e0(0);
      uVar3 = 0x112da11d0;
      FUN_1014739ac(0x112da11d0,PTR___s7Combine14AnyCancellableCSHAAMc_11034ade0);
      func_0x000107c5fa4c(uVar12,uVar4,uVar3);
      uVar9 = -1L << ((ulong)(byte)puVar1[0x20] & 0x3f);
      uVar12 = uVar12 & (uVar9 ^ 0xffffffffffffffff);
      uVar6 = uVar12 >> 6;
      uVar7 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
      uVar8 = 1L << (uVar12 & 0x3f);
      if ((uVar8 & uVar7) != 0) {
        uVar3 = 0x112da11d8;
        FUN_1014739ac(0x112da11d8,PTR___s7Combine14AnyCancellableCSQAAMc_11034ade8);
        do {
          uStack_70 = *(undefined8 *)(*(long *)(puVar1 + 0x30) + uVar12 * 8);
          puVar5 = &uStack_70;
          func_0x000107c5fab8(puVar5,&puStack_68,uVar4,uVar3);
          if (((ulong)puVar5 & 1) != 0) {
            func_0x000107c61574(puVar13);
            goto LAB_101473664;
          }
          uVar12 = uVar12 + 1 & ~uVar9;
          uVar6 = uVar12 >> 6;
          uVar7 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
          uVar8 = 1L << (uVar12 & 0x3f);
        } while ((uVar8 & uVar7) != 0);
      }
      *(ulong *)(puVar1 + uVar6 * 8 + 0x38) = uVar8 | uVar7;
      *(undefined **)(*(long *)(puVar1 + 0x30) + uVar12 * 8) = puVar13;
      if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014737d0);
        (*pcVar2)();
      }
      *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
LAB_101473664:
    } while (puVar11 != puVar10);
  }
  return puVar1;
}



/* Entry: 1014737d4; end: 10147399b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014737d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  double dVar7;
  long lStack_f8;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined8 auStack_78 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c3e208(*(undefined8 *)(param_3 + _DAT_112da1130));
  uStack_68 = 0;
  uStack_60 = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c6142c(uStack_60);
  puVar6 = *(undefined8 **)(param_3 + _DAT_112da1120);
  uStack_68 = 0;
  puVar2 = puVar6;
  func_0x000107c4b948();
  uVar4 = uStack_68;
  if ((int)puVar2 == 0) {
    uVar3 = uStack_68;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar3);
    func_0x000107c61654();
    uStack_68 = 0;
    uStack_60 = 0xe000000000000000;
    func_0x000107c602fc(0x41);
    puVar6 = &uStack_68;
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    uVar3 = 0x112d393f0;
    auStack_78[0] = uVar4;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(auStack_78,&uStack_68,uVar3,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(uVar4);
    func_0x000107c6142c(uStack_60);
  }
  else {
    func_0x000107c61174();
    FUN_10146fbac(puVar6,param_4);
    func_0x000107c5d284(puVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    lVar5 = puVar6[3];
    dVar7 = (double)puVar6[4];
    if ((*(byte *)(puVar6 + 2) & 1) != 0) {
      func_0x000107c61428(lVar5 + 0x10,auStack_d8,0,0);
      lVar5 = lVar5 + 0x10;
      func_0x000107c61618();
      lVar1 = _DAT_112da10e0;
      if (lVar5 != 0) {
        func_0x000107c61428(lVar5 + _DAT_112da10e0,auStack_f0,0,0);
        if (*(char *)(lVar5 + lVar1) == '\x01') {
          func_0x000100083b20(&lStack_f8);
          lVar1 = lStack_f8;
          func_0x000107c41948();
          func_0x000107c61180();
          func_0x000107c615e8(lStack_f8);
          if (lVar1 != 0) {
            func_0x000107c41a8c((float)dVar7,lVar1);
            func_0x000107c615e8(lVar1);
          }
        }
        func_0x000107c61170(lVar5);
      }
    }
    return;
  }
  return;
}



/* Entry: 10147399c; end: 1014739ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10147399c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  dVar3 = *(double *)(unaff_x20 + 0x20);
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    lVar1 = _DAT_112da10e0;
    if (lVar2 != 0) {
      func_0x000107c61428(lVar2 + _DAT_112da10e0,auStack_70,0,0);
      if (*(char *)(lVar2 + lVar1) == '\x01') {
        func_0x000100083b20(&lStack_78);
        lVar1 = lStack_78;
        func_0x000107c41948();
        func_0x000107c61180();
        func_0x000107c615e8(lStack_78);
        if (lVar1 != 0) {
          func_0x000107c41a8c((float)dVar3,lVar1);
          func_0x000107c615e8(lVar1);
        }
      }
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 1014739ac; end: 1014739eb;  */

void FUN_1014739ac(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000107c5f1e0(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1014739ec; end: 1014739f7;  */

void FUN_1014739ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1014739f8; end: 101473a3f;  */

void FUN_1014739f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_101473a40(param_1,param_2,param_3);
  return;
}



/* Entry: 101473a40; end: 101473c87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101473a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined1 *)(unaff_x20 + _DAT_112da11e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da11e8) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112da11f0) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112da11f8) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112da1200) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112da1208) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112da1210) = 0;
  lVar2 = _DAT_112da1218;
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112da1220) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112da1228) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112da1230) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112da1238) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112da1240) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112da1248) = 0;
  *(undefined4 *)(unaff_x20 + _DAT_112da1250) = 0x3f800000;
  *(undefined4 *)(unaff_x20 + _DAT_112da1258) = 0x3f800000;
  *(undefined4 *)(unaff_x20 + _DAT_112da1260) = 0x3f800000;
  *(undefined4 *)(unaff_x20 + _DAT_112da1268) = 0x3f800000;
  *(undefined4 *)(unaff_x20 + _DAT_112da1270) = 0x3f800000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112da1278);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da1280) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112da1288) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112da1290);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112da1298) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112da12a0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112da12a8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112da12b0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112da12b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da12c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da12c8) = 0;
  *(undefined **)(unaff_x20 + _DAT_112da12d0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112da12d8) = 0x1e;
  *(undefined8 *)(unaff_x20 + _DAT_112da12e0) = 0x1e;
  *(undefined8 *)(unaff_x20 + _DAT_112da12e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da12f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112da12f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112da1300) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101473c88; end: 101473cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101473c88(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112da1210;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112da1210);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 101473cf4; end: 101473cf7;  */

void FUN_101473cf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 101473cf8; end: 101473db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101473cf8(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112da12a0;
  func_0x000107c61428(unaff_x20 + _DAT_112da12a0,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  lVar1 = _DAT_112da1238;
  func_0x000107c61428(unaff_x20 + _DAT_112da1238,auStack_60,0,0);
  if (*(char *)(unaff_x20 + lVar1) == '\x01') {
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    func_0x000107c41948();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_68);
    if (lVar1 != 0) {
      func_0x000107c41a48(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 101473db8; end: 101473dff; -[_TtC22SCManagedCaptureDevice28MockManagedCaptureDeviceImpl getDeviceInput] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101473db8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112da12e8;
  func_0x000107c61428(param_1 + _DAT_112da12e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101473e00; end: 101473e5f; -[_TtC22SCManagedCaptureDevice28MockManagedCaptureDeviceImpl init] */

void FUN_101473e00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCManagedCaptureDevice.MockManagedCaptureDeviceImpl",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101473e2c);
  (*pcVar1)();
}



/* Entry: 101473e60; end: 101473f37; -[_TtC22SCManagedCaptureDevice28MockManagedCaptureDeviceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101473e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101473eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101473ecc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101473eb0) */
/* WARNING: Removing unreachable block (ram,0x000101473e90) */
/* WARNING: Removing unreachable block (ram,0x000101473ed0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101473e60(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da1300));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da1210));
  return;
}



/* Entry: 101473f38; end: 101473f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101473f38(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112da11e0;
  func_0x000107c61428(unaff_x20 + _DAT_112da11e0,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 101473f84; end: 101474103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101473f84(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112da11e0;
  func_0x000107c61428(unaff_x20 + _DAT_112da11e0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x101474bfc;
  return auVar2;
}



/* Entry: 101474104; end: 101474107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101474104(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112da1210;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112da1210);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 101474108; end: 1014741bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101474108(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112da11f0;
  func_0x000107c61428(unaff_x20 + _DAT_112da11f0,auStack_48,0,0);
  lVar2 = _DAT_112da11f8;
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61428(unaff_x20 + _DAT_112da11f8,auStack_60,1,0);
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  return;
}



/* Entry: 1014741bc; end: 1014741bf;  */

void FUN_1014741bc(void)

{
  return;
}



/* Entry: 1014741c0; end: 10147433f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014741c0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112da12f0;
  func_0x000107c61428(unaff_x20 + _DAT_112da12f0,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Entry: 101474340; end: 10147434f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101474340(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + _DAT_112da1218));
  return;
}



/* Entry: 101474350; end: 10147438f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101474350(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112da1248;
  func_0x000107c61428(unaff_x20 + _DAT_112da1248,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 101474390; end: 1014743db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101474390(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112da1248;
  func_0x000107c61428(unaff_x20 + _DAT_112da1248,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 1014743dc; end: 10147441b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1014743dc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112da1248;
  func_0x000107c61428(unaff_x20 + _DAT_112da1248,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x101474c00;
  return auVar2;
}



/* Entry: 10147441c; end: 10147441f;  */

void FUN_10147441c(void)

{
  return;
}



/* Entry: 101474420; end: 101474573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101474420(void)

{
  undefined4 *puVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined4 *)(unaff_x20 + _DAT_112da1250);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  return *puVar1;
}



/* Entry: 101474574; end: 10147457b;  */

undefined8 FUN_101474574(void)

{
  return 0;
}



/* Entry: 10147457c; end: 1014745cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10147457c(undefined4 param_1)

{
  undefined4 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined4 *)(unaff_x20 + _DAT_112da1270);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  *puVar1 = param_1;
  return;
}



/* Entry: 1014745cc; end: 1014745df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014745cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112da1278);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}


